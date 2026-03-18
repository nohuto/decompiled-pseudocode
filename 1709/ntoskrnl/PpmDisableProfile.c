/*
 * XREFs of PpmDisableProfile @ 0x14070B87C
 * Callers:
 *     PdcPoPpmResetProfile @ 0x1406FF200 (PdcPoPpmResetProfile.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     PpmResetProfileSettings @ 0x140155ABC (PpmResetProfileSettings.c)
 *     PpmReinitializeHeteroEngine @ 0x1405B4FD8 (PpmReinitializeHeteroEngine.c)
 *     PpmEventTraceProfileEnable @ 0x1405E2194 (PpmEventTraceProfileEnable.c)
 */

char __fastcall PpmDisableProfile(__int64 a1)
{
  char v2; // si
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char result; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v2 = *(_BYTE *)(a1 + 8);
  *(_DWORD *)(a1 + 28) &= ~1u;
  v3 = 1;
  PpmResetProfileSettings(a1);
  v4 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
  if ( !v4 )
  {
    PpmLowPowerProfile = 0LL;
    goto LABEL_14;
  }
  v5 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_BACKGROUND.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_BACKGROUND.Data4;
  if ( !v5 )
  {
    PpmBackgroundProfile = 0LL;
LABEL_13:
    PpmReinitializeHeteroEngine(1);
    v3 = 0;
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_ENTRY_LEVEL_PERF.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_ENTRY_LEVEL_PERF.Data4;
  if ( !v6 )
  {
    PpmEntryLevelPerfProfile = 0LL;
    goto LABEL_13;
  }
LABEL_14:
  result = PpmEventTraceProfileEnable(v2, 0);
  if ( v3 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  return result;
}
