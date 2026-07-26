/*
 * XREFs of WPP_SF_qqDL @ 0x1C0045C60
 * Callers:
 *     ndisSetOpenPacketFilter @ 0x1C001BE70 (ndisSetOpenPacketFilter.c)
 *     ndisMCoOidRequestToRequest @ 0x1C00472C0 (ndisMCoOidRequestToRequest.c)
 *     ndisMOidRequestToRequest @ 0x1C00477EC (ndisMOidRequestToRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDL(unsigned __int16 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, va);
}
