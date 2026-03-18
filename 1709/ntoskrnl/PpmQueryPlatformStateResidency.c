/*
 * XREFs of PpmQueryPlatformStateResidency @ 0x14023BEBC
 * Callers:
 *     PpmQueryDripsResidency @ 0x14023BEA0 (PpmQueryDripsResidency.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x14023D3E4 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopCalculateIdleInformation @ 0x140244980 (PopCalculateIdleInformation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmQueryPlatformStateResidency(unsigned int a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebp
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _PPM_IDLE_STATES *IdleStates; // rcx

  v1 = -1LL;
  if ( PpmPlatformStates )
  {
    if ( *(_QWORD *)(PpmPlatformStates + 40) )
    {
      v3 = *(_DWORD *)PpmPlatformStates;
      if ( a1 != -1 && a1 < v3 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v3 + 8, 0x694D5050u);
        v5 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 16 * v3 + 8);
          *v5 = v3;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
          IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
          if ( IdleStates
            && (*(int (__fastcall **)(void *, unsigned int *))(PpmPlatformStates + 40))(
                 IdleStates->PrepareInfo.Context,
                 v5) >= 0 )
          {
            v1 = *(_QWORD *)&v5[4 * a1 + 2];
          }
          PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
          ExFreePoolWithTag(v5, 0x694D5050u);
        }
      }
    }
  }
  return v1;
}
