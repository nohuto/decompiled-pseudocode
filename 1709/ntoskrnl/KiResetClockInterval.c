/*
 * XREFs of KiResetClockInterval @ 0x14010F138
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140098BB0 (KiCheckForTimerExpiration.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14020ACEC (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14010F228 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiResetClockInterval(unsigned __int64 a1)
{
  RtlRbRemoveNode((__int64)&KiClockIntervalRequests, a1);
  *(_BYTE *)(a1 + 24) = 0;
  return KiSetClockIntervalToMinimumRequested();
}
