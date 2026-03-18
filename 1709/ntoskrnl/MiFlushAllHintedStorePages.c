/*
 * XREFs of MiFlushAllHintedStorePages @ 0x1402258B8
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x1406EAB14 (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x14000851C (MiStoreUpdateMemoryConditions.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     MiCanFlushMakeProgress @ 0x140224D4C (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x140227290 (MiWakeModifiedPageWriter.c)
 */

__int64 __fastcall MiFlushAllHintedStorePages(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ebx
  int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // rsi
  _SINGLE_LIST_ENTRY *v10; // r8
  __int64 v11; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  if ( !dword_14038A538 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v7 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18, a3, a4);
  v8 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_14038A530, 2u);
  v9 = 5LL * (unsigned int)dword_14038A534;
  while ( *(&MiSystemPartition + v9 + 336) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress((__int64)&MiSystemPartition, 1) )
    {
      MiWakeModifiedPageWriter(&MiSystemPartition, -1LL);
      MiStoreUpdateMemoryConditions((__int64)&MiSystemPartition);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v8) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v5 = 1;
LABEL_8:
  _InterlockedOr(&dword_14038A530, 1u);
  _InterlockedExchangeAdd(&dword_14038A530, 0xFFFFFFFE);
  KeSetEvent(&stru_14038A420, 0, 0);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v7, v10, v11);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v5;
}
