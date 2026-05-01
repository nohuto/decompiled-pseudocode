/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180029330
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180029B70 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiv_ea_180029B70.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  int *v16; // r9
  int v17; // ecx
  __int64 v18; // rdx

  if ( InlineIsEqualGUID(a2, &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee)
    || InlineIsEqualGUID(v2, &GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f)
    || InlineIsEqualGUID(v5, &GUID_af40de1b_7663_429e_9fee_6029ee6c4978)
    || InlineIsEqualGUID(v6, &GUID_b755e6e0_b048_49cc_8911_11a041216f5f)
    || InlineIsEqualGUID(v7, &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2)
    || InlineIsEqualGUID(v8, &GUID_2a239388_fc85_4077_981e_9e4205cf9451)
    || InlineIsEqualGUID(v9, &GUID_8332fbec_5803_4461_be72_91b106e7af8a)
    || InlineIsEqualGUID(v10, &GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0)
    || InlineIsEqualGUID(v11, &GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164)
    || InlineIsEqualGUID(v12, &GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b)
    || InlineIsEqualGUID(v13, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db)
    || InlineIsEqualGUID(v14, &GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe)
    || InlineIsEqualGUID(v15, &GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    v17 = *v16;
    v18 = v4 + 8;
    if ( *v16 == -279921505
      && v16[1] == *(_DWORD *)&GUID_ef50bc9f_87d2_4ec5_a007_d94d7ff66f24.Data2
      && v16[2] == *(_DWORD *)GUID_ef50bc9f_87d2_4ec5_a007_d94d7ff66f24.Data4
      && v16[3] == *(_DWORD *)&GUID_ef50bc9f_87d2_4ec5_a007_d94d7ff66f24.Data4[4]
      || (v18 = v4 + 16, v17 == -1224286739)
      && v16[1] == *(_DWORD *)&GUID_b706dded_208c_4795_b610_e7c002c31edc.Data2
      && v16[2] == *(_DWORD *)GUID_b706dded_208c_4795_b610_e7c002c31edc.Data4
      && v16[3] == *(_DWORD *)&GUID_b706dded_208c_4795_b610_e7c002c31edc.Data4[4] )
    {
      *v3 = v18;
      return 0LL;
    }
    else if ( v17 == -615847089
           && v16[1] == *(_DWORD *)&GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee.Data2
           && v16[2] == *(_DWORD *)GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee.Data4
           && v16[3] == *(_DWORD *)&GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee.Data4[4] )
    {
      *v3 = v4 + 24;
      return 0LL;
    }
    else
    {
      return 2147500034LL;
    }
  }
}
