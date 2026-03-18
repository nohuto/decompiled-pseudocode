/*
 * XREFs of PopBatteryRefreshStatus @ 0x14016CA70
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140764990 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopBatteryQueueWork @ 0x14016CA8C (PopBatteryQueueWork.c)
 */

__int64 PopBatteryRefreshStatus()
{
  return PopBatteryQueueWork(1LL);
}
