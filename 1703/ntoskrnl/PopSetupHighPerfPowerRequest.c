/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x1405D5CC8
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PpmEndHighPerfRequest @ 0x14014AF90 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14014B768 (PpmBeginHighPerfRequest.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 */

__int64 PopSetupHighPerfPowerRequest()
{
  __int64 v0; // rdx
  int v1; // ebx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( PpmHighPerfDuration[0] )
  {
    v1 = PpmBeginHighPerfRequest();
    if ( v1 >= 0 )
    {
      v1 = PpmEndHighPerfRequest(0, v0);
      if ( v1 >= 0 )
        return (unsigned int)v1;
    }
  }
  else
  {
    v1 = 0;
  }
  PpmPerfBootHeteroPolicyOverrideEnabled = 0;
  if ( PopHeteroSystem )
  {
    LOWORD(v3) = 0;
    v3 |= 0x20u;
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmReapplyPerfPolicy(&v3);
  }
  return (unsigned int)v1;
}
