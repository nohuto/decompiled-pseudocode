/*
 * XREFs of PopFxStopDeviceAccounting @ 0x14023F518
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x140245CDC (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140703594 (PopDiagTraceFxComponentAccounting.c)
 */

unsigned __int64 PopFxStopDeviceAccounting()
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // rsi
  ULONG_PTR i; // rbx
  __int64 v4; // rbp
  KIRQL v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned int j; // r14d
  __int64 v9; // r15
  KIRQL v10; // r12
  __int64 v11; // r8
  unsigned __int64 v12; // r9

  result = (unsigned int)PopFxDeviceAccountingLevel;
  if ( PopFxDeviceAccountingLevel )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
    v2 = MEMORY[0xFFFFF78000000008];
    for ( i = PopFxDeviceList; (ULONG_PTR *)i != &PopFxDeviceList; i = *(_QWORD *)i )
    {
      v4 = *(_QWORD *)(i + 48);
      if ( v4 )
      {
        if ( PopFxDeviceAccountingLevel < 0 )
        {
          v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(i + 576));
          v6 = *(_QWORD *)(i + 616);
          if ( (PopFxDeviceAccountingLevel & 1) != 0 )
          {
            if ( *(_BYTE *)(i + 584) )
            {
              v7 = *(_QWORD *)(i + 600);
              if ( v2 > v7 )
                v6 += v2 - v7;
            }
            *(_QWORD *)(i + 608) = v6;
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(i + 576));
          __writecr8(v5);
          PopDiagTraceFxDeviceAccounting(v4, *(_QWORD *)(i + 608));
        }
        for ( j = 0; j < *(_DWORD *)(i + 628); ++j )
        {
          v9 = *(_QWORD *)(*(_QWORD *)(i + 632) + 8LL * j);
          v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 200));
          v11 = *(_QWORD *)(v9 + 240);
          if ( (PopFxDeviceAccountingLevel & 1) != 0 )
          {
            if ( *(_BYTE *)(v9 + 208) )
            {
              v12 = *(_QWORD *)(v9 + 224);
              if ( v2 > v12 )
                v11 += v2 - v12;
            }
            *(_QWORD *)(v9 + 232) = v11;
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v9 + 200));
          __writecr8(v10);
          PopDiagTraceFxComponentAccounting(v4, *(unsigned int *)(v9 + 16), *(_QWORD *)(v9 + 232));
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
