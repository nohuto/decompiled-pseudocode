/*
 * XREFs of PpmEnableProfile @ 0x1405CD9A8
 * Callers:
 *     PdcPoPpmResetProfile @ 0x1406CB240 (PdcPoPpmResetProfile.c)
 *     PpmRegisterSpmSettings @ 0x1406D5EF0 (PpmRegisterSpmSettings.c)
 *     PpmInitPolicyConfiguration @ 0x14081FF4C (PpmInitPolicyConfiguration.c)
 * Callees:
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmEnableProfile(__int64 a1)
{
  __int64 v1; // rax
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 28) |= 1u;
  v1 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
  v2 = *(_BYTE *)(a1 + 8);
  if ( !v1 )
    v1 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
  v3 = 0LL;
  if ( v1 )
  {
    v4 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_BACKGROUND.Data1;
    if ( !v4 )
      v4 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_BACKGROUND.Data4;
    if ( !v4 )
    {
      PpmBackgroundProfile = a1;
      LOWORD(v6) = 0;
      v6 |= 0x20u;
      PpmReapplyPerfPolicy(&v6);
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    }
  }
  else
  {
    PpmLowPowerProfile = a1;
  }
  LOBYTE(v3) = 1;
  LOBYTE(a1) = v2;
  return PpmEventTraceProfileEnable(a1, v3);
}
