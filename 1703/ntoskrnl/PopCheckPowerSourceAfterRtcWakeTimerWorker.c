/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14041A050
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PopOkayToQueueNextWorkItem @ 0x14003CC9C (PopOkayToQueueNextWorkItem.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x1404C2204 (PopFindPowerSettingConfiguration.c)
 *     NtInitiatePowerAction @ 0x1405773F8 (NtInitiatePowerAction.c)
 *     PopCurrentPowerStatePrecise @ 0x140577B60 (PopCurrentPowerStatePrecise.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeTimerWorker()
{
  __int64 PowerSettingConfiguration; // rax
  int v1; // ebx
  __int64 v2; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( PopSleepStats )
  {
    PopCurrentPowerStatePrecise(v4);
    if ( !v4[0] )
    {
      ExAcquireFastMutex(&PopSettingLock);
      PowerSettingConfiguration = PopFindPowerSettingConfiguration(&GUID_ALLOW_RTC_WAKE, 0xFFFFFFFFLL);
      v1 = 0;
      if ( PowerSettingConfiguration )
      {
        v2 = *(_QWORD *)(PowerSettingConfiguration + 72);
        if ( v2 )
        {
          if ( *(_DWORD *)(v2 + 4) >= 4u )
            v1 = *(_DWORD *)(v2 + 12);
        }
      }
      KeReleaseGuardedMutex(&PopSettingLock);
      if ( !v1 )
        NtInitiatePowerAction(SystemAction, MinSystemState, 0x80000000, 1u);
    }
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_14034A888);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
