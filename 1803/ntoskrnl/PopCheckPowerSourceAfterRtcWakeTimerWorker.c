/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140486D90
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1400D2C70 (PopOkayToQueueNextWorkItem.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     PopCurrentPowerStatePrecise @ 0x1405EA830 (PopCurrentPowerStatePrecise.c)
 *     NtInitiatePowerAction @ 0x1405EB5AC (NtInitiatePowerAction.c)
 *     PopQueryPowerSettingUlong @ 0x1405EEC60 (PopQueryPowerSettingUlong.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeTimerWorker()
{
  _BYTE v1[40]; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF
  char v3; // [rsp+60h] [rbp+18h] BYREF

  if ( PopSleepStats )
  {
    PopCurrentPowerStatePrecise(v1);
    if ( !v1[0] )
    {
      v2 = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, &v3, &v2);
      if ( !v2 )
        NtInitiatePowerAction(SystemAction, MinSystemState, 0x80000000, 1u);
    }
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_1403A97A8);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
