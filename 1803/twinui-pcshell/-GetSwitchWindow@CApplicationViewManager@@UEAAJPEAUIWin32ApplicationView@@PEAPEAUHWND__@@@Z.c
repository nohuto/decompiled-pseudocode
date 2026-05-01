/*
 * XREFs of ?GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z @ 0x18013B6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B7C8 (-InternalRelease@-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x18002A2B4 (-GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::GetSwitchWindow(
        CApplicationViewManager *this,
        struct IWin32ApplicationView *a2,
        HWND *a3)
{
  int SwitchWindow; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CWin32ApplicationView *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(&v10);
  SwitchWindow = (**(__int64 (__fastcall ***)(struct IWin32ApplicationView *, GUID *, CWin32ApplicationView **))a2)(
                   a2,
                   &GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3,
                   &v10);
  v6 = SwitchWindow;
  if ( SwitchWindow < 0 )
  {
    v7 = 645LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)SwitchWindow);
    goto LABEL_6;
  }
  SwitchWindow = CWin32ApplicationView::GetSwitchWindow(v10, a3);
  v6 = SwitchWindow;
  if ( SwitchWindow < 0 )
  {
    v7 = 647LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(&v10);
  return v6;
}
