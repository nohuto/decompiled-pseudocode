/*
 * XREFs of PopSetNotificationWork @ 0x1400B0BE4
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x140139D88 (PopInitilizeAcDcSettings.c)
 *     PopUserPresentSet @ 0x14015B5B8 (PopUserPresentSet.c)
 *     PopSetPowerSettingValue @ 0x1404DFA04 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E8D50 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingNotificationName @ 0x1404EAE58 (PopGetSettingNotificationName.c)
 *     PopApplyPolicy @ 0x1405B9210 (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x1405C9948 (PopBatteryApplyCompositeState.c)
 *     PopUserPresentSetWorker @ 0x1405EED00 (PopUserPresentSetWorker.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 * Callees:
 *     PopCheckForWork @ 0x1400B0F0C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400B11B4 (PopGetPolicyWorker.c)
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
