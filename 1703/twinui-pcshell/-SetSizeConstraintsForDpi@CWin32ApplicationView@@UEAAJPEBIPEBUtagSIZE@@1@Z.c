/*
 * XREFs of ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18007CD90
 * Callers:
 *     ?SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z @ 0x18007D5D0 (-SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180073730 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180077610 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@V_ea_180077610.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x18007A6D0 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::SetSizeConstraintsForDpi(
        RTL_SRWLOCK *this,
        const unsigned int *a2,
        const struct tagSIZE *a3,
        const struct tagSIZE *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *ViewManager; // rax
  __int64 v11; // rcx
  __int128 v13; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned __int64 v16; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp+40h]
  PSRWLOCK SRWLock; // [rsp+98h] [rbp+48h] BYREF

  wil::srwlock::lock_exclusive(this + 4, &SRWLock);
  (*(void (__fastcall **)(PVOID, __int128 *, _QWORD))(*(_QWORD *)this[22].Ptr + 24LL))(this[22].Ptr, &v13, *a2);
  v17 = (unsigned __int64)*a4;
  v16 = (unsigned __int64)*a3;
  v14[0] = v16;
  v14[1] = v17;
  if ( v13 != __PAIR128__(v17, v16) )
  {
    v8 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD *))(*(_QWORD *)this[22].Ptr + 32LL))(this[22].Ptr, *a2, v14);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x270,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_7;
    }
    ViewManager = ApplicationViewManagement::CGlobals::GetViewManager((__int64 *)&v16);
    CApplicationViewManager::RaiseApplicationViewChanged(*ViewManager + 104, (__int64)this, 0xFu, 0LL);
    v11 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
    }
  }
  v9 = 0;
LABEL_7:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v9;
}
