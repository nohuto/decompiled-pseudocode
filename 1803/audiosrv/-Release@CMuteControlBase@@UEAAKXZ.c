/*
 * XREFs of ?Release@CMuteControlBase@@UEAAKXZ @ 0x1800A16E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMuteControlBase::Release(CMuteControlBase *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(CMuteControlBase *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  return v1;
}
