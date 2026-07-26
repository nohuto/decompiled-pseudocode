/*
 * XREFs of WPP_SF_qqDd @ 0x1C0049A7C
 * Callers:
 *     ndisSetOpenEnableWakeUp @ 0x1C00E33DC (ndisSetOpenEnableWakeUp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDd(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, 0x11u, va);
}
