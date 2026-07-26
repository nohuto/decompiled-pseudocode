/*
 * XREFs of WPP_SF_qqill @ 0x1C0061DA0
 * Callers:
 *     NdisSetCoalescableTimerObject @ 0x1C0061B70 (NdisSetCoalescableTimerObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqill(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_f50270d3ac6439ecad1a10c8aacbf967_Traceguids, 0xBu, va);
}
