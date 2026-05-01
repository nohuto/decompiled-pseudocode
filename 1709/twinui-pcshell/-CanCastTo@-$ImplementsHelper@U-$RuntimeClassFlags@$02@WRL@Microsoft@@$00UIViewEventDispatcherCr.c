/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewEventDispatcherCrashRecovery@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18012A678
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801284B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEvent.c)
 * Callees:
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VCImmersiveShellComponent@@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B504 (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VCImmers.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18012A8A8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_18012A8A8.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IViewEventDispatcherCrashRecovery,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ecx
  int CanCastTo; // eax
  __int64 v5; // r9

  if ( *a2 == 1489087544
    && a2[1] == *(_DWORD *)&GUID_58c1ac38_4edf_4ada_aa81_375958b4c848.Data2
    && a2[2] == *(_DWORD *)GUID_58c1ac38_4edf_4ada_aa81_375958b4c848.Data4
    && a2[3] == *(_DWORD *)&GUID_58c1ac38_4edf_4ada_aa81_375958b4c848.Data4[4] )
  {
    goto LABEL_5;
  }
  a1 += 8LL;
  if ( *a2 == -214933634
    && a2[1] == *(_DWORD *)&GUID_f3305f7e_8b9b_41f2_be95_4e832447c357.Data2
    && a2[2] == *(_DWORD *)GUID_f3305f7e_8b9b_41f2_be95_4e832447c357.Data4
    && a2[3] == *(_DWORD *)&GUID_f3305f7e_8b9b_41f2_be95_4e832447c357.Data4[4] )
  {
    goto LABEL_5;
  }
  if ( *a2 == 1943455045
    && a2[1] == *(_DWORD *)&GUID_73d6c545_9771_4aba_bb8c_713133ed635a.Data2
    && a2[2] == *(_DWORD *)GUID_73d6c545_9771_4aba_bb8c_713133ed635a.Data4
    && a2[3] == *(_DWORD *)&GUID_73d6c545_9771_4aba_bb8c_713133ed635a.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0;
  }
  if ( (a1 += 24LL, *a2 == 51241642)
    && a2[1] == *(_DWORD *)&GUID_030de2aa_3f4c_47de_9c7b_0bada6462586.Data2
    && a2[2] == *(_DWORD *)GUID_030de2aa_3f4c_47de_9c7b_0bada6462586.Data4
    && a2[3] == *(_DWORD *)&GUID_030de2aa_3f4c_47de_9c7b_0bada6462586.Data4[4]
    || (a1 += 8LL, *a2 == 1260763374)
    && a2[1] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data2
    && a2[2] == *(_DWORD *)GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4
    && a2[3] == *(_DWORD *)&GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c.Data4[4] )
  {
LABEL_5:
    *a3 = a1;
    return 0;
  }
  CanCastTo = Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithGITSite,CImmersiveShellComponent>::CanCastTo(
                a1 + 8,
                a2,
                a3);
  v3 = 0;
  if ( CanCastTo < 0 )
    return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::CanCastTo(v5 + 104);
  return v3;
}
