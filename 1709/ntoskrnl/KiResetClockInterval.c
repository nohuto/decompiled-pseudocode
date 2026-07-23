/*
 * XREFs of KiResetClockInterval @ 0x14010F138
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140098BB0 (KiCheckForTimerExpiration.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14020ACEC (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14010F228 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiResetClockInterval(PRTL_BALANCED_NODE Node)
{
  RtlRbRemoveNode(&KiClockIntervalRequests, Node);
  LOBYTE(Node[1].Children[0]) = 0;
  return KiSetClockIntervalToMinimumRequested();
}
