/*
 * XREFs of WPP_SF_qqDq @ 0x1C0043F4C
 * Callers:
 *     NdisAllocateCloneOidRequest @ 0x1C000DCB0 (NdisAllocateCloneOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F104 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDq(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, 0xC2u, va);
}
