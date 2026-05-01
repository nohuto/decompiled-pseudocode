/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationManagerSafeForSyncCallouts@@U?$InterfaceList@UIApplicationStateChangeHandler@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@UIRequestTrustedComponentForegroundControlInitialization@@U?$InterfaceList@UIAppSwitchingTestability@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001AA58
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001A818 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@U-$Implem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationManagerSafeForSyncCallouts,Microsoft::WRL::Details::InterfaceList<IApplicationStateChangeHandler,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<IRequestTrustedComponentForegroundControlInitialization,Microsoft::WRL::Details::InterfaceList<IAppSwitchingTestability,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 595331017
    && a2[1] == *(_DWORD *)&GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f.Data2
    && a2[2] == *(_DWORD *)GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f.Data4
    && a2[3] == *(_DWORD *)&GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f.Data4[4]
    || (a1 += 8LL, *a2 == -1219107104)
    && a2[1] == *(_DWORD *)&GUID_b755e6e0_b048_49cc_8911_11a041216f5f.Data2
    && a2[2] == *(_DWORD *)GUID_b755e6e0_b048_49cc_8911_11a041216f5f.Data4
    && a2[3] == *(_DWORD *)&GUID_b755e6e0_b048_49cc_8911_11a041216f5f.Data4[4]
    || (a1 += 8LL, *a2 == -1738762077)
    && a2[1] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
    && a2[2] == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
    && a2[3] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4]
    || (a1 += 8LL, *a2 == 706974600)
    && a2[1] == *(_DWORD *)&GUID_2a239388_fc85_4077_981e_9e4205cf9451.Data2
    && a2[2] == *(_DWORD *)GUID_2a239388_fc85_4077_981e_9e4205cf9451.Data4
    && a2[3] == *(_DWORD *)&GUID_2a239388_fc85_4077_981e_9e4205cf9451.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -2093810708
    && a2[1] == *(_DWORD *)&GUID_8332fbec_5803_4461_be72_91b106e7af8a.Data2
    && a2[2] == *(_DWORD *)GUID_8332fbec_5803_4461_be72_91b106e7af8a.Data4
    && a2[3] == *(_DWORD *)&GUID_8332fbec_5803_4461_be72_91b106e7af8a.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
