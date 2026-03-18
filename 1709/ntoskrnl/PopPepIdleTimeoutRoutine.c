/*
 * XREFs of PopPepIdleTimeoutRoutine @ 0x14000C130
 * Callers:
 *     <none>
 * Callees:
 *     PopPepArmIdleTimer @ 0x14000C2FC (PopPepArmIdleTimer.c)
 *     PopPepCountReadyActivities @ 0x14001B258 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x14001B30C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x14001B49C (PopPepPromoteActivities.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PopPepUpdateIdleState @ 0x140123A34 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetResidencyIdleState @ 0x140123B5C (PopPepComponentGetResidencyIdleState.c)
 */

__int64 PopPepIdleTimeoutRoutine()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi
  __int64 v3; // rcx
  KIRQL v5; // r14
  unsigned int ready; // r15d
  unsigned int j; // esi
  __int64 v8; // r10
  unsigned int v9; // eax
  __int64 v10; // rax
  int ResidencyIdleState; // eax
  __int64 v12; // r8
  __int64 v13; // r10

  v0 = MEMORY[0xFFFFF78000000008];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
  {
    if ( (*(_BYTE *)(i + 16) & 1) == 0 )
    {
      v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(i + 64));
      if ( *(_BYTE *)(i + 136) )
      {
        ready = PopPepCountReadyActivities(i, 0LL, 3LL);
        for ( j = 0; j < *(_DWORD *)(i + 180); ++j )
        {
          v8 = 200LL * j + i + 184;
          if ( *(_DWORD *)(v8 + 176) != *(_DWORD *)(v8 + 188) - 1 && !**(_DWORD **)(v8 + 72) && !**(_DWORD **)(v8 + 80) )
          {
            v10 = *(_QWORD *)(v8 + 136);
            if ( v0 > v10 && (unsigned __int64)(v0 - v10) > *(_QWORD *)(v8 + 120) )
            {
              *(_QWORD *)(v8 + 120) = v0 - v10;
              ResidencyIdleState = PopPepComponentGetResidencyIdleState(v8);
              if ( *(_DWORD *)(v13 + 160) != ResidencyIdleState )
              {
                LOBYTE(v12) = 1;
                *(_DWORD *)(v13 + 160) = ResidencyIdleState;
                PopPepUpdateIdleState(i, v13, v12);
              }
            }
          }
        }
        PopPepPromoteActivities(i, 0LL, 3LL);
        v9 = PopPepCountReadyActivities(i, 0LL, 3LL);
        PopPepRequestWork(ready, v9);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      __writecr8(v5);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  LOBYTE(v3) = 1;
  return PopPepArmIdleTimer(v3);
}
