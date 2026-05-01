/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@WRL@Microsoft@@@Details@23@UIViewManagerControl@@UIWindowDispatcherConnectedStandby@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800289F0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIWindowDispatcherConnectedStandby@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028370 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEvent.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIViewEventDispatcherDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIWindowDispatcherConnectedStandby@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F07C0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1800F07C0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>>,IViewManagerControl,IWindowDispatcherConnectedStandby,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        void **a3)
{
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r10
  _DWORD *v7; // rcx
  __int64 v8; // r10
  __int64 result; // rax
  _DWORD *v10; // rcx
  unsigned int v11; // r8d
  void *v12; // r10
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  unsigned int v16; // r8d
  struct _GUID *v17; // r9
  __int64 v18; // r10
  _DWORD *v19; // rcx
  void *v20; // r11
  __int64 v21; // r11
  unsigned int CanCastTo; // eax
  unsigned int Data1; // ecx
  __int64 v24; // r11
  unsigned int v25; // r8d
  __int64 v26; // r10

  if ( InlineIsEqualGUID(a2, &GUID_f3305f7e_8b9b_41f2_be95_4e832447c357) )
  {
    *v5 = v6;
    return 0LL;
  }
  if ( InlineIsEqualGUID(v4, &GUID_73d6c545_9771_4aba_bb8c_713133ed635a) )
  {
    *a3 = (void *)(v8 + 8);
    result = 0LL;
  }
  else
  {
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    if ( InlineIsEqualGUID(v7, &GUID_030de2aa_3f4c_47de_9c7b_0bada6462586)
      || InlineIsEqualGUID(v10, &GUID_f12382e8_15a2_49d0_8c5d_5f886a12cb9c)
      || InlineIsEqualGUID(v13, &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c) )
    {
      *a3 = v12;
      return v11;
    }
    if ( InlineIsEqualGUID(v14, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352) )
    {
      *a3 = (void *)v18;
      CanCastTo = v16;
    }
    else if ( InlineIsEqualGUID(v15, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4) )
    {
      *a3 = v20;
      CanCastTo = v16;
    }
    else
    {
      if ( InlineIsEqualGUID(v19, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa) )
      {
        *a3 = (void *)(v21 + 8);
        CanCastTo = v16;
      }
      else
      {
        CanCastTo = -2147467262;
      }
      if ( CanCastTo != -2147467262 )
        return CanCastTo;
      CanCastTo = -2147467262;
    }
    if ( CanCastTo == -2147467262 )
    {
      Data1 = v17->Data1;
      v24 = v18 + 104;
      if ( v17->Data1 == -1211751484
        && *(_DWORD *)&v17->Data2 == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data2
        && *(_DWORD *)v17->Data4 == *(_DWORD *)GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4
        && *(_DWORD *)&v17->Data4[4] == *(_DWORD *)&GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db.Data4[4] )
      {
        *a3 = (void *)v24;
        return v16;
      }
      else
      {
        if ( Data1 == -1738762077
          && *(_DWORD *)&v17->Data2 == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data2
          && *(_DWORD *)v17->Data4 == *(_DWORD *)GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4
          && *(_DWORD *)&v17->Data4[4] == *(_DWORD *)&GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2.Data4[4] )
        {
          *a3 = (void *)(v18 + 112);
          CanCastTo = v16;
        }
        else if ( Data1 == -1718923604
               && *(_DWORD *)&v17->Data2 == *(_DWORD *)&GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b.Data2
               && *(_DWORD *)v17->Data4 == *(_DWORD *)GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b.Data4
               && *(_DWORD *)&v17->Data4[4] == *(_DWORD *)&GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b.Data4[4] )
        {
          *a3 = (void *)(v18 + 120);
          CanCastTo = v16;
        }
        else if ( Data1 == 417727895
               && *(_DWORD *)&v17->Data2 == *(_DWORD *)&GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data2
               && *(_DWORD *)v17->Data4 == *(_DWORD *)GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data4
               && *(_DWORD *)&v17->Data4[4] == *(_DWORD *)&GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92.Data4[4] )
        {
          *a3 = (void *)(v18 + 128);
          CanCastTo = v16;
        }
        else if ( InlineIsEqualGUID(v17, &GUID_4637e79c_de03_4aef_8a87_e796659e5e8d) )
        {
          *a3 = (void *)(v26 + 8);
          CanCastTo = v25;
        }
        else
        {
          CanCastTo = -2147467262;
        }
        if ( CanCastTo == -2147467262 )
        {
          CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v24 + 48), v17, a3);
          if ( CanCastTo == -2147467262 )
            return (unsigned int)-2147467262;
        }
      }
    }
    return CanCastTo;
  }
  return result;
}
