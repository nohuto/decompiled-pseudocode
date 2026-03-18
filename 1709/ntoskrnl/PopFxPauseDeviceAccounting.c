/*
 * XREFs of PopFxPauseDeviceAccounting @ 0x14023E5D8
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406FF060 (PdcPoCurrentPdcPhase.c)
 *     PdcPoResiliencyClient @ 0x1406FF380 (PdcPoResiliencyClient.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

_QWORD *PopFxPauseDeviceAccounting()
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
  __int64 v9; // r8
  unsigned __int64 v10; // rdx

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
        if ( *(_BYTE *)(i + 584) )
        {
          v5 = *(_QWORD *)(i + 600);
          if ( v1 > v5 )
            v4 += v1 - v5;
        }
        *(_QWORD *)(i + 608) += v4;
        KxReleaseSpinLock((PKSPIN_LOCK)(i + 576));
        __writecr8(v3);
      }
      for ( j = 0; j < *(_DWORD *)(i + 628); ++j )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(i + 632) + 8LL * j) + 200LL;
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
        v9 = *(_QWORD *)(v7 + 40);
        if ( *(_BYTE *)(v7 + 8) )
        {
          v10 = *(_QWORD *)(v7 + 24);
          if ( v1 > v10 )
            v9 += v1 - v10;
        }
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
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
