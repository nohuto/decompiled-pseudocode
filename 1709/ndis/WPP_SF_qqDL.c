/*
 * XREFs of WPP_SF_qqDL @ 0x1C0042E00
 * Callers:
 *     ndisSetOpenPacketFilter @ 0x1C00104F4 (ndisSetOpenPacketFilter.c)
 *     ndisMCoOidRequestToRequest @ 0x1C00444C0 (ndisMCoOidRequestToRequest.c)
 *     ndisMOidRequestToRequest @ 0x1C0044C04 (ndisMOidRequestToRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDL(unsigned __int16 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, va);
}
