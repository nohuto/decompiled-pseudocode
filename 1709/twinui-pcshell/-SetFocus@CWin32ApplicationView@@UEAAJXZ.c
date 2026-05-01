/*
 * XREFs of ?SetFocus@CWin32ApplicationView@@UEAAJXZ @ 0x18007E5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x180080748 (-GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::SetFocus(CWin32ApplicationView *this)
{
  int SwitchWindow; // eax
  unsigned int v2; // ebx
  BOOL v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND hWnd; // [rsp+38h] [rbp+10h] BYREF

  SwitchWindow = CWin32ApplicationView::GetSwitchWindow(this, &hWnd);
  v2 = SwitchWindow;
  if ( SwitchWindow >= 0 )
  {
    v3 = SetForegroundWindow(hWnd);
    v2 = !v3 ? 0x80070005 : 0;
    if ( !v3 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAF,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)v2);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xAD,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)SwitchWindow);
  }
  return v2;
}
