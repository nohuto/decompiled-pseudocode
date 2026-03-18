/*
 * XREFs of PopEsWorkItemSchedule @ 0x140610D28
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x140610D08 (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x140655510 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x14076C540 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x1408C9BFC (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
