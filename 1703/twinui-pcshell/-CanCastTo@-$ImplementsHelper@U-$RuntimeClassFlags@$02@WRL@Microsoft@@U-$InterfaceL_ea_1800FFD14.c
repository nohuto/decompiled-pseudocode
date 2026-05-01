/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@23@$00$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800FFD14
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@UIViewEventDispatcherDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@UIViewEventDispatcherCrashRecovery@@U?$InterfaceList@UIViewManagerControl@@U?$InterfaceList@UIImmersiveShellHookNotification@@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800FFA4C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceL_ea_1800FFA4C.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,1,1>::CanCastTo(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v5; // rcx

  if ( *(_DWORD *)a2 == -1211751484
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
  {
    *a3 = (void *)a1;
    return 0LL;
  }
  v5 = a1 + 8;
  if ( *(_DWORD *)a2 == -1738762077
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4]
    || (v5 += 8LL, *(_DWORD *)a2 == -260278102)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_f07c78aa_32b6_4f71_9cca_05b43394d316.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_f07c78aa_32b6_4f71_9cca_05b43394d316.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_f07c78aa_32b6_4f71_9cca_05b43394d316.Data4[4]
    || (v5 += 8LL, *(_DWORD *)a2 == 417727895)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data4[4] )
  {
    *a3 = (void *)v5;
LABEL_11:
    result = 0LL;
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == 1178068892
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_4637e79c_de03_4aef_8a87_e796659e5e8d.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_4637e79c_de03_4aef_8a87_e796659e5e8d.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_4637e79c_de03_4aef_8a87_e796659e5e8d.Data4[4] )
  {
    *a3 = (void *)(v5 + 8);
    goto LABEL_11;
  }
  result = 2147500034LL;
LABEL_26:
  if ( (int)result < 0 )
    return Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 40), (const struct _GUID *)a2, a3);
  return result;
}
