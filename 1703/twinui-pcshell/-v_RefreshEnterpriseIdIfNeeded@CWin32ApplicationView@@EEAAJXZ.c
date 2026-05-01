/*
 * XREFs of ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x18007BFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180077610 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@V_ea_180077610.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCApplicationViewBase@@U?$InterfaceList@UIWin32ApplicationView@@U?$InterfaceList@UIAppSizeConstraintsCallback@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800776D0 (-Release@-$RuntimeClass@U-$InterfaceList@VCApplicationViewBase@@U-$InterfaceList@UIWin32Applicat.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x18007A6D0 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_ce4d9e76eff745711a6ec5f96b849fef__&___ptr64_ @ 0x18007E6B4 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_ce4d9e76eff745711a6ec5f96b849fef__-___ptr64.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWin32ApplicationView::v_RefreshEnterpriseIdIfNeeded(CWin32ApplicationView *this)
{
  signed __int32 i; // eax
  signed __int32 v3; // eax
  int v4; // ebx
  IUnknown **v5; // rax
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  HKEY v10; // rcx
  __int64 v11; // rcx
  _QWORD v13[7]; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v15; // [rsp+90h] [rbp+20h] BYREF
  __int64 v16; // [rsp+98h] [rbp+28h] BYREF
  CWin32ApplicationView *v17; // [rsp+A0h] [rbp+30h] BYREF
  CWin32ApplicationView *v18; // [rsp+A8h] [rbp+38h]

  if ( !*((_BYTE *)this + 40) )
    return 0LL;
  v18 = this;
  for ( i = *((_DWORD *)this + 41);
        i != 0x7FFFFFFF && i != _InterlockedCompareExchange((volatile signed __int32 *)this + 41, i + 1, i);
        i = *((_DWORD *)this + 41) )
  {
    ;
  }
  v17 = this;
  do
    v3 = *((_DWORD *)this + 41);
  while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange((volatile signed __int32 *)this + 41, v3 + 1, v3) );
  memset(v13, 0, 0x30uLL);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)v13);
  HIDWORD(v13[3]) = 1;
  v13[0] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v13[4] = 0LL;
  v13[0] = &ApplicationViewManagement::CGlobals::`vftable';
  v13[5] = 0LL;
  v4 = *(_DWORD *)(*ApplicationViewManagement::CGlobals::GetViewManager(&v16) + 216);
  v5 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_ce4d9e76eff745711a6ec5f96b849fef______ptr64_(
                      &v15,
                      &v17);
  v6 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v4, 0, *v5, 0LL);
  v7 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v8);
  }
  v9 = v13[5];
  if ( v13[5] )
  {
    v13[5] = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
  }
  v10 = (HKEY)v13[4];
  v13[4] = 0LL;
  if ( v10 )
    RegCloseKey(v10);
  HIDWORD(v13[3]) = -1073741823;
  v11 = v13[2];
  if ( v13[2] )
  {
    v13[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17F,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v6);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CApplicationViewBase,Microsoft::WRL::Details::InterfaceList<IWin32ApplicationView,Microsoft::WRL::Details::InterfaceList<IAppSizeConstraintsCallback,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)this);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CApplicationViewBase,Microsoft::WRL::Details::InterfaceList<IWin32ApplicationView,Microsoft::WRL::Details::InterfaceList<IAppSizeConstraintsCallback,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)this);
  return (unsigned int)v6;
}
