/*
 * XREFs of ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x140018880
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400189B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroke.c)
 * Callees:
 *     ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x140018790 (--1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001C890 (--3@YAXPEAX@Z.c)
 */

Windows::Media::Devices::Internal::AudioDeviceBroker *__fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::`vector deleting destructor'(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Windows::Media::Devices::Internal::AudioDeviceBroker::~AudioDeviceBroker(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
