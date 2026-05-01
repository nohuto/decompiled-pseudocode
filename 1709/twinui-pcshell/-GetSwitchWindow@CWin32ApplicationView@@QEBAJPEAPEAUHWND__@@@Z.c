/*
 * XREFs of ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x180080748
 * Callers:
 *     ?GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z @ 0x180076870 (-GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?SetFocus@CWin32ApplicationView@@UEAAJXZ @ 0x18007E5B0 (-SetFocus@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?SwitchTo@CWin32ApplicationView@@UEAAJXZ @ 0x18007E620 (-SwitchTo@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?GetShowInSwitchers@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18007F9A0 (-GetShowInSwitchers@CWin32ApplicationView@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetSwitchWindow(CWin32ApplicationView *this, HWND *a2)
{
  HWND Window; // rax
  HWND v4; // rbx
  HWND v5; // rdi
  HWND LastActivePopup; // rax
  HWND v7; // rdi
  HWND i; // rcx
  HWND v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  Window = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24));
  v4 = Window;
  do
  {
    v5 = Window;
    Window = GetWindow(Window, 4u);
  }
  while ( Window );
  LastActivePopup = GetLastActivePopup(v5);
  v7 = LastActivePopup;
  if ( !LastActivePopup )
    goto LABEL_17;
  if ( LastActivePopup != v4 && IsWindowVisible(LastActivePopup) && IsWindowEnabled(v7) )
  {
    for ( i = v7; ; i = v9 )
    {
      v9 = GetWindow(i, 4u);
      if ( !v9 )
        break;
      if ( v9 == v4 )
        goto LABEL_12;
    }
    if ( v4 )
      goto LABEL_13;
LABEL_12:
    v4 = v7;
  }
LABEL_13:
  if ( v4 )
  {
    v10 = GhostWindowFromHungWindow(v4);
    if ( v10 )
      v4 = (HWND)v10;
    result = 0LL;
    *a2 = v4;
  }
  else
  {
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32F,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80070578LL);
    return 2147943800LL;
  }
  return result;
}
