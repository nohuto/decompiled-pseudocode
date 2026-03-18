/*
 * XREFs of PopEsWorkItemSchedule @ 0x140582B1C
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x140582B04 (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingPolicyCallback @ 0x1405D5A10 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1405D5D50 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x1406D0150 (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1406D01E0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
