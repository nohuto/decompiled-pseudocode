/*
 * XREFs of PopFxResidentTimeoutRoutine @ 0x14011B7B0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxArmResidentTimer @ 0x14001ADF4 (PopFxArmResidentTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PopFxIdleComponent @ 0x1400E403C (PopFxIdleComponent.c)
 *     RtlGetInterruptTimePrecise @ 0x1400E48D0 (RtlGetInterruptTimePrecise.c)
 */

__int64 PopFxResidentTimeoutRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  LARGE_INTEGER InterruptTimePrecise; // rax
  ULONG_PTR v2; // rbx
  LARGE_INTEGER v3; // rsi
  unsigned int i; // edi
  __int64 v5; // rdx
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  if ( (ULONG_PTR *)PopFxDeviceList != &PopFxDeviceList )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v2 = PopFxDeviceList;
    v3 = InterruptTimePrecise;
    while ( (ULONG_PTR *)v2 != &PopFxDeviceList )
    {
      for ( i = 0; i < *(_DWORD *)(v2 + 628); ++i )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(v2 + 632) + 8LL * i);
        if ( *(int *)(v5 + 96) > 0
          && v3.QuadPart - *(_QWORD *)(v5 + 144) >= (unsigned __int64)(unsigned int)PopFxActiveIdleThreshold )
        {
          _InterlockedAdd((volatile signed __int32 *)(v5 + 96), 0xFFFFFFFF);
          _InterlockedAdd(&PopFxResidentComponentCount, 0xFFFFFFFF);
          PopFxIdleComponent(v2, i, 1, 0LL);
        }
      }
      v2 = *(_QWORD *)v2;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return PopFxArmResidentTimer(1);
}
