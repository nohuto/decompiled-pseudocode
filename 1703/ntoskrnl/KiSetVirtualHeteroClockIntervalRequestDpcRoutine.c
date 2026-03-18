/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x140204B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KiSetVirtualHeteroClockIntervalRequestDpcRoutine()
{
  return KiSetVirtualHeteroClockIntervalRequest(KiPendingVirtualHeteroRequest == 0);
}
