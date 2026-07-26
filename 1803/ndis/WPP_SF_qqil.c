/*
 * XREFs of WPP_SF_qqil @ 0x1C0061D3C
 * Callers:
 *     NdisSetTimerObject @ 0x1C00115C0 (NdisSetTimerObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqil(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_f50270d3ac6439ecad1a10c8aacbf967_Traceguids, 0xAu, va);
}
