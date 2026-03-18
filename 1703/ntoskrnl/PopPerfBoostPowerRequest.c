/*
 * XREFs of PopPerfBoostPowerRequest @ 0x1405818E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PoLatencySensitivityHint @ 0x140130BD0 (PoLatencySensitivityHint.c)
 *     PpmPerfClearBootOverrides @ 0x140148550 (PpmPerfClearBootOverrides.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     PpmPerfUpdateDomains @ 0x140581950 (PpmPerfUpdateDomains.c)
 *     PpmPerfRecomputeBackgroundPolicy @ 0x1405819C0 (PpmPerfRecomputeBackgroundPolicy.c)
 */

__int64 __fastcall PopPerfBoostPowerRequest(char a1)
{
  __int64 v3; // [rsp+60h] [rbp+18h] BYREF

  if ( !a1 )
    PpmPerfClearBootOverrides();
  if ( (MEMORY[0x7FFE02D0] & 0x10000) != 0 || !*(_DWORD *)((char *)&PopCapabilities + 3) )
  {
    v3 = 0LL;
    if ( a1 )
      PoLatencySensitivityHint(3);
    HIDWORD(v3) = -1;
    LODWORD(v3) = v3 & 0xFFFFFFFD | (a1 != 0 ? 3 : 1);
    ZwUpdateWnfStateData((__int64)&WNF_SEB_LOW_LATENCY_POWER_REQUEST, (__int64)&v3, 8LL);
  }
  else
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmPerfMaxOverrideEnabled = a1 != 0;
    PpmPerfRecomputeBackgroundPolicy(0LL);
    PpmPerfUpdateDomains();
  }
  return 0LL;
}
