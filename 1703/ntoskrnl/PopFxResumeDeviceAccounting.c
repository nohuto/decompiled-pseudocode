/*
 * XREFs of PopFxResumeDeviceAccounting @ 0x14022BC4C
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

__int64 PopFxResumeDeviceAccounting()
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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
