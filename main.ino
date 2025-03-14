#include <BluetoothA2DPSink.h>
#include <I2S.h>

BluetoothA2DPSink a2dp_sink;

void setup() {
  Serial.begin(115200);
  I2S.begin(I2S_PHILIPS_MODE, 44100, 16); 
  a2dp_sink.start("INSERT CAR NAME");
}

void loop() {
}
