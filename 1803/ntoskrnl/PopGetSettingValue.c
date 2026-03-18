/*
 * XREFs of PopGetSettingValue @ 0x140565F00
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     PsGetProcessSessionIdEx @ 0x1400BD230 (PsGetProcessSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x140519458 (PopFindPowerSettingConfiguration.c)
 *     PopMarshalSettingValues @ 0x14056609C (PopMarshalSettingValues.c)
 */

__int64 __fastcall PopGetSettingValue(_QWORD *a1, __int64 a2, int a3)
{
  int ProcessSessionId; // eax
  __int64 *PowerSettingConfiguration; // rax
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
