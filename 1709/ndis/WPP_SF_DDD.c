/*
 * XREFs of WPP_SF_DDD @ 0x1C00429C4
 * Callers:
 *     NdisTryAcquireNicActive @ 0x1C001DEA0 (NdisTryAcquireNicActive.c)
 *     ndisValidateQosParameters @ 0x1C0047B00 (ndisValidateQosParameters.c)
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004E380 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C011D45C (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_DDD(unsigned __int16 a1, const struct _GUID *a2, int a3, int a4)
{
  int v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
