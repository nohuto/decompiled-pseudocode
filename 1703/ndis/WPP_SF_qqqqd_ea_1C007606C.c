/*
 * XREFs of WPP_SF_qqqqd @ 0x1C007606C
 * Callers:
 *     ndisOidPostPDOpenProvider @ 0x1C00762B0 (ndisOidPostPDOpenProvider.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqd(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, 0x1Bu, va);
}
