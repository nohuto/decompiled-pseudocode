/*
 * XREFs of ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UINtUserViewWrapper@@U?$ChainInterfaces@UIViewWrapperInternal@@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@79Internal@Windows@@UIClientWindowState@79Internal@Windows@@UIViewRecoveryState@79Internal@Windows@@UIFramedViewWrapper@@VFtmBase@23@VNil@Details@23@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FFB64
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VViewWrapperBase@@U?$InterfaceList@UIUAPViewWrapper@@U?$InterfaceList@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FC5A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VViewWrapperBase@@U-$InterfaceList@UIUAPViewWrap.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VViewWrapperBase@@U?$InterfaceList@UILegacyViewWrapper@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FCA40 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VViewWrapperBase@@U-$InterfaceList@UILegacyViewW.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@UIViewRecoveryState@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@UIFramedViewWrapper@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800FFC24 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@UIViewVis.c)
 */

__int64 __fastcall Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,INtUserViewWrapper,Microsoft::WRL::ChainInterfaces<IViewWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ecx
  __int64 v4; // r10
  char v5; // r9
  char v6; // al

  if ( *a2 == -428113182
    && a2[1] == *(_DWORD *)&GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f.Data2
    && a2[2] == *(_DWORD *)GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f.Data4
    && a2[3] == *(_DWORD *)&GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f.Data4[4] )
  {
    *a3 = a1;
    return 0;
  }
  else
  {
    v4 = a1 + 8;
    v3 = 0;
    v5 = 1;
    if ( *a2 == 618114995
      && a2[1] == *(_DWORD *)&GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f.Data2
      && a2[2] == *(_DWORD *)GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f.Data4
      && a2[3] == *(_DWORD *)&GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f.Data4[4] )
    {
      v6 = 1;
      *a3 = v4;
    }
    else
    {
      v6 = 0;
    }
    if ( !v6 )
    {
      if ( *a2 == -1967932074
        && a2[1] == *(_DWORD *)&GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e.Data2
        && a2[2] == *(_DWORD *)GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e.Data4
        && a2[3] == *(_DWORD *)&GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e.Data4[4] )
      {
        *a3 = v4;
      }
      else
      {
        v5 = 0;
      }
      if ( !v5 )
        return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,Microsoft::WRL::Details::InterfaceList<IFramedViewWrapper,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>,1,0>::CanCastTo(v4 + 8);
    }
  }
  return v3;
}
