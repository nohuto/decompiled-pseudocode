/*
 * XREFs of ?_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ @ 0x1800265F4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___::Run @ 0x18000D1E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180003FE4 (--4-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x18000B5C4 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029EA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImme.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveMode::_OnLauncherVisibilityChanged(CImmersiveMode *this)
{
  CWRLObjectWithGITSite *v2; // rcx
  int (*v3)(CWRLObjectWithGITSite *__hidden, const struct _GUID *, void **); // rax
  void *v4; // rcx
  bool v5; // bl
  IUnknown *v6; // rcx
  ULONG (__stdcall *Release)(IUnknown *); // rax
  void *v8; // rbx
  unsigned __int64 i; // r15
  __int64 v10; // rdi
  int v11; // ebx
  void *v12; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+70h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+78h] [rbp+40h] BYREF
  IUnknown *punk; // [rsp+80h] [rbp+48h] BYREF
  __int64 v17; // [rsp+88h] [rbp+50h] BYREF

  v17 = 0LL;
  ppvOut = 0LL;
  v2 = (CImmersiveMode *)((char *)this + 32);
  punk = 0LL;
  v14 = 2;
  v3 = *(int (**)(CWRLObjectWithGITSite *__hidden, const struct _GUID *, void **))(*(_QWORD *)v2 + 32LL);
  if ( v3 == CWRLObjectWithGITSite::GetSite )
    CWRLObjectWithGITSite::GetSite(v2, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  else
    ((void (__fastcall *)(CWRLObjectWithGITSite *, GUID *, IUnknown **))v3)(
      v2,
      &GUID_00000000_0000_0000_c000_000000000046,
      &punk);
  v4 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = IUnknown_QueryService(
         punk,
         (const GUID *const)&SID_ImmersiveLauncher,
         &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
         &ppvOut) >= 0;
  v6 = punk;
  if ( punk )
  {
    punk = 0LL;
    Release = v6->lpVtbl->Release;
    if ( (char *)Release == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::Release(v6);
    else
      ((void (__fastcall *)(IUnknown *))Release)(v6);
  }
  if ( v5 && (*(int (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, &v14) >= 0 && v14 )
  {
    v8 = ppvOut;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v17);
    (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v8 + 88LL))(v8, &v17);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IViewWrapperInternal>::operator=((__int64 *)this + 48, &v17);
  for ( i = 0LL; i < *((_QWORD *)this + 55); ++i )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 54) + 8 * i);
    v11 = *((_DWORD *)this + 84);
    *(_BYTE *)(v10 + 13) = (unsigned int)SHIsSameObject(*(struct IUnknown **)v10, *((struct IUnknown **)this + 48)) != 0;
    CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(v10, v11);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
