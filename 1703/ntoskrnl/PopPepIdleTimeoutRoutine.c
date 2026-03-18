/*
 * XREFs of PopPepIdleTimeoutRoutine @ 0x14022E770
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     PopPepCountReadyActivities @ 0x14006A6D8 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x14006A78C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x14006A91C (PopPepPromoteActivities.c)
 *     PopPepUpdateIdleState @ 0x14006AEE4 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetResidencyIdleState @ 0x14006AFE8 (PopPepComponentGetResidencyIdleState.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

void PopPepIdleTimeoutRoutine()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rdi
  KIRQL v3; // r14
  unsigned int ready; // r15d
  unsigned int j; // esi
  __int64 v6; // r10
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  int ResidencyIdleState; // eax
  __int64 v10; // r10
  unsigned int v11; // eax

  v0 = MEMORY[0xFFFFF78000000008];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  for ( i = PopPepDeviceList; (__int64 *)i != &PopPepDeviceList; i = *(_QWORD *)i )
  {
    if ( (*(_BYTE *)(i + 16) & 1) == 0 )
    {
      v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(i + 64));
      if ( *(_BYTE *)(i + 136) )
      {
        ready = PopPepCountReadyActivities((unsigned int *)i, 0LL, 3);
        for ( j = 0; j < *(_DWORD *)(i + 168); ++j )
        {
          v6 = 200LL * j + i + 176;
          if ( *(_DWORD *)(v6 + 176) != *(_DWORD *)(v6 + 188) - 1 && !**(_DWORD **)(v6 + 72) && !**(_DWORD **)(v6 + 80) )
          {
            v7 = *(_QWORD *)(v6 + 136);
            if ( v0 > v7 )
            {
              v8 = v0 - v7;
              if ( (unsigned __int64)(v0 - v7) > *(_QWORD *)(v6 + 120) )
              {
                *(_QWORD *)(v6 + 120) = v8;
                ResidencyIdleState = PopPepComponentGetResidencyIdleState(v6, v8);
                if ( *(_DWORD *)(v10 + 160) != ResidencyIdleState )
                {
                  *(_DWORD *)(v10 + 160) = ResidencyIdleState;
                  PopPepUpdateIdleState(i, v10, 1);
                }
              }
            }
          }
        }
        PopPepPromoteActivities(i, 0LL, 3);
        v11 = PopPepCountReadyActivities((unsigned int *)i, 0LL, 3);
        PopPepRequestWork(ready, v11);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(i + 64));
      __writecr8(v3);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  PopPepArmIdleTimer(1);
}
