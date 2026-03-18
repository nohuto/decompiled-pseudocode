/*
 * XREFs of PopBatteryRefreshStatus @ 0x140147440
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406FF060 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopBatteryQueueWork @ 0x14014745C (PopBatteryQueueWork.c)
 */

__int64 PopBatteryRefreshStatus()
{
  return PopBatteryQueueWork(1LL);
}
