/*
 * XREFs of ?Release@CMeterControlBase@@UEAAKXZ @ 0x180083D80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterControlBase::Release(CMeterControlBase *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(CMeterControlBase *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  return v1;
}
