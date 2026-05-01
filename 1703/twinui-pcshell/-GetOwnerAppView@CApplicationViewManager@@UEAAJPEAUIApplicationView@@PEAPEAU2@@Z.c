/*
 * XREFs of ?GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x180073B10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180072740 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCApplicationViewBase@@U?$InterfaceList@UIWin32ApplicationView@@U?$InterfaceList@UIAppSizeConstraintsCallback@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800776D0 (-Release@-$RuntimeClass@U-$InterfaceList@VCApplicationViewBase@@U-$InterfaceList@UIWin32Applicat.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::GetOwnerAppView(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2,
        struct IApplicationView **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int ViewForHwnd; // eax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  HWND v15; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3,
         &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 638LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v7);
    goto LABEL_8;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**(_QWORD **)(v14 + 168) + 48LL))(*(_QWORD *)(v14 + 168), &v15);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x340,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v9);
    v7 = v6;
    v8 = 641LL;
    goto LABEL_5;
  }
  ViewForHwnd = CApplicationViewManager::GetViewForHwnd(this - 1, v15, a3);
  v6 = ViewForHwnd;
  if ( ViewForHwnd < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x283,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ViewForHwnd);
LABEL_8:
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CApplicationViewBase,Microsoft::WRL::Details::InterfaceList<IWin32ApplicationView,Microsoft::WRL::Details::InterfaceList<IAppSizeConstraintsCallback,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
  }
  return v6;
}
