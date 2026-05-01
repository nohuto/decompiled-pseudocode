/*
 * XREFs of ?GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x18013B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B7C8 (-InternalRelease@-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002C430 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::GetOwnerAppView(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2,
        struct IApplicationView **a3)
{
  int ViewForHwnd; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CWin32ApplicationView *v13; // [rsp+48h] [rbp+10h] BYREF
  HWND v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(&v13);
  ViewForHwnd = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, CWin32ApplicationView **))a2)(
                  a2,
                  &GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3,
                  &v13);
  v7 = ViewForHwnd;
  if ( ViewForHwnd < 0 )
  {
    v8 = 656LL;
LABEL_7:
    v10 = (unsigned int)ViewForHwnd;
    goto LABEL_8;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)v13 + 26) + 48LL))(*((_QWORD *)v13 + 26), &v14);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x354,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v9);
    v10 = v7;
    v8 = 659LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v10);
    goto LABEL_9;
  }
  ViewForHwnd = CApplicationViewManager::GetViewForHwnd(this - 1, v14, a3);
  v7 = ViewForHwnd;
  if ( ViewForHwnd < 0 )
  {
    v8 = 661LL;
    goto LABEL_7;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(&v13);
  return v7;
}
