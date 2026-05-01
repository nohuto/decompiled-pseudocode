/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UIViewManagerBridge@@UIMessageProxyListener@@UIMessageListListener@@UIMessageMapListener@@UIShellViewManagerListener@Server@Navigation@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18012A33C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewManagerBridge@@UIMessageProxyListener@@UIMessageListListener@@UIMessageMapListener@@UIShellViewManagerListener@Server@Navigation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180127E00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewMana.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  int CanCastTo; // eax
  unsigned int v5; // ecx

  if ( *(_DWORD *)a2 == 1117652890
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_429e079a_a19b_4423_9d34_3221c012e15f.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_429e079a_a19b_4423_9d34_3221c012e15f.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_429e079a_a19b_4423_9d34_3221c012e15f.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 25575075)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 1582616791)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_5e54d0d7_fb96_4f22_b700_d9318781bf57.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_5e54d0d7_fb96_4f22_b700_d9318781bf57.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_5e54d0d7_fb96_4f22_b700_d9318781bf57.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == 1063026348)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_3f5c7eac_3df7_46d9_8dbb_d338c967f2de.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_3f5c7eac_3df7_46d9_8dbb_d338c967f2de.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_3f5c7eac_3df7_46d9_8dbb_d338c967f2de.Data4[4]
    || (a1 += 8LL, *(_DWORD *)a2 == -1993982826)
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_89263c96_9582_4156_99ee_6252ce508ebc.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_89263c96_9582_4156_99ee_6252ce508ebc.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_89263c96_9582_4156_99ee_6252ce508ebc.Data4[4] )
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
