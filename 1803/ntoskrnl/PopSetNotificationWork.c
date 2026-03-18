/*
 * XREFs of PopSetNotificationWork @ 0x140074D80
 * Callers:
 *     PopUserPresentSet @ 0x14016DB68 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x140171BA4 (PopInitilizeAcDcSettings.c)
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x14051D710 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x14052389C (PopGetSettingNotificationName.c)
 *     PopExecutePowerAction @ 0x1405EB7B4 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x1406109C0 (PopBatteryApplyCompositeState.c)
 *     PopUserPresentSetWorker @ 0x1406145B0 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x140626324 (PopApplyPolicy.c)
 * Callees:
 *     PopCheckForWork @ 0x14007421C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x140074BCC (PopGetPolicyWorker.c)
 */

struct _KTHREAD *__fastcall PopSetNotificationWork(unsigned int a1)
{
  struct _KTHREAD *result; // rax

  result = (struct _KTHREAD *)(a1 & PopNotifyEvents);
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4);
    return PopCheckForWork();
  }
  return result;
}
