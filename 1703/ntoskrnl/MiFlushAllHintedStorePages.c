/*
 * XREFs of MiFlushAllHintedStorePages @ 0x140004DF0
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x14041FD88 (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x140029F68 (MiStoreUpdateMemoryConditions.c)
 *     MiCanFlushMakeProgress @ 0x14003B4B4 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x14003BB18 (MiWakeModifiedPageWriter.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 MiFlushAllHintedStorePages()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v1; // ebx
  unsigned int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 i; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  if ( !dword_1403806A8 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v2 = KeSetActualBasePriorityThread(CurrentThread, 18LL);
  v3 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_1403806A0, 2u);
  v4 = (unsigned int)dword_1403806A4;
  for ( i = 5LL * (unsigned int)dword_1403806A4; *(&MiSystemPartition + i + 320); i = 5 * v4 )
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(&MiSystemPartition, 1LL) )
      goto LABEL_8;
    MiWakeModifiedPageWriter(&MiSystemPartition, -1LL);
    MiStoreUpdateMemoryConditions(&MiSystemPartition);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v3) > 0x2FAF080 )
      goto LABEL_8;
  }
  v1 = 1;
LABEL_8:
  _InterlockedOr(&dword_1403806A0, 1u);
  _InterlockedExchangeAdd(&dword_1403806A0, 0xFFFFFFFE);
  KeSetEvent(&Event, 0, 0);
  KeSetActualBasePriorityThread(CurrentThread, v2);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return v1;
}
