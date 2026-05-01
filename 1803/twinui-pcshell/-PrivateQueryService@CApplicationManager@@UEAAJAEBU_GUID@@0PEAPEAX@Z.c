/*
 * XREFs of ?PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18003BE40
 * Callers:
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800157F0 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?QueryObject@CImmersiveWindowManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180070990 (-QueryObject@CImmersiveWindowManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _lambda_aa8acc1eed1698d6ba192654be930d00_::operator() @ 0x18008CF5C (_lambda_aa8acc1eed1698d6ba192654be930d00_--operator().c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180029B70 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiv_ea_180029B70.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029CC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F1508 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall CApplicationManager::PrivateQueryService(
        CApplicationManager *this,
        struct _GUID *a2,
        struct _GUID *a3,
        void **a4)
{
  unsigned int v4; // ebx
  __int64 (__fastcall *v5)(__int64, struct _GUID *, void **); // rdi
  _DWORD *v6; // rcx
  volatile signed __int64 *v7; // r9
  volatile signed __int64 **v8; // r11
  _DWORD *v9; // rcx
  __int64 v10; // r9
  const struct _GUID *v11; // r10
  void **v12; // r11
  int CanCastTo; // eax
  _DWORD *v14; // r10
  _DWORD *v15; // rcx
  void *v16; // r8
  _DWORD *v17; // rcx
  void *v18; // r8
  _DWORD *v19; // r10
  _DWORD *v20; // rcx
  void *v21; // r9
  __int64 v22; // r9
  unsigned int (__fastcall *v24)(__int64); // rax
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  char *v28; // rcx

  *a4 = 0LL;
  v4 = -2147467262;
  if ( *(_OWORD *)a2 != *(_OWORD *)&SID_ImmersiveApplicationListeners.Revision )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ProcessLifetimeManagerControl.Revision
      && *(_QWORD *)a2->Data4 == *(_QWORD *)SID_ProcessLifetimeManagerControl.SubAuthority )
    {
      v28 = (char *)*((_QWORD *)this + 48);
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee.Data4 )
    {
      v28 = (char *)*((_QWORD *)this + 44);
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ImmersiveApplicationManagerPriv.Revision
           && *(_QWORD *)a2->Data4 == *(_QWORD *)SID_ImmersiveApplicationManagerPriv.SubAuthority )
    {
      v28 = (char *)this - 192;
      if ( **(__int64 (__fastcall ***)(__int64, _DWORD *, _QWORD *))v28 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::QueryInterface )
        return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::QueryInterface(
                 (__int64)v28,
                 a3,
                 a4);
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data4 )
    {
      v28 = (char *)*((_QWORD *)this + 43);
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IImmersiveWindowManager.Data1
        && *(_QWORD *)a2->Data4 == *(_QWORD *)IID_IImmersiveWindowManager.Data4 )
      {
        return CApplicationManager::_IWMFromWindow((CApplicationManager *)((char *)this - 192), (HWND)a2, a3, a4);
      }
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data1
        && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data4 )
      {
        v28 = (char *)*((_QWORD *)this + 51);
      }
      else
      {
        if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_33ebffef_6a18_4802_8f40_9330e473ed1c.Data1
          || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_33ebffef_6a18_4802_8f40_9330e473ed1c.Data4 )
        {
          return v4;
        }
        v28 = (char *)*((_QWORD *)this + 70);
      }
    }
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, struct _GUID *, void **))v28)(v28, a3, a4);
  }
  v5 = (__int64 (__fastcall *)(__int64, struct _GUID *, void **))**((_QWORD **)this - 24);
  if ( (char *)v5 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::QueryInterface )
    return (unsigned int)v5((__int64)this - 192, a3, a4);
  *a4 = 0LL;
  if ( !InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *v12 = (void *)v10;
      v4 = 0;
LABEL_22:
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v12 + 8LL))(*v12);
      return v4;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v10 + 8), v11, v12);
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(v14, &GUID_00000038_0000_0000_c000_000000000046) )
      {
        *v12 = v16;
        v4 = 0;
        goto LABEL_22;
      }
      if ( InlineIsEqualGUID(v15, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352) )
      {
        *v12 = v18;
        CanCastTo = 0;
      }
      else if ( InlineIsEqualGUID(v17, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4) )
      {
        *v12 = v21;
        CanCastTo = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(v20, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa) )
        {
          *v12 = (void *)(v22 + 8);
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = -2147467262;
        }
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
      }
      if ( CanCastTo == -2147467262 )
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::CanCastTo(
                      (__int64)v18 + 104,
                      v19,
                      v12);
    }
    v4 = CanCastTo;
    if ( CanCastTo >= 0 )
      goto LABEL_22;
    return v4;
  }
  *v8 = v7;
  v24 = *(unsigned int (__fastcall **)(__int64))(*v7 + 8);
  if ( v24 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IImmersiveApplicationManager,IImmersiveShellHookNotification,IImmersiveApplicationArrayService,IImmersiveApplicationArrayService2,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::AddRef )
  {
    v25 = *((_QWORD *)v7 + 47);
    while ( v25 >= 0 )
    {
      if ( (_DWORD)v25 == 0x7FFFFFFF )
        return 0LL;
      v26 = v25;
      v25 = _InterlockedCompareExchange64(v7 + 47, v25 + 1, v25);
      if ( v26 == v25 )
        return 0LL;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v25 + 16));
    return 0LL;
  }
  else
  {
    v24((__int64)v7);
    return 0LL;
  }
}
