/*
 * XREFs of PopFxPauseDeviceAccounting @ 0x14022B25C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406CB0E0 (PdcPoCurrentPdcPhase.c)
 *     PdcPoResiliencyClient @ 0x1406CB3C0 (PdcPoResiliencyClient.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 PopFxPauseDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v1; // rsi
  ULONG_PTR i; // rbx
  KIRQL v3; // bp
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned int j; // ebp
  __int64 v7; // rdi
  KIRQL v8; // r14
  __int64 v9; // rdx
  unsigned __int64 v10; // r8

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
        v4 = *(_QWORD *)(i + 616);
        v5 = *(_QWORD *)(i + 600);
        if ( *(_BYTE *)(i + 584) && v1 > v5 )
          v4 += v1 - v5;
        *(_QWORD *)(i + 608) += v4;
        KxReleaseSpinLock((PKSPIN_LOCK)(i + 576));
        __writecr8(v3);
      }
      for ( j = 0; j < *(_DWORD *)(i + 628); ++j )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(i + 632) + 8LL * j) + 200LL;
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
        v9 = *(_QWORD *)(v7 + 40);
        v10 = *(_QWORD *)(v7 + 24);
        if ( *(_BYTE *)(v7 + 8) && v1 > v10 )
          v9 += v1 - v10;
        *(_QWORD *)(v7 + 32) += v9;
        KxReleaseSpinLock((PKSPIN_LOCK)v7);
        __writecr8(v8);
      }
    }
  }
  PopFxDeviceAccountingPaused = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
