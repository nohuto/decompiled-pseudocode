/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@UIInputServiceProxyOwner@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024C40
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@UIInputServiceProxyOwner@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025330 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180025330.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputDeliveryServer,IInputServiceProxyOwner>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2
     || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*a2 != 852238556
     || a2[1] != *(_DWORD *)&GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba.Data2
     || a2[2] != *(_DWORD *)GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba.Data4
     || a2[3] != *(_DWORD *)&GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba.Data4[4]) )
  {
    if ( *a2 != 1477745298
      || a2[1] != *(_DWORD *)&GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18.Data2
      || a2[2] != *(_DWORD *)GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18.Data4
      || a2[3] != *(_DWORD *)&GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18.Data4[4] )
    {
      return (unsigned int)-2147467262;
    }
    a1 += 8LL;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
