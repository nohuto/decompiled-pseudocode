/*
 * XREFs of PopFxStopDeviceAccounting @ 0x140276A14
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140078894 (PopFxUpdateAccountingActiveTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PopFxMergeActiveTimeBuckets @ 0x140275918 (PopFxMergeActiveTimeBuckets.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x14027C6AC (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxGlobalDeviceAccounting @ 0x14027C954 (PopDiagTraceFxGlobalDeviceAccounting.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140767820 (PopDiagTraceFxComponentAccounting.c)
 */

unsigned __int64 PopFxStopDeviceAccounting()
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // r15
  ULONG_PTR i; // rbx
  __int64 v4; // rsi
  KIRQL v5; // bp
  __int64 v6; // rcx
  unsigned int j; // r14d
  __int64 v8; // rdi
  KIRQL v9; // r12
  __int64 v10; // rcx
  KIRQL v11; // al
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  _OWORD v14[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+58h] [rbp-40h]

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
          if ( (PopFxDeviceAccountingLevel & 1) != 0 )
          {
            PopFxUpdateAccountingActiveTime(i + 576, v2, 0x47868C00uLL);
            PopFxMergeActiveTimeBuckets(v6);
            *(_QWORD *)(i + 608) += *(_QWORD *)(i + 616);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(i + 576));
          __writecr8(v5);
          PopDiagTraceFxDeviceAccounting(v4, i + 576, *(_QWORD *)(i + 608));
        }
        for ( j = 0; j < *(_DWORD *)(i + 708); ++j )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(i + 712) + 8LL * j);
          v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 200));
          if ( (PopFxDeviceAccountingLevel & 1) != 0 )
          {
            PopFxUpdateAccountingActiveTime(v8 + 200, v2, 0x47868C00uLL);
            PopFxMergeActiveTimeBuckets(v10);
            *(_QWORD *)(v8 + 232) += *(_QWORD *)(v8 + 240);
          }
          KxReleaseSpinLock((PKSPIN_LOCK)(v8 + 200));
          __writecr8(v9);
          PopDiagTraceFxComponentAccounting(v4, *(unsigned int *)(v8 + 16), v8 + 200, *(_QWORD *)(v8 + 232));
        }
      }
    }
    v11 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
    v12 = qword_1403AB910;
    v13 = v11;
    v14[0] = xmmword_1403AB918;
    v15 = qword_1403AB938;
    v14[1] = xmmword_1403AB928;
    KxReleaseSpinLock(&PopFxGlobalDeviceAccountingLock);
    __writecr8(v13);
    PopDiagTraceFxGlobalDeviceAccounting(v12, v14);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
    return (unsigned __int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
