/*
 * XREFs of ?SetViewState@CWin32ApplicationView@@UEAAJI@Z @ 0x18007F8C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::SetViewState(CWin32ApplicationView *this, unsigned int a2)
{
  HWND v3; // rax

  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24));
  PostMessageW(v3, 0x112u, a2, 0LL);
  return 0LL;
}
