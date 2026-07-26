/*
 * XREFs of WPP_SF_qqDd @ 0x1C004ABF4
 * Callers:
 *     ndisSetOpenEnableWakeUp @ 0x1C00D77AC (ndisSetOpenEnableWakeUp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDd(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, 0x11u, va);
}
