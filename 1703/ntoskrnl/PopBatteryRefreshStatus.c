/*
 * XREFs of PopBatteryRefreshStatus @ 0x14014A7B0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406CB0E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     <none>
 */

__int64 PopBatteryRefreshStatus()
{
  return PopBatteryQueueWork(1LL);
}
