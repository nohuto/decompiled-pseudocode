/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIViewManagerBridge@@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIMessageMapListener@@U?$InterfaceList@UIShellViewManagerListener@Server@Navigation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FCC10
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIViewManagerBridge@@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIMessageMapListener@@U?$InterfaceList@UIShellViewManagerListener@Server@Navigation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180101460 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIViewManagerBridge@@U-$InterfaceLi_ea_180101460.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIViewManagerBridge@@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIMessageMapListener@@U?$InterfaceList@UIShellViewManagerListener@Server@Navigation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801016D0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIViewManagerBridge@@U-$InterfaceLi_ea_1801016D0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIViewManagerBridge@@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIMessageMapListener@@U?$InterfaceList@UIShellViewManagerListener@Server@Navigation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180101710 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIViewManagerBridge@@U-$InterfaceLi_ea_180101710.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIViewManagerBridge@@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIMessageMapListener@@U?$InterfaceList@UIShellViewManagerListener@Server@Navigation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801019D0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIViewManagerBridge@@U-$InterfaceLi_ea_1801019D0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIViewManagerBridge@@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIMessageMapListener@@U?$InterfaceList@UIShellViewManagerListener@Server@Navigation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180101CE0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIViewManagerBridge@@U-$InterfaceLi_ea_180101CE0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IViewManagerBridge,Microsoft::WRL::Details::InterfaceList<IMessageProxyListener,Microsoft::WRL::Details::InterfaceList<IMessageListListener,Microsoft::WRL::Details::InterfaceList<IMessageMapListener,Microsoft::WRL::Details::InterfaceList<Navigation::Server::IShellViewManagerListener,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        char *a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi
  char *v5; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *(_DWORD *)a2 == 1117652890
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_429e079a_a19b_4423_9d34_3221c012e15f.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_429e079a_a19b_4423_9d34_3221c012e15f.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_429e079a_a19b_4423_9d34_3221c012e15f.Data4[4]
      || (a1 += 8, *(_DWORD *)a2 == 25575075)
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_01863ea3_981d_4590_9f5d_4d4a6a42e6b5.Data4[4] )
    {
      *a3 = a1;
      CanCastTo = 0;
    }
    else
    {
      v5 = a1 + 8;
      if ( *(_DWORD *)a2 == 1582616791
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_5e54d0d7_fb96_4f22_b700_d9318781bf57.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_5e54d0d7_fb96_4f22_b700_d9318781bf57.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_5e54d0d7_fb96_4f22_b700_d9318781bf57.Data4[4]
        || (v5 += 8, *(_DWORD *)a2 == 1063026348)
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_3f5c7eac_3df7_46d9_8dbb_d338c967f2de.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_3f5c7eac_3df7_46d9_8dbb_d338c967f2de.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_3f5c7eac_3df7_46d9_8dbb_d338c967f2de.Data4[4]
        || (v5 += 8, *(_DWORD *)a2 == -1993982826)
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_89263c96_9582_4156_99ee_6252ce508ebc.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_89263c96_9582_4156_99ee_6252ce508ebc.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_89263c96_9582_4156_99ee_6252ce508ebc.Data4[4] )
      {
        *a3 = v5;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                      (Microsoft::WRL::FtmBase *)(v5 + 8),
                      (const struct _GUID *)a2,
                      a3);
      }
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
