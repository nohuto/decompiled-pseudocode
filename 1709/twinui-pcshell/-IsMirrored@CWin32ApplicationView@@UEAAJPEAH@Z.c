/*
 * XREFs of ?IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x180080360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::IsMirrored(CWin32ApplicationView *this, unsigned int *a2)
{
  HWND v3; // rax

  *a2 = 0;
  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24));
  *a2 = ((unsigned int)GetWindowLongW(v3, -20) >> 22) & 1;
  return 0LL;
}
