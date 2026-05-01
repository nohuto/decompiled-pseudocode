/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001B6FC
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001B3F8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationVisibilityOverride,IIAMServiceProvider,ISpecialWindowMessageCallback,IImmersiveMonitorNotification,IApplicationManagerViewPosition>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 1408775544
    && a2[1] == *(_DWORD *)&GUID_53f83578_492b_4e8f_8096_3d3dd1260aa6.Data2
    && a2[2] == *(_DWORD *)GUID_53f83578_492b_4e8f_8096_3d3dd1260aa6.Data4
    && a2[3] == *(_DWORD *)&GUID_53f83578_492b_4e8f_8096_3d3dd1260aa6.Data4[4]
    || (a1 += 8LL, *a2 == 1601558082)
    && a2[1] == *(_DWORD *)&GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee.Data2
    && a2[2] == *(_DWORD *)GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee.Data4
    && a2[3] == *(_DWORD *)&GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee.Data4[4]
    || (a1 += 8LL, *a2 == -1623477830)
    && a2[1] == *(_DWORD *)&GUID_9f3bb1ba_6ccb_4dd0_98b0_ccfa58c0ffee.Data2
    && a2[2] == *(_DWORD *)GUID_9f3bb1ba_6ccb_4dd0_98b0_ccfa58c0ffee.Data4
    && a2[3] == *(_DWORD *)&GUID_9f3bb1ba_6ccb_4dd0_98b0_ccfa58c0ffee.Data4[4]
    || (a1 += 8LL, *a2 == -1811144131)
    && a2[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
    && a2[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
    && a2[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -1735987280
    && a2[1] == *(_DWORD *)&GUID_9886efb0_afb3_4a35_b381_329935b32d5a.Data2
    && a2[2] == *(_DWORD *)GUID_9886efb0_afb3_4a35_b381_329935b32d5a.Data4
    && a2[3] == *(_DWORD *)&GUID_9886efb0_afb3_4a35_b381_329935b32d5a.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
