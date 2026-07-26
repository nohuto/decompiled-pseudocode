/*
 * XREFs of WPP_SF__guid__guid_ @ 0x1C0041EC0
 * Callers:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001D2F4 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid__guid_(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ndisWppFastTraceMessage(&WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, 0xADu, a3, 16LL, a4, 16LL, 0LL);
}
