/*
 * XREFs of WPP_SF__guid_ @ 0x1C0041E08
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00162A0 (NdisFRegisterFilterDriver.c)
 *     ndisIfReadNetworkGuidFromKey @ 0x1C001A680 (ndisIfReadNetworkGuidFromKey.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C003F080 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ndisPnPAddDevice @ 0x1C00B6980 (ndisPnPAddDevice.c)
 *     ndisLWMCreateMiniport @ 0x1C00EC7B8 (ndisLWMCreateMiniport.c)
 *     ndisLWMOpenConfigurationKey @ 0x1C00EC984 (ndisLWMOpenConfigurationKey.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF__guid_(unsigned __int16 a1, const struct _GUID *a2, __int64 a3)
{
  ndisWppFastTraceMessage(a2, a1, a3, 16LL, 0LL);
}
