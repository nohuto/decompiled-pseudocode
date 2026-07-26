/*
 * XREFs of WPP_SF_qqdqq @ 0x1C0077A2C
 * Callers:
 *     ndisOidPrePDCloseProvider @ 0x1C00F84E0 (ndisOidPrePDCloseProvider.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqdqq(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, 0x1Du, va);
}
