/*
 * XREFs of PopEsWorkItemSchedule @ 0x1405C9C98
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x1405C9C78 (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1405CAFE0 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140708590 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x140847FC0 (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
