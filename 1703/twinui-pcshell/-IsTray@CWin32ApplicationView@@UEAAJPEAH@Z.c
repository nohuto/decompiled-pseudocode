/*
 * XREFs of ?IsTray@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18007CF30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::IsTray(CWin32ApplicationView *this, int *a2)
{
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 56LL))(*((_QWORD *)this + 21));
  return 0LL;
}
