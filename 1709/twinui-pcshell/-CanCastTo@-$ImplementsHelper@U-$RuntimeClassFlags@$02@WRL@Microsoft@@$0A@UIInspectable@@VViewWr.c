/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VViewWrapperBase@@UIWeakReferenceSource@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18012A240
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801278D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrappe.c)
 * Callees:
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UINtUserViewWrapper@@U?$ChainInterfaces@UIViewWrapperInternal@@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@79Internal@Windows@@UIClientWindowState@79Internal@Windows@@UIViewRecoveryState@79Internal@Windows@@UIFramedViewWrapper@@VFtmBase@23@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18012A5B8 (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UINtUserViewWrapper@@U-$ChainInt.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,ViewWrapperBase,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  unsigned int v4; // ecx
  __int64 v5; // rbx
  int CanCastTo; // eax
  _QWORD *v7; // r8
  _DWORD *v8; // r11
  __int64 v9; // rdx

  if ( *a2 == -1350114592
    && a2[1] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && a2[2] == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && a2[3] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = a1;
    return 0;
  }
  else
  {
    v5 = a1 + 8;
    CanCastTo = Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,INtUserViewWrapper,Microsoft::WRL::ChainInterfaces<IViewWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
                  a1 + 8,
                  a2,
                  a3,
                  a4);
    v4 = 0;
    if ( CanCastTo < 0 )
    {
      v9 = v5 + 512;
      if ( *v8 == 56
        && v8[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
        && v8[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
        && v8[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4]
        || (v9 = v5 + 520, *v8 == -1523623013)
        && v8[1] == *(_DWORD *)&GUID_a52f5b9b_ee55_4add_b559_55f1c012e15f.Data2
        && v8[2] == *(_DWORD *)GUID_a52f5b9b_ee55_4add_b559_55f1c012e15f.Data4
        && v8[3] == *(_DWORD *)&GUID_a52f5b9b_ee55_4add_b559_55f1c012e15f.Data4[4] )
      {
        *v7 = v9;
      }
      else if ( *v8 == 753092029
             && v8[1] == *(_DWORD *)&GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67.Data2
             && v8[2] == *(_DWORD *)GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67.Data4
             && v8[3] == *(_DWORD *)&GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67.Data4[4] )
      {
        *v7 = v5 + 528;
      }
      else
      {
        return (unsigned int)-2147467262;
      }
    }
  }
  return v4;
}
