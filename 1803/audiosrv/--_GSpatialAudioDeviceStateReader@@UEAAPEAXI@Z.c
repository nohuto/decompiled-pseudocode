/*
 * XREFs of ??_GSpatialAudioDeviceStateReader@@UEAAPEAXI@Z @ 0x18004D440
 * Callers:
 *     ??_ESpatialAudioDeviceStateReader@@WCDI@EAAPEAXI@Z @ 0x180066230 (--_ESpatialAudioDeviceStateReader@@WCDI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ??1SpatialAudioIO@@UEAA@XZ @ 0x18004D22C (--1SpatialAudioIO@@UEAA@XZ.c)
 */

SpatialAudioDeviceStateReader *__fastcall SpatialAudioDeviceStateReader::`scalar deleting destructor'(
        SpatialAudioDeviceStateReader *this,
        char a2)
{
  *((_DWORD *)this + 153) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 75);
  *(_QWORD *)this = &SpatialAudioStateIO::`vftable';
  SpatialAudioIO::~SpatialAudioIO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
