/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIPrivilegedOperationsConsumer@@U?$InterfaceList@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@UIImmersiveApplicationTerminator@@U?$InterfaceList@UIImmersiveApplicationTitleBarManager@@U?$InterfaceList@UIUncloakWindowService@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001AB4C
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001A818 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@U-$Implem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IPrivilegedOperationsConsumer,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTerminator,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTitleBarManager,Microsoft::WRL::Details::InterfaceList<IUncloakWindowService,Microsoft::WRL::Details::Nil>>>>>,1,0>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == -1211751484
    && a2[1] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
    && a2[2] == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
    && a2[3] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4]
    || (a1 += 8LL, *a2 == 261971833)
    && a2[1] == *(_DWORD *)&GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe.Data2
    && a2[2] == *(_DWORD *)GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe.Data4
    && a2[3] == *(_DWORD *)&GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe.Data4[4]
    || (a1 += 8LL, *a2 == 2002484756)
    && a2[1] == *(_DWORD *)&GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8.Data2
    && a2[2] == *(_DWORD *)GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8.Data4
    && a2[3] == *(_DWORD *)&GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8.Data4[4]
    || (a1 += 8LL, *a2 == -279921505)
    && a2[1] == *(_DWORD *)&GUID_ef50bc9f_87d2_4ec5_a007_d94d7ff66f24.Data2
    && a2[2] == *(_DWORD *)GUID_ef50bc9f_87d2_4ec5_a007_d94d7ff66f24.Data4
    && a2[3] == *(_DWORD *)&GUID_ef50bc9f_87d2_4ec5_a007_d94d7ff66f24.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -1224286739
    && a2[1] == *(_DWORD *)&GUID_b706dded_208c_4795_b610_e7c002c31edc.Data2
    && a2[2] == *(_DWORD *)GUID_b706dded_208c_4795_b610_e7c002c31edc.Data4
    && a2[3] == *(_DWORD *)&GUID_b706dded_208c_4795_b610_e7c002c31edc.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
