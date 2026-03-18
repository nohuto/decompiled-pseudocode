/*
 * XREFs of PopFxResumeDeviceAccounting @ 0x14023F008
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

_QWORD *PopFxResumeDeviceAccounting()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbp
  ULONG_PTR i; // rbx
  KIRQL v3; // si
  unsigned int j; // esi
  __int64 v5; // rdi
  KIRQL v6; // r14

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
        *(_QWORD *)(i + 616) = 0LL;
        if ( *(_BYTE *)(i + 584) )
          *(_QWORD *)(i + 600) = v1;
        KxReleaseSpinLock((PKSPIN_LOCK)(i + 576));
        __writecr8(v3);
      }
      for ( j = 0; j < *(_DWORD *)(i + 628); ++j )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(i + 632) + 8LL * j);
        v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 200));
        *(_QWORD *)(v5 + 240) = 0LL;
        if ( *(_BYTE *)(v5 + 208) )
          *(_QWORD *)(v5 + 224) = v1;
        KxReleaseSpinLock((PKSPIN_LOCK)(v5 + 200));
        __writecr8(v6);
      }
    }
  }
  PopFxDeviceAccountingPaused = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
