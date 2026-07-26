/*
 * XREFs of WPP_SF_qqqqd @ 0x1C007839C
 * Callers:
 *     ndisOidPostPDOpenProvider @ 0x1C00785E0 (ndisOidPostPDOpenProvider.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqd(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, 0x1Bu, va);
}
