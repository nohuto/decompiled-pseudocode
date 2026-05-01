/*
 * XREFs of ?SetFocus@CWin32ApplicationView@@UEAAJXZ @ 0x180140970
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x18002A2B4 (-GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::SetFocus(CWin32ApplicationView *this)
{
  int SwitchWindow; // eax
  unsigned int v2; // ebx
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND hWnd; // [rsp+38h] [rbp+10h] BYREF

  SwitchWindow = CWin32ApplicationView::GetSwitchWindow(this, &hWnd);
  v2 = 0;
  v3 = SwitchWindow;
  if ( SwitchWindow >= 0 )
  {
    if ( !SetForegroundWindow(hWnd) )
    {
      v2 = -2147024891;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAF,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)0x80070005LL);
    }
    return v2;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)SwitchWindow);
    return v3;
  }
}
