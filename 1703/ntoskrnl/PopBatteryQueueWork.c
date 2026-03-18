/*
 * XREFs of PopBatteryQueueWork @ 0x14014A7C0
 * Callers:
 *     PopBatteryWakeDpc @ 0x14013DFD0 (PopBatteryWakeDpc.c)
 *     PopBatteryRefreshStatus @ 0x14014A7B0 (PopBatteryRefreshStatus.c)
 *     PopBatteryIrpComplete @ 0x14022E190 (PopBatteryIrpComplete.c)
 *     PopBatteryUpdateCurrentState @ 0x14057D4B4 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 *     PopSpoilBatteryEstimate @ 0x140584E84 (PopSpoilBatteryEstimate.c)
 *     PopBatteryRemove @ 0x1406CAA10 (PopBatteryRemove.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
