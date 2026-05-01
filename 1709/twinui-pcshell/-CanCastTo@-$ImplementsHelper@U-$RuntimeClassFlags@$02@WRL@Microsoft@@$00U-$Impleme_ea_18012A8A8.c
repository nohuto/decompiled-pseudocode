/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18012A8A8
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewEventDispatcherCrashRecovery@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18012A678 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewEventDispatcherCr.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::CanCastTo(
        char *a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // r9d
  char *v5; // rcx
  char *v6; // rcx
  int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // r10d

  v3 = 0;
  if ( *(_DWORD *)a2 == -1211751484
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
  {
    *a3 = a1;
    return v3;
  }
  v5 = a1 + 8;
  if ( *(_DWORD *)a2 == -1738762077
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4] )
  {
    *a3 = v5;
    return v3;
  }
  v6 = v5 + 8;
  if ( *(_DWORD *)a2 == -1718923604
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b.Data4[4]
    || (v6 += 8, *(_DWORD *)a2 == 417727895)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data4[4] )
  {
    *a3 = v6;
LABEL_16:
    v7 = 0;
    goto LABEL_27;
  }
  if ( *(_DWORD *)a2 == 1178068892
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_4637e79c_de03_4aef_8a87_e796659e5e8d.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_4637e79c_de03_4aef_8a87_e796659e5e8d.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_4637e79c_de03_4aef_8a87_e796659e5e8d.Data4[4] )
  {
    *a3 = v6 + 8;
    goto LABEL_16;
  }
  v7 = -2147467262;
LABEL_27:
  if ( v7 < 0 )
  {
    if ( (int)Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 48), (const struct _GUID *)a2, a3) >= 0 )
      return v8;
    return v9;
  }
  return v3;
}
