/*
 * XREFs of PopFxPauseDeviceAccounting @ 0x14027593C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140764990 (PdcPoCurrentPdcPhase.c)
 *     PdcPoResiliencyClient @ 0x140764CE0 (PdcPoResiliencyClient.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140078894 (PopFxUpdateAccountingActiveTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PopFxMergeActiveTimeBuckets @ 0x140275918 (PopFxMergeActiveTimeBuckets.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1402767D8 (PopFxSetGlobalDeviceAccountingEnabled.c)
 */

_QWORD *PopFxPauseDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v1; // r14
  ULONG_PTR i; // rsi
  unsigned __int64 v3; // rbx
  unsigned int j; // ebp
  KSPIN_LOCK *v5; // rdi
  unsigned __int64 v6; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v1 = MEMORY[0xFFFFF78000000008];
  for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 48) )
    {
      if ( PopFxDeviceAccountingLevel < 0 )
      {
        v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 576));
        PopFxUpdateAccountingActiveTime(i + 576, v1, 0x47868C00uLL);
        *(_QWORD *)(i + 608) += *(_QWORD *)(i + 616);
        PopFxMergeActiveTimeBuckets(i + 576);
        KxReleaseSpinLock((PKSPIN_LOCK)(i + 576));
        __writecr8(v3);
      }
      for ( j = 0; j < *(_DWORD *)(i + 708); ++j )
      {
        v5 = (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(i + 712) + 8LL * j) + 200LL);
        v6 = KeAcquireSpinLockRaiseToDpc(v5);
        PopFxUpdateAccountingActiveTime((__int64)v5, v1, 0x47868C00uLL);
        v5[4] += v5[5];
        PopFxMergeActiveTimeBuckets((__int64)v5);
        KxReleaseSpinLock(v5);
        __writecr8(v6);
      }
    }
  }
  PopFxSetGlobalDeviceAccountingEnabled(0LL);
  PopFxDeviceAccountingPaused = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
