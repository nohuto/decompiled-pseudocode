/*
 * XREFs of MiFlushAllHintedStorePages @ 0x14007FCDC
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x140584C00 (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     MiStoreUpdateMemoryConditions @ 0x140081410 (MiStoreUpdateMemoryConditions.c)
 *     MiWakeModifiedPageWriter @ 0x140081C4C (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x140081CA4 (MiCanFlushMakeProgress.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 */

__int64 MiFlushAllHintedStorePages()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v1; // ebx
  unsigned int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rsi

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  if ( !dword_1403CE3B8 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v2 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18LL);
  v3 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_1403CE3B0, 2u);
  v4 = 5LL * (unsigned int)dword_1403CE3B4;
  while ( *(&MiSystemPartition + v4 + 344) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress(&MiSystemPartition, 1LL) )
    {
      MiWakeModifiedPageWriter(&MiSystemPartition, -1LL);
      MiStoreUpdateMemoryConditions(&MiSystemPartition);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v3) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v1 = 1;
LABEL_8:
  _InterlockedOr(&dword_1403CE3B0, 1u);
  _InterlockedExchangeAdd(&dword_1403CE3B0, 0xFFFFFFFE);
  KeSetEvent(&stru_1403CE2A0, 0, 0);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v2);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return v1;
}
