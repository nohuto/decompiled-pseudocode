/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@5789@UIClientWindowState@5789@UIViewRecoveryState@5789@UIFramedViewWrapper@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18012A794
 * Callers:
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UINtUserViewWrapper@@U?$ChainInterfaces@UIViewWrapperInternal@@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@V789Microsoft@@@23@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewResourcePolicies@79Internal@Windows@@UIClientWindowState@79Internal@Windows@@UIViewRecoveryState@79Internal@Windows@@UIFramedViewWrapper@@VFtmBase@23@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18012A5B8 (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UINtUserViewWrapper@@U-$ChainInt.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  int CanCastTo; // eax
  unsigned int v5; // ecx

  if ( *(_DWORD *)a2 == 2062002469
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_7ae7a925_240e_4f93_9f3b_87d346eb1835.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 905012364)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_35f1648c_265f_402c_b575_c9a325451df5.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_35f1648c_265f_402c_b575_c9a325451df5.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_35f1648c_265f_402c_b575_c9a325451df5.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 1935131509)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 1906570277)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_71a3f425_a716_4859_b1a4_1d9044e6a055.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 994192510)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20.Data4[4] )
  {
    *a3 = (void *)a1;
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
    v5 = -2147467262;
    if ( CanCastTo >= 0 )
      return 0;
    return v5;
  }
}
