/*
 * XREFs of WPP_SF_qqDDD @ 0x1C0045BF4
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000AB80 (ndisMDoOidRequest.c)
 *     ndisFDoOidRequestInternal @ 0x1C000B2E0 (ndisFDoOidRequestInternal.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDDD(unsigned __int16 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, va);
}
