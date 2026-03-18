/*
 * XREFs of PpmDisableProfile @ 0x1406D5B18
 * Callers:
 *     PdcPoPpmResetProfile @ 0x1406CB240 (PdcPoPpmResetProfile.c)
 * Callees:
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PpmResetProfileSettings @ 0x140164A74 (PpmResetProfileSettings.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 *     PpmEventTraceProfileEnable @ 0x1405CDA14 (PpmEventTraceProfileEnable.c)
 */

char __fastcall PpmDisableProfile(__int64 a1)
{
  char v2; // si
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // rax
  char result; // al
  int v7; // [rsp+30h] [rbp+8h] BYREF

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v2 = *(_BYTE *)(a1 + 8);
  *(_DWORD *)(a1 + 28) &= ~1u;
  v3 = 1;
  PpmResetProfileSettings(a1);
  v4 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_BACKGROUND.Data1;
    if ( !v5 )
      v5 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_BACKGROUND.Data4;
    if ( !v5 )
    {
      LOWORD(v7) = 0;
      v7 |= 0x20u;
      PpmBackgroundProfile = 0LL;
      PpmReapplyPerfPolicy(&v7);
      v3 = 0;
    }
  }
  else
  {
    PpmLowPowerProfile = 0LL;
  }
  result = PpmEventTraceProfileEnable(v2, 0);
  if ( v3 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  return result;
}
