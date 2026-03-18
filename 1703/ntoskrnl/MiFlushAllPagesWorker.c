/*
 * XREFs of MiFlushAllPagesWorker @ 0x14013E0D8
 * Callers:
 *     MiFlushAllPages @ 0x14013F290 (MiFlushAllPages.c)
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x140029F68 (MiStoreUpdateMemoryConditions.c)
 *     CcNotifyWriteBehindInternal @ 0x14002FDA4 (CcNotifyWriteBehindInternal.c)
 *     MiCanFlushMakeProgress @ 0x14003B4B4 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x14003BB18 (MiWakeModifiedPageWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 */

__int64 __fastcall MiFlushAllPagesWorker(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 816));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 820));
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(a1, 0) || a4 && *(_DWORD *)(a4 + 4) )
      break;
    KeSetEvent((PRKEVENT)(a1 + 824), 0, 0);
    MiWakeModifiedPageWriter(a1, -1LL);
    CcNotifyWriteBehindInternal((struct _KEVENT *)&CcSystemPartition, 2);
    if ( *(_DWORD *)(a1 + 1192) )
      MiStoreUpdateMemoryConditions(a1);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( KiQueryUnbiasedInterruptTime() - a2 > a3 )
      break;
  }
  while ( *(_QWORD *)(a1 + 6144) > 0x32uLL );
  _InterlockedAdd((volatile signed __int32 *)(a1 + 816), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 820), 0xFFFFFFFF);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
