/*
 * XREFs of ?Release@CRefCountedObject@@QEAAJXZ @ 0x18006356C
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x180019B18 (--1CAudioSession@@MEAA@XZ.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x180063560 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x1800753D0 (-RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180076070 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRefCountedObject::Release(CRefCountedObject *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CRefCountedObject *))(*(_QWORD *)this + 16LL))(this);
    (*(void (__fastcall **)(CRefCountedObject *, __int64))(*(_QWORD *)this + 8LL))(this, 1LL);
  }
  return v2;
}
