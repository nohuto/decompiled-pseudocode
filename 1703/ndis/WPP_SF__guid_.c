/*
 * XREFs of WPP_SF__guid_ @ 0x1C0044180
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00160A0 (NdisFRegisterFilterDriver.c)
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0016938 (ndisIfReadNetworkGuidFromKey.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C00411E8 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ndisPnPAddDevice @ 0x1C00A9500 (ndisPnPAddDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid_(unsigned __int16 a1, const struct _GUID *a2, __int64 a3)
{
  ndisWppFastTraceMessage(a2, a1, a3, 16LL, 0LL);
}
