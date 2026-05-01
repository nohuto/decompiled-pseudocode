/*
 * XREFs of ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x18002A2B4
 * Callers:
 *     ?GetShowInSwitchers@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18002A9C0 (-GetShowInSwitchers@CWin32ApplicationView@@UEAAJPEAH@Z.c)
 *     ?GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z @ 0x18013B6C0 (-GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?SetFocus@CWin32ApplicationView@@UEAAJXZ @ 0x180140970 (-SetFocus@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?SwitchTo@CWin32ApplicationView@@UEAAJXZ @ 0x180140FE0 (-SwitchTo@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ?GetWindow@CClassicWindowExternal@@UEAAPEAUHWND__@@XZ @ 0x180005770 (-GetWindow@CClassicWindowExternal@@UEAAPEAUHWND__@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetSwitchWindow(CWin32ApplicationView *this, HWND *a2)
{
  CClassicWindowExternal *v3; // rcx
  __int64 (*v4)(void); // rax
  HWND Window; // rax
  HWND v6; // rbx
  HWND v7; // rdi
  HWND LastActivePopup; // rax
  HWND v9; // rdi
  __int64 v10; // rax
  __int64 result; // rax
  HWND i; // rcx
  HWND v13; // rax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = (CClassicWindowExternal *)*((_QWORD *)this + 26);
  v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 24LL);
  if ( (char *)v4 == (char *)CClassicWindowExternal::GetWindow )
    Window = (HWND)CClassicWindowExternal::GetWindow(v3);
  else
    Window = (HWND)v4();
  v6 = Window;
  do
  {
    v7 = Window;
    Window = GetWindow(Window, 4u);
  }
  while ( Window );
  LastActivePopup = GetLastActivePopup(v7);
  v9 = LastActivePopup;
  if ( !LastActivePopup )
    goto LABEL_20;
  if ( LastActivePopup != v6 && IsWindowVisible(LastActivePopup) && IsWindowEnabled(v9) )
  {
    for ( i = v9; ; i = v13 )
    {
      v13 = GetWindow(i, 4u);
      if ( !v13 )
        break;
      if ( v13 == v6 )
        goto LABEL_19;
    }
    if ( v6 )
      goto LABEL_7;
LABEL_19:
    v6 = v9;
  }
LABEL_7:
  if ( v6 )
  {
    v10 = GhostWindowFromHungWindow(v6);
    if ( v10 )
      v6 = (HWND)v10;
    result = 0LL;
    *a2 = v6;
  }
  else
  {
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x346,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80070578LL,
      v14);
    return 2147943800LL;
  }
  return result;
}
