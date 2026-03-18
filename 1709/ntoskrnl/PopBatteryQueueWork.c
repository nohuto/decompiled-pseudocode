/*
 * XREFs of PopBatteryQueueWork @ 0x14014745C
 * Callers:
 *     PopBatteryRefreshStatus @ 0x140147440 (PopBatteryRefreshStatus.c)
 *     PopBatteryIrpComplete @ 0x140242350 (PopBatteryIrpComplete.c)
 *     PopBatteryWakeDpc @ 0x1402423D0 (PopBatteryWakeDpc.c)
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 *     PopSpoilBatteryEstimate @ 0x1405CB048 (PopSpoilBatteryEstimate.c)
 *     PopBatteryAdd @ 0x1406FE010 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1406FE840 (PopBatteryRemove.c)
 *     PopBatteryUpdateCurrentState @ 0x1406FEBF8 (PopBatteryUpdateCurrentState.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
