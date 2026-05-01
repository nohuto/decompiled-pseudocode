/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001A818
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001A410 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@UIWeakRef.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationManagerSafeForSyncCallouts@@U?$InterfaceList@UIApplicationStateChangeHandler@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@UIRequestTrustedComponentForegroundControlInitialization@@U?$InterfaceList@UIAppSwitchingTestability@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001AA58 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$InterfaceL_ea_18001AA58.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIPrivilegedOperationsConsumer@@U?$InterfaceList@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@UIImmersiveApplicationTerminator@@U?$InterfaceList@UIImmersiveApplicationTitleBarManager@@U?$InterfaceList@UIUncloakWindowService@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001AB4C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@UIPrivile.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,1,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = a1;
  if ( *a2 == 2019606680
    && a2[1] == *(_DWORD *)&GUID_7860c098_fb29_49aa_a512_adacc0ffee84.Data2
    && a2[2] == *(_DWORD *)GUID_7860c098_fb29_49aa_a512_adacc0ffee84.Data4
    && a2[3] == *(_DWORD *)&GUID_7860c098_fb29_49aa_a512_adacc0ffee84.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  v5 = a1 + 8;
  if ( *a2 == 1953917369
    && a2[1] == *(_DWORD *)&GUID_747669b9_e53c_46ce_b0d5_6629c216fafc.Data2
    && a2[2] == *(_DWORD *)GUID_747669b9_e53c_46ce_b0d5_6629c216fafc.Data4
    && a2[3] == *(_DWORD *)&GUID_747669b9_e53c_46ce_b0d5_6629c216fafc.Data4[4]
    || (v5 += 8LL, *a2 == -1670074043)
    && a2[1] == *(_DWORD *)&GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee.Data2
    && a2[2] == *(_DWORD *)GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee.Data4
    && a2[3] == *(_DWORD *)&GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee.Data4[4] )
  {
    *a3 = v5;
    result = 0LL;
  }
  else
  {
    result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationManagerSafeForSyncCallouts,Microsoft::WRL::Details::InterfaceList<IApplicationStateChangeHandler,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IRequestTrustedComponentForegroundControlInitialization,Microsoft::WRL::Details::InterfaceList<IAppSwitchingTestability,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(
               v5 + 8,
               a2,
               a3,
               v3);
  }
  if ( (int)result < 0 )
  {
    v6 = v3 + 64;
    if ( *a2 == -1506570009
      && a2[1] == *(_DWORD *)&GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0.Data2
      && a2[2] == *(_DWORD *)GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0.Data4
      && a2[3] == *(_DWORD *)&GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0.Data4[4]
      || (v6 = v3 + 72, *a2 == 924729926)
      && a2[1] == *(_DWORD *)&GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164.Data2
      && a2[2] == *(_DWORD *)GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164.Data4
      && a2[3] == *(_DWORD *)&GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164.Data4[4]
      || (v6 = v3 + 80, *a2 == 1091856950)
      && a2[1] == *(_DWORD *)&GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b.Data2
      && a2[2] == *(_DWORD *)GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b.Data4
      && a2[3] == *(_DWORD *)&GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b.Data4[4] )
    {
      *a3 = v6;
      return 0LL;
    }
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IPrivilegedOperationsConsumer,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTerminator,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTitleBarManager,Microsoft::WRL::Details::InterfaceList<IUncloakWindowService,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(v3 + 88);
  }
  return result;
}
