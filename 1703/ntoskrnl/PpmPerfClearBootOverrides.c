/*
 * XREFs of PpmPerfClearBootOverrides @ 0x140148550
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x1405818E0 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 */

__int64 PpmPerfClearBootOverrides()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  LOWORD(v1) = 0;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    PpmPerfBootHeteroPolicyOverrideEnabled = 0;
    if ( PopHeteroSystem )
    {
      v1 |= 0x20u;
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      return PpmReapplyPerfPolicy(&v1);
    }
  }
  return result;
}
