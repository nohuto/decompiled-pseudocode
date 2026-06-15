/*
 * XREFs of ?Release@CRefCountedObject@@QEAAJXZ @ 0x18004A884
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18004749C (--1CAudioSession@@MEAA@XZ.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x18004A730 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     ?RemoveDuckingManagerGainStage@CAudioSession@@UEAAJ_NPEA_J@Z @ 0x1800AC990 (-RemoveDuckingManagerGainStage@CAudioSession@@UEAAJ_NPEA_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
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
