/*
 * XREFs of PpmQueryPlatformStateResidency @ 0x140229004
 * Callers:
 *     PpmQueryDripsResidency @ 0x140228FF0 (PpmQueryDripsResidency.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x14022A4DC (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopCalculateCsSummary @ 0x14022FD3C (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
