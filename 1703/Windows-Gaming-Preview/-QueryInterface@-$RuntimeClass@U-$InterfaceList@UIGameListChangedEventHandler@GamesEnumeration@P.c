/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000C8E0
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F970 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIGameListChangedEventHandler@Games_ea_18000F970.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  void (*v4)(void); // rax
  bool v5; // sf

  v3 = 0;
  *(_QWORD *)a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *(_QWORD *)a3 = a1;
    v4 = *(void (**)(void))(*(_QWORD *)a1 + 8LL);
LABEL_22:
    v4();
    return v3;
  }
  if ( *a2 == 636920865
    && a2[1] == *(_DWORD *)&GUID_25f6a421_d8f5_4d91_b40e_53d5e86fde64.Data2
    && a2[2] == *(_DWORD *)GUID_25f6a421_d8f5_4d91_b40e_53d5e86fde64.Data4
    && a2[3] == *(_DWORD *)&GUID_25f6a421_d8f5_4d91_b40e_53d5e86fde64.Data4[4]
    || (a1 += 8LL, *a2 == -1796592748)
    && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *(_QWORD *)a3 = a1;
LABEL_21:
    v4 = *(void (**)(void))(**(_QWORD **)a3 + 8LL);
    goto LABEL_22;
  }
  if ( *a2 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    v3 = 1;
    *(_QWORD *)a3 = a1;
  }
  v5 = -(v3 == 0) < 0;
  v3 = v3 == 0 ? 0x80004002 : 0;
  if ( !v5 )
    goto LABEL_21;
  return v3;
}
