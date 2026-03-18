/*
 * XREFs of PopGetSettingValue @ 0x1404C79F0
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x1404C2204 (PopFindPowerSettingConfiguration.c)
 *     PopMarshalSettingValues @ 0x1404C7D08 (PopMarshalSettingValues.c)
 */

__int64 __fastcall PopGetSettingValue(_QWORD *a1, __int64 a2, int a3)
{
  int ProcessSessionId; // eax
  _QWORD *PowerSettingConfiguration; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  ExAcquireFastMutex(&PopSettingLock);
  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, ProcessSessionId);
  if ( PowerSettingConfiguration )
  {
    v9 = PopMarshalSettingValues(PowerSettingConfiguration, a2 + 4, (unsigned int)(a3 - 4), a2);
    KeReleaseGuardedMutex(&PopSettingLock);
    return v9;
  }
  else
  {
    KeReleaseGuardedMutex(&PopSettingLock);
    return 3221225485LL;
  }
}
