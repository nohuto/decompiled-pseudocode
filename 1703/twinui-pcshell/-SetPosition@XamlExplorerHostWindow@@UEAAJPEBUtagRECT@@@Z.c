/*
 * XREFs of ?SetPosition@XamlExplorerHostWindow@@UEAAJPEBUtagRECT@@@Z @ 0x18012AF80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall XamlExplorerHostWindow::SetPosition(XamlExplorerHostWindow *this, const struct tagRECT *a2)
{
  HWND v2; // rcx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (HWND)*((_QWORD *)this + 7);
  if ( v2 )
  {
    if ( SetWindowPos(v2, 0LL, a2->left, a2->top, a2->right - a2->left, a2->bottom - a2->top, 0x14u) )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x2A,
               (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
               v4);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
