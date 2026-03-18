/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x14020AD60
 * Callers:
 *     <none>
 * Callees:
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14020ACEC (KiSetVirtualHeteroClockIntervalRequest.c)
 */

__int64 KiSetVirtualHeteroClockIntervalRequestDpcRoutine()
{
  return KiSetVirtualHeteroClockIntervalRequest(KiPendingVirtualHeteroRequest == 0);
}
