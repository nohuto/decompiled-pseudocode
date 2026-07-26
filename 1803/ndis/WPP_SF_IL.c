/*
 * XREFs of WPP_SF_IL @ 0x1C0041994
 * Callers:
 *     ?ndisIfUpdateInterfaceFromPersistentStore@@YAJT_NET_LUID_LH@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@Z @ 0x1C003F240 (-ndisIfUpdateInterfaceFromPersistentStore@@YAJT_NET_LUID_LH@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROP.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00C14A8 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_IL(unsigned __int16 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, &v4, 8LL, &v5, 4LL, 0LL);
}
