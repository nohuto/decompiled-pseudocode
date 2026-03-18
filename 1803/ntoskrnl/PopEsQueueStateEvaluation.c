/*
 * XREFs of PopEsQueueStateEvaluation @ 0x140610D08
 * Callers:
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 *     PopEsPowerSettingPolicyCallback @ 0x140655350 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x14076C4B0 (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x140610D28 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
