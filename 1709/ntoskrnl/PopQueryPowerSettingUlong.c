/*
 * XREFs of PopQueryPowerSettingUlong @ 0x140701348
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140438E30 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopDeferDoze @ 0x140700F18 (PopDeferDoze.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x1404DFEBC (PopFindPowerSettingConfiguration.c)
 */

char __fastcall PopQueryPowerSettingUlong(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // di
  _QWORD *PowerSettingConfiguration; // rax
  _QWORD *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax

  v6 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, -1);
  v8 = PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v9 = PowerSettingConfiguration[8];
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 4) >= 4u )
      {
        *a2 = *(_DWORD *)(v9 + 12);
        v10 = v8[9];
        if ( v10 )
        {
          if ( *(_DWORD *)(v10 + 4) >= 4u )
          {
            v6 = 1;
            *a3 = *(_DWORD *)(v10 + 12);
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  return v6;
}
