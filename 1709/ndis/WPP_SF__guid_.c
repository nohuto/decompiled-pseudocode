/*
 * XREFs of WPP_SF__guid_ @ 0x1C0040CB8
 * Callers:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C00205F0 (ndisIfReadNetworkGuidFromKey.c)
 *     NdisFRegisterFilterDriver @ 0x1C00206B0 (NdisFRegisterFilterDriver.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C003DD30 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ndisPnPAddDevice @ 0x1C00AF8C0 (ndisPnPAddDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid_(unsigned __int16 a1, const struct _GUID *a2, __int64 a3)
{
  ndisWppFastTraceMessage(a2, a1, a3, 16LL, 0LL);
}
