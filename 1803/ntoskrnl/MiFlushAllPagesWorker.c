/*
 * XREFs of MiFlushAllPagesWorker @ 0x14014D944
 * Callers:
 *     MiFlushAllPages @ 0x1401577E8 (MiFlushAllPages.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     MiStoreUpdateMemoryConditions @ 0x140081410 (MiStoreUpdateMemoryConditions.c)
 *     MiWakeModifiedPageWriter @ 0x140081C4C (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x140081CA4 (MiCanFlushMakeProgress.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     CcNotifyWriteBehindEx @ 0x14014DA40 (CcNotifyWriteBehindEx.c)
 */

_QWORD *__fastcall MiFlushAllPagesWorker(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 768));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 772));
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(a1, 0) || a4 && *(_DWORD *)(a4 + 4) )
      break;
    KeSetEvent((PRKEVENT)(a1 + 776), 0, 0);
    MiWakeModifiedPageWriter(a1, -1LL);
    CcNotifyWriteBehindEx(2LL, *(_QWORD *)(a1 + 168));
    if ( *(_DWORD *)(a1 + 1144) )
      MiStoreUpdateMemoryConditions(a1);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( KiQueryUnbiasedInterruptTime() - a2 > a3 )
      break;
  }
  while ( *(_QWORD *)(a1 + 7424) > 0x32uLL );
  _InterlockedAdd((volatile signed __int32 *)(a1 + 768), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 772), 0xFFFFFFFF);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
