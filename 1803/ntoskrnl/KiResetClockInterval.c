/*
 * XREFs of KiResetClockInterval @ 0x140184708
 * Callers:
 *     KiCheckForTimerExpiration @ 0x14010D920 (KiCheckForTimerExpiration.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140248F50 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x140005A68 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140005B80 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiResetClockInterval(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  RtlRbRemoveNode((__int64)&KiClockIntervalRequests, a1);
  v3 = *(unsigned int *)(a1 + 32);
  *(_BYTE *)(a1 + 24) = 0;
  if ( (_DWORD)v3 )
    PoTraceSystemTimerResolutionKernel(0, v3);
  return KiSetClockIntervalToMinimumRequested(v2, v3);
}
