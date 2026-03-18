/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140438E30
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     PopOkayToQueueNextWorkItem @ 0x1401325F0 (PopOkayToQueueNextWorkItem.c)
 *     PopCurrentPowerStatePrecise @ 0x1406FECD0 (PopCurrentPowerStatePrecise.c)
 *     NtInitiatePowerAction @ 0x140700C9C (NtInitiatePowerAction.c)
 *     PopQueryPowerSettingUlong @ 0x140701348 (PopQueryPowerSettingUlong.c)
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
  PopOkayToQueueNextWorkItem((__int64)&unk_140365068);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
