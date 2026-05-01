/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@WRL@Microsoft@@@Details@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F2F50
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F2E90 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_1800F2E90.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>>,Microsoft::WRL::FtmBase>::CanCastTo(
        char *a1,
        struct _GUID *a2,
        void **a3)
{
  const struct _GUID *v3; // r9
  char *v4; // r11
  unsigned int CanCastTo; // ecx
  char *v6; // rcx
  BOOL IsEqualGUID; // eax
  __int64 v8; // r10

  v3 = a2;
  v4 = a1;
  if ( a2->Data1 == -1211751484
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
  {
    *a3 = a1;
    return 0;
  }
  v6 = a1 + 8;
  if ( a2->Data1 == -1738762077
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4]
    || (v6 += 8, a2->Data1 == -1718923604)
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b.Data4[4] )
  {
    *a3 = v6;
LABEL_11:
    CanCastTo = 0;
    goto LABEL_24;
  }
  if ( a2->Data1 == 417727895
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data4[4] )
  {
    *a3 = v6 + 8;
    goto LABEL_11;
  }
  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_4637e79c_de03_4aef_8a87_e796659e5e8d);
  CanCastTo = 0;
  if ( IsEqualGUID )
    *a3 = (void *)(v8 + 8);
  else
    CanCastTo = -2147467262;
LABEL_24:
  if ( CanCastTo == -2147467262 )
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v4 + 48), v3, a3);
    if ( CanCastTo == -2147467262 )
      return (unsigned int)-2147467262;
  }
  return CanCastTo;
}
