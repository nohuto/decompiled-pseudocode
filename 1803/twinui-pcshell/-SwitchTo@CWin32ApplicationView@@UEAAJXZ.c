/*
 * XREFs of ?SwitchTo@CWin32ApplicationView@@UEAAJXZ @ 0x180140FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x18002A2B4 (-GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::SwitchTo(CWin32ApplicationView *this)
{
  int SwitchWindow; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND hwnd; // [rsp+38h] [rbp+10h] BYREF

  SwitchWindow = CWin32ApplicationView::GetSwitchWindow(this, &hwnd);
  v2 = SwitchWindow;
  if ( SwitchWindow >= 0 )
  {
    SwitchToThisWindow(hwnd, 1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB5,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)SwitchWindow);
    return v2;
  }
}
