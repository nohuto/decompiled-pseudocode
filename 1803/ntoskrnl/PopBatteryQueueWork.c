/*
 * XREFs of PopBatteryQueueWork @ 0x14016CA8C
 * Callers:
 *     PopBatteryWakeDpc @ 0x140156240 (PopBatteryWakeDpc.c)
 *     PopBatteryRefreshStatus @ 0x14016CA70 (PopBatteryRefreshStatus.c)
 *     PopBatteryIrpComplete @ 0x140279000 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x140611B78 (PopBatteryUpdateCurrentState.c)
 *     PopSpoilBatteryEstimate @ 0x140611CC0 (PopSpoilBatteryEstimate.c)
 *     PopBatteryAdd @ 0x140763890 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1407640B0 (PopBatteryRemove.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
