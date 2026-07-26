/*
 * XREFs of WPP_SF_qqDq @ 0x1C0045CC0
 * Callers:
 *     NdisAllocateCloneOidRequest @ 0x1C000BF20 (NdisAllocateCloneOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004FBEC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDq(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, 0xB3u, va);
}
