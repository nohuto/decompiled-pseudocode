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

__int64 __fastcall KiResetClockInterval(PRTL_BALANCED_NODE Node)
{
  __int64 v2; // rcx
  __int64 Right_low; // rdx

  RtlRbRemoveNode(&KiClockIntervalRequests, Node);
  Right_low = LODWORD(Node[1].Right);
  LOBYTE(Node[1].Children[0]) = 0;
  if ( (_DWORD)Right_low )
    PoTraceSystemTimerResolutionKernel(0, Right_low);
  return KiSetClockIntervalToMinimumRequested(v2, Right_low);
}
