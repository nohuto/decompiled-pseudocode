/*
 * XREFs of WPP_SF_qqqqDL @ 0x1C004414C
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqDL(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+A0h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, 0x2Bu, va);
}
