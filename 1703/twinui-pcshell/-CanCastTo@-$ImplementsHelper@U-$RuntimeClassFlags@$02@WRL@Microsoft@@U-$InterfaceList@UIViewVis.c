/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@UIViewRecoveryState@ViewManagerInterop@Shell@Internal@Windows@@U?$InterfaceList@UIFramedViewWrapper@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800FFC24
 * Callers:
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UINtUserViewWrapper@@U?$ChainInterfaces@UIViewWrapperInternal@@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@79Internal@Windows@@UIClientWindowState@79Internal@Windows@@UIViewRecoveryState@79Internal@Windows@@UIFramedViewWrapper@@VFtmBase@23@VNil@Details@23@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FFB64 (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UINtUserViewWrapper@@U-$ChainInt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,Microsoft::WRL::Details::InterfaceList<IFramedViewWrapper,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>,1,0>::CanCastTo(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  if ( *(_DWORD *)a2 != 2062002469
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835.Data4[4] )
  {
    a1 += 8LL;
    if ( *(_DWORD *)a2 != -1533779567
      || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_a4946191_41b4_45aa_bc6a_ad2f4351596c.Data2
      || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_a4946191_41b4_45aa_bc6a_ad2f4351596c.Data4
      || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_a4946191_41b4_45aa_bc6a_ad2f4351596c.Data4[4] )
    {
      a1 += 8LL;
      if ( *(_DWORD *)a2 != 1935131509
        || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data2
        || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data4
        || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data4[4] )
      {
        a1 += 8LL;
        if ( *(_DWORD *)a2 != 1906570277
          || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data2
          || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data4
          || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data4[4] )
        {
          a1 += 8LL;
          if ( *(_DWORD *)a2 != 994192510
            || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data2
            || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data4
            || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data4[4] )
          {
            return Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
          }
        }
      }
    }
  }
  *a3 = (void *)a1;
  return 0LL;
}
