/*
 * XREFs of WPP_SF_DDD @ 0x1C0043A38
 * Callers:
 *     NdisTryAcquireNicActive @ 0x1C0009440 (NdisTryAcquireNicActive.c)
 *     ndisValidateQosParameters @ 0x1C0048E9C (ndisValidateQosParameters.c)
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004ECE8 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C011C2E0 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_DDD(unsigned __int16 a1, const struct _GUID *a2, int a3, int a4)
{
  int v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
