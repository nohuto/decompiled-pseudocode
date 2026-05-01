/*
 * XREFs of ?v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z @ 0x18007F020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::v_GetProcessId(CWin32ApplicationView *this, unsigned int *a2)
{
  HWND v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24));
  if ( GetWindowThreadProcessId(v3, a2) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x187,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
