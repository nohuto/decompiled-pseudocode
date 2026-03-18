/*
 * XREFs of PopFxStartDeviceAccounting @ 0x14023F3B4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

unsigned __int64 PopFxStartDeviceAccounting()
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbp
  ULONG_PTR i; // rbx
  KIRQL v4; // si
  unsigned int j; // esi
  __int64 v6; // rdi
  KIRQL v7; // r14

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
          if ( *(_BYTE *)(i + 584) )
            *(_QWORD *)(i + 600) = v2;
          KxReleaseSpinLock((PKSPIN_LOCK)(i + 576));
          __writecr8(v4);
        }
        for ( j = 0; j < *(_DWORD *)(i + 628); ++j )
        {
          v6 = *(_QWORD *)(*(_QWORD *)(i + 632) + 8LL * j) + 200LL;
          v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
          *(_QWORD *)(v6 + 32) = 0LL;
          *(_QWORD *)(v6 + 40) = 0LL;
          if ( *(_BYTE *)(v6 + 8) )
            *(_QWORD *)(v6 + 24) = v2;
          KxReleaseSpinLock((PKSPIN_LOCK)v6);
          __writecr8(v7);
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return (unsigned __int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
