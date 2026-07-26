/*
 * XREFs of WPP_SF_qqDDD @ 0x1C0043E80
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000CFF0 (ndisFDoOidRequestInternal.c)
 *     ndisMDoOidRequest @ 0x1C000DFB0 (ndisMDoOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDDD(unsigned __int16 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, va);
}
