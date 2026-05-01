/*
 * XREFs of ?SetActive@XamlExplorerHostWindow@@UEAAJXZ @ 0x18012AE10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall XamlExplorerHostWindow::SetActive(XamlExplorerHostWindow *this)
{
  HWND v1; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (HWND)*((_QWORD *)this + 7);
  if ( v1 )
  {
    if ( SetForegroundWindow(v1) )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
        (const char *)0x80070005LL);
      return 2147942405LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
