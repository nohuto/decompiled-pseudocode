/*
 * XREFs of ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x1400173E0
 * Callers:
 *     ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x140016E40 (-Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ.c)
 * Callees:
 *     ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x1400172F0 (--1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
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
