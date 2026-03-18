/*
 * XREFs of PopPpmHeteroPolicyCallback @ 0x14063EA10
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x14063EA98 (PpmReinitializeHeteroEngine.c)
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
