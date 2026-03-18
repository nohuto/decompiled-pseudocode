/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x1405EF820
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmEndHighPerfRequest @ 0x14015B7B4 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14015B880 (PpmBeginHighPerfRequest.c)
 *     PpmReinitializeHeteroEngine @ 0x1405B4FD8 (PpmReinitializeHeteroEngine.c)
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
    PpmReinitializeHeteroEngine(0);
  }
  return (unsigned int)v0;
}
