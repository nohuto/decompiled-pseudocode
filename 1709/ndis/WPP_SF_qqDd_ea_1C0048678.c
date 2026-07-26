/*
 * XREFs of WPP_SF_qqDd @ 0x1C0048678
 * Callers:
 *     ndisSetOpenEnableWakeUp @ 0x1C00E1BF8 (ndisSetOpenEnableWakeUp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDd(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, 0x11u, va);
}
