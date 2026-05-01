/*
 * XREFs of ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UINtUserViewWrapper@@U?$ChainInterfaces@UIViewWrapperInternal@@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@79Internal@Windows@@UIClientWindowState@79Internal@Windows@@UIViewRecoveryState@79Internal@Windows@@UIFramedViewWrapper@@VFtmBase@23@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18012A5B8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180127C40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180127C40.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VViewWrapperBase@@UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18012A240 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VViewWr.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@5789@UIClientWindowState@5789@UIViewRecoveryState@5789@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18012A794 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibilityOverrid.c)
 */

__int64 __fastcall Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,INtUserViewWrapper,Microsoft::WRL::ChainInterfaces<IViewWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
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
    v5 = 1;
    v3 = 0;
    if ( *a2 == 618114995
      && a2[1] == *(_DWORD *)&GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f.Data2
      && a2[2] == *(_DWORD *)GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f.Data4
      && a2[3] == *(_DWORD *)&GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f.Data4[4] )
    {
      *a3 = v4;
      v6 = 1;
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
        return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(v4 + 8);
    }
  }
  return v3;
}
