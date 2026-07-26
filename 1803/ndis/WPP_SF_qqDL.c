/*
 * XREFs of WPP_SF_qqDL @ 0x1C0043EEC
 * Callers:
 *     ndisSetOpenPacketFilter @ 0x1C001C84C (ndisSetOpenPacketFilter.c)
 *     ndisMCoOidRequestToRequest @ 0x1C0045690 (ndisMCoOidRequestToRequest.c)
 *     ndisMOidRequestToRequest @ 0x1C0045DD4 (ndisMOidRequestToRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDL(unsigned __int16 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, va);
}
