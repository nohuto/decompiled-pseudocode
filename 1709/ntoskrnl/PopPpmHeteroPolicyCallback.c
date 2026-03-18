/*
 * XREFs of PopPpmHeteroPolicyCallback @ 0x1405B3BE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     PpmReinitializeHeteroEngine @ 0x1405B4FD8 (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PopPpmHeteroPolicyCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v6; // rcx

  v3 = *(_QWORD *)&GUID_PROCESSOR_HETEROGENEOUS_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_PROCESSOR_HETEROGENEOUS_POLICY.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_PROCESSOR_HETEROGENEOUS_POLICY.Data4 - a1[1];
  v4 = 0;
  if ( !v3 && a3 == 4 && a2 )
  {
    v5 = *a2;
    if ( (unsigned int)*a2 > 4 )
      v5 = 0;
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    if ( v5 == PpmHeteroPolicy )
    {
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      LOBYTE(v6) = 1;
      if ( (unsigned int)(PopHeteroSystem - 1) > 1 )
        v5 = 0;
      PpmHeteroPolicy = v5;
      PpmReinitializeHeteroEngine(v6);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
