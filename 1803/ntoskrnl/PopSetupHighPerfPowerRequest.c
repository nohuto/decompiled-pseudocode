/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x14062754C
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PpmEndHighPerfRequest @ 0x14016DFB4 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14016E780 (PpmBeginHighPerfRequest.c)
 *     PpmReinitializeHeteroEngine @ 0x14063EA98 (PpmReinitializeHeteroEngine.c)
 */

__int64 PopSetupHighPerfPowerRequest()
{
  int v0; // ebx

  if ( PpmHighPerfDuration[0] )
  {
    v0 = PpmBeginHighPerfRequest();
    if ( v0 >= 0 )
    {
      PpmEndHighPerfRequest(0);
      return (unsigned int)v0;
    }
  }
  else
  {
    v0 = 0;
  }
  PpmPerfBootHeteroPolicyOverrideEnabled = 0;
  if ( PopHeteroSystem )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmReinitializeHeteroEngine(0LL);
  }
  return (unsigned int)v0;
}
