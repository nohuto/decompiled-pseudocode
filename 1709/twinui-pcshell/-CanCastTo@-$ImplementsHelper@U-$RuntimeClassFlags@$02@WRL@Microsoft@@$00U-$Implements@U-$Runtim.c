/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001B598
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001B3F8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveApplicationManagerSafeForSyncCallouts@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001B7F4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveApplicationM.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001B8EC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIPrivilegedOperationsC.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplicationNotificationService,IImmersiveAppNotificationListeners,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rcx
  int CanCastTo; // eax
  __int64 v8; // rcx

  v3 = 0LL;
  v4 = a1;
  if ( *a2 == 2019606680
    && a2[1] == *(_DWORD *)&GUID_7860c098_fb29_49aa_a512_adacc0ffee84.Data2
    && a2[2] == *(_DWORD *)GUID_7860c098_fb29_49aa_a512_adacc0ffee84.Data4
    && a2[3] == *(_DWORD *)&GUID_7860c098_fb29_49aa_a512_adacc0ffee84.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
    v5 = a1 + 8;
    if ( *a2 == 1953917369
      && a2[1] == *(_DWORD *)&GUID_747669b9_e53c_46ce_b0d5_6629c216fafc.Data2
      && a2[2] == *(_DWORD *)GUID_747669b9_e53c_46ce_b0d5_6629c216fafc.Data4
      && a2[3] == *(_DWORD *)&GUID_747669b9_e53c_46ce_b0d5_6629c216fafc.Data4[4] )
    {
      *a3 = v5;
    }
    else
    {
      v6 = v5 + 8;
      if ( *a2 == -1670074043
        && a2[1] == *(_DWORD *)&GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee.Data2
        && a2[2] == *(_DWORD *)GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee.Data4
        && a2[3] == *(_DWORD *)&GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee.Data4[4] )
      {
        *a3 = v6;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationManagerSafeForSyncCallouts,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability>::CanCastTo(
                      v6 + 8,
                      a2,
                      a3,
                      0LL);
      }
      if ( CanCastTo < 0 )
      {
        v8 = v4 + 72;
        if ( *a2 == -1506570009
          && a2[1] == *(_DWORD *)&GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0.Data2
          && a2[2] == *(_DWORD *)GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0.Data4
          && a2[3] == *(_DWORD *)&GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0.Data4[4]
          || (v8 = v4 + 80, *a2 == 924729926)
          && a2[1] == *(_DWORD *)&GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164.Data2
          && a2[2] == *(_DWORD *)GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164.Data4
          && a2[3] == *(_DWORD *)&GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164.Data4[4]
          || (v8 = v4 + 88, *a2 == 1091856950)
          && a2[1] == *(_DWORD *)&GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b.Data2
          && a2[2] == *(_DWORD *)GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b.Data4
          && a2[3] == *(_DWORD *)&GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b.Data4[4] )
        {
          *a3 = v8;
        }
        else
        {
          LODWORD(v3) = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService>::CanCastTo(
                          v4 + 96,
                          a2,
                          a3,
                          v3);
        }
        LODWORD(v3) = ((int)v3 >> 31) & 0x80004002;
      }
    }
  }
  return (unsigned int)v3;
}
