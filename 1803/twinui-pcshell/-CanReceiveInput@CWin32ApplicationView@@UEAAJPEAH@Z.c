/*
 * XREFs of ?CanReceiveInput@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18013EC80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::CanReceiveInput(CWin32ApplicationView *this, int *a2)
{
  HWND v3; // rax

  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26));
  *a2 = IsWindowEnabled(v3);
  return 0LL;
}
