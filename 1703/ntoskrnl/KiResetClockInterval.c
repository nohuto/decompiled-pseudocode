/*
 * XREFs of KiResetClockInterval @ 0x140067A68
 * Callers:
 *     KiCheckForTimerExpiration @ 0x1400F6AF0 (KiCheckForTimerExpiration.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140204AB4 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140048460 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiResetClockInterval(__int64 a1)
{
  RtlRbRemoveNode((__int64)&KiClockIntervalRequests, (unsigned __int64 *)a1);
  *(_BYTE *)(a1 + 24) = 0;
  return KiSetClockIntervalToMinimumRequested();
}
