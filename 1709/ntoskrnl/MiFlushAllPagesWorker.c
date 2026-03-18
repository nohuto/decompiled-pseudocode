/*
 * XREFs of MiFlushAllPagesWorker @ 0x140225AB0
 * Callers:
 *     MiFlushAllPages @ 0x1402259EC (MiFlushAllPages.c)
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x14000851C (MiStoreUpdateMemoryConditions.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     CcNotifyWriteBehindEx @ 0x1401E0540 (CcNotifyWriteBehindEx.c)
 *     MiCanFlushMakeProgress @ 0x140224D4C (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x140227290 (MiWakeModifiedPageWriter.c)
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
    CcNotifyWriteBehindEx(2, *(_QWORD *)(a1 + 168));
    if ( *(_DWORD *)(a1 + 1144) )
      MiStoreUpdateMemoryConditions(a1);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( KiQueryUnbiasedInterruptTime() - a2 > a3 )
      break;
  }
  while ( *(_QWORD *)(a1 + 6336) > 0x32uLL );
  _InterlockedAdd((volatile signed __int32 *)(a1 + 768), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 772), 0xFFFFFFFF);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
