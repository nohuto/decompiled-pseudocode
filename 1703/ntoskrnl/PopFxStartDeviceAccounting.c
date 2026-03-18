/*
 * XREFs of PopFxStartDeviceAccounting @ 0x14022BFEC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 PopFxStartDeviceAccounting()
{
  __int64 result; // rax
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
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
