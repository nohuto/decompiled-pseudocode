/*
 * XREFs of PopSetNotificationWork @ 0x14006FD70
 * Callers:
 *     PopUserPresentSet @ 0x14014AC38 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x1401557BC (PopInitilizeAcDcSettings.c)
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x1404C2C70 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x1404C4DF4 (PopGetSettingNotificationName.c)
 *     PopExecutePowerAction @ 0x140577024 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14058289C (PopBatteryApplyCompositeState.c)
 *     PopUserPresentSetWorker @ 0x140586600 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x1405C3850 (PopApplyPolicy.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1400701C0 (PopGetPolicyWorker.c)
 */

__int64 __fastcall PopSetNotificationWork(unsigned int a1)
{
  __int64 result; // rax

  result = a1 & PopNotifyEvents;
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4LL);
    return PopCheckForWork();
  }
  return result;
}
