/*
 * XREFs of PopFxStartDeviceAccounting @ 0x140276860
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

unsigned __int64 PopFxStartDeviceAccounting()
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbp
  ULONG_PTR i; // rbx
  KIRQL v4; // al
  KIRQL v5; // si
  unsigned int j; // esi
  __int64 v7; // rdi
  KIRQL v8; // al
  KIRQL v9; // r14
  unsigned __int64 v10; // rbx

  result = (unsigned int)PopFxDeviceAccountingLevel;
  if ( PopFxDeviceAccountingLevel )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
    v2 = MEMORY[0xFFFFF78000000008];
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 48) )
      {
        if ( PopFxDeviceAccountingLevel < 0 )
        {
          v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 576));
          *(_QWORD *)(i + 608) = 0LL;
          *(_QWORD *)(i + 616) = 0LL;
          v5 = v4;
          memset((void *)(i + 624), 0, 0x50uLL);
          if ( *(_BYTE *)(i + 584) )
            *(_QWORD *)(i + 600) = v2;
          KxReleaseSpinLock((PKSPIN_LOCK)(i + 576));
          __writecr8(v5);
        }
        for ( j = 0; j < *(_DWORD *)(i + 708); ++j )
        {
          v7 = *(_QWORD *)(*(_QWORD *)(i + 712) + 8LL * j) + 200LL;
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
          *(_QWORD *)(v7 + 32) = 0LL;
          *(_QWORD *)(v7 + 40) = 0LL;
          v9 = v8;
          memset((void *)(v7 + 48), 0, 0x50uLL);
          if ( *(_BYTE *)(v7 + 8) )
            *(_QWORD *)(v7 + 24) = v2;
          KxReleaseSpinLock((PKSPIN_LOCK)v7);
          __writecr8(v9);
        }
      }
    }
    v10 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
    memset(&qword_1403AB910, 0, 0x30uLL);
    KxReleaseSpinLock(&PopFxGlobalDeviceAccountingLock);
    __writecr8(v10);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return (unsigned __int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
