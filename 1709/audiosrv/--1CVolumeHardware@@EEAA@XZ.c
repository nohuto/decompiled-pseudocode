/*
 * XREFs of ??1CVolumeHardware@@EEAA@XZ @ 0x180067F68
 * Callers:
 *     ??_ECVolumeHardware@@EEAAPEAXI@Z @ 0x180068000 (--_ECVolumeHardware@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVolumeHardware::~CVolumeHardware(CVolumeHardware *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CVolumeHardware::`vftable';
  v2 = *((_QWORD *)this + 31);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 30);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  CVolumeControlBase::~CVolumeControlBase(this);
}
