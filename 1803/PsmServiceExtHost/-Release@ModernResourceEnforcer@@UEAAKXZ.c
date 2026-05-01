/*
 * XREFs of ?Release@ModernResourceEnforcer@@UEAAKXZ @ 0x180015530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::Release(ModernResourceEnforcer *this)
{
  int v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 60);
  if ( v1 < 0 )
    __fastfail(0x80004005);
  if ( !v1 && this )
    (*(void (__fastcall **)(ModernResourceEnforcer *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  return (unsigned int)v1;
}
