/*
 * XREFs of ?IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18007D350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::IsMirrored(CWin32ApplicationView *this, unsigned int *a2)
{
  HWND v3; // rax

  *a2 = 0;
  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 24LL))(*((_QWORD *)this + 21));
  *a2 = ((unsigned int)GetWindowLongW(v3, -20) >> 22) & 1;
  return 0LL;
}
