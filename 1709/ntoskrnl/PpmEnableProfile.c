/*
 * XREFs of PpmEnableProfile @ 0x1405E2108
 * Callers:
 *     PdcPoPpmResetProfile @ 0x1406FF200 (PdcPoPpmResetProfile.c)
 *     PpmRegisterSpmSettings @ 0x14070BC60 (PpmRegisterSpmSettings.c)
 *     PpmInitPolicyConfiguration @ 0x140850E70 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x1405B4FD8 (PpmReinitializeHeteroEngine.c)
 *     PpmEventTraceProfileEnable @ 0x1405E2194 (PpmEventTraceProfileEnable.c)
 */

__int64 __fastcall PpmEnableProfile(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax

  *(_DWORD *)(a1 + 28) |= 1u;
  v2 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
  v3 = *(_BYTE *)(a1 + 8);
  if ( !v2 )
    v2 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
  if ( !v2 )
  {
    PpmLowPowerProfile = a1;
    goto LABEL_10;
  }
  v4 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_BACKGROUND.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_BACKGROUND.Data4;
  if ( !v4 )
  {
    PpmBackgroundProfile = a1;
LABEL_14:
    PpmReinitializeHeteroEngine(1);
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    goto LABEL_10;
  }
  v5 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_ENTRY_LEVEL_PERF.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_ENTRY_LEVEL_PERF.Data4;
  if ( !v5 )
  {
    PpmEntryLevelPerfProfile = a1;
    goto LABEL_14;
  }
LABEL_10:
  LOBYTE(a2) = 1;
  LOBYTE(a1) = v3;
  return PpmEventTraceProfileEnable(a1, a2);
}
