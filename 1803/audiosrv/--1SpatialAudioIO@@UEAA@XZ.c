/*
 * XREFs of ??1SpatialAudioIO@@UEAA@XZ @ 0x18004D22C
 * Callers:
 *     ??_GSpatialAudioDeviceStateReader@@UEAAPEAXI@Z @ 0x18004D440 (--_GSpatialAudioDeviceStateReader@@UEAAPEAXI@Z.c)
 *     ??_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z @ 0x1801023C0 (--_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z.c)
 *     ??_GSpatialAudioIO@@UEAAPEAXI@Z @ 0x180102420 (--_GSpatialAudioIO@@UEAAPEAXI@Z.c)
 *     ??_GSpatialAudioStateIO@@UEAAPEAXI@Z @ 0x180102450 (--_GSpatialAudioStateIO@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpatialAudioIO::~SpatialAudioIO(SpatialAudioIO *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &SpatialAudioIO::`vftable';
  v2 = *((_QWORD *)this + 67);
  if ( v2 )
  {
    *((_QWORD *)this + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IPropertyStore>::InternalRelease((char *)this + 528);
}
