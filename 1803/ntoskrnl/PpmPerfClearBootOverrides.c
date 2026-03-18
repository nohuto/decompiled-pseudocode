/*
 * XREFs of PpmPerfClearBootOverrides @ 0x14016A670
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x1406102F0 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x14063EA98 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmPerfClearBootOverrides()
{
  __int64 result; // rax

  result = 0LL;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    PpmPerfBootHeteroPolicyOverrideEnabled = 0;
    if ( PopHeteroSystem )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      return PpmReinitializeHeteroEngine(0LL);
    }
  }
  return result;
}
