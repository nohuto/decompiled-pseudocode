/*
 * XREFs of WPP_SF_qqil @ 0x1C006147C
 * Callers:
 *     NdisSetTimerObject @ 0x1C0023720 (NdisSetTimerObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E79C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqil(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_49acf40009c130b7c86151e057504a2b_Traceguids, 0xAu, va);
}
