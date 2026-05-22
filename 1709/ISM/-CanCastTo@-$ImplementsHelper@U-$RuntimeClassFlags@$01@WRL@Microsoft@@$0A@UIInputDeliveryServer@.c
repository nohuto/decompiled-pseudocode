/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@UIInputDeliveryServer@@UIInputQueueHost@@UIInputServiceProxyOwner@@UIRemoteInputDelivery@@UIInputFocusListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800817CC
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@UIInputQueueHost@@UIInputServiceProxyOwner@@UIRemoteInputDelivery@@UIInputFocusListener@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800818D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800818D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,IInputDeliveryServer,IInputQueueHost,IInputServiceProxyOwner,IRemoteInputDelivery,IInputFocusListener>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == 852238556
    && a2[1] == *(_DWORD *)&GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba.Data2
    && a2[2] == *(_DWORD *)GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba.Data4
    && a2[3] == *(_DWORD *)&GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba.Data4[4]
    || (a1 += 8LL, *a2 == 1826789373)
    && a2[1] == *(_DWORD *)&GUID_6ce297fd_c4e5_4932_bd86_ce797aad3e42.Data2
    && a2[2] == *(_DWORD *)GUID_6ce297fd_c4e5_4932_bd86_ce797aad3e42.Data4
    && a2[3] == *(_DWORD *)&GUID_6ce297fd_c4e5_4932_bd86_ce797aad3e42.Data4[4]
    || (a1 += 8LL, *a2 == 1477745298)
    && a2[1] == *(_DWORD *)&GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18.Data2
    && a2[2] == *(_DWORD *)GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18.Data4
    && a2[3] == *(_DWORD *)&GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18.Data4[4]
    || (a1 += 8LL, *a2 == -785122554)
    && a2[1] == *(_DWORD *)&GUID_d133fb06_b258_4fa3_be48_add096389ecf.Data2
    && a2[2] == *(_DWORD *)GUID_d133fb06_b258_4fa3_be48_add096389ecf.Data4
    && a2[3] == *(_DWORD *)&GUID_d133fb06_b258_4fa3_be48_add096389ecf.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == 418570778
    && a2[1] == *(_DWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data2
    && a2[2] == *(_DWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4
    && a2[3] == *(_DWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
