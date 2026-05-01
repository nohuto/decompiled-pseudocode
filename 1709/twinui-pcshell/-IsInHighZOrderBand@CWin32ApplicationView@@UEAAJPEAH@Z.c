/*
 * XREFs of ?IsInHighZOrderBand@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18007FEE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::IsInHighZOrderBand(CWin32ApplicationView *this, int *a2)
{
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 64LL))(*((_QWORD *)this + 24));
  return 0LL;
}
