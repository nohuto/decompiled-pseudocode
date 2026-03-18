/*
 * XREFs of PopEsQueueStateEvaluation @ 0x1405C9C78
 * Callers:
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 *     PopEsPowerSettingPolicyCallback @ 0x1405F2360 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x140708500 (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x1405C9C98 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
