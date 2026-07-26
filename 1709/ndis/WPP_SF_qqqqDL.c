/*
 * XREFs of WPP_SF_qqqqDL @ 0x1C0043060
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqDL(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+A0h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, 0x2Bu, va);
}
