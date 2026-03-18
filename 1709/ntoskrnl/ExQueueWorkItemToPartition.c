/*
 * XREFs of ExQueueWorkItemToPartition @ 0x140023404
 * Callers:
 *     MmInSwapWorkingSet @ 0x140003E0C (MmInSwapWorkingSet.c)
 *     CcPostWorkQueueAsyncRead @ 0x140020B14 (CcPostWorkQueueAsyncRead.c)
 *     CcPostWorkQueue @ 0x140022504 (CcPostWorkQueue.c)
 *     CcWriteBehind @ 0x140022B24 (CcWriteBehind.c)
 *     CcWorkerThread @ 0x140022CB0 (CcWorkerThread.c)
 *     MiCheckZeroFreeRebalance @ 0x1400C6F10 (MiCheckZeroFreeRebalance.c)
 *     MiWorkingSetManager @ 0x1400F0224 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x1400F0444 (MiScanPagefiles.c)
 *     CcReEngageWorkerThreads @ 0x140131790 (CcReEngageWorkerThreads.c)
 *     CcAsyncReadWorker @ 0x1401481D0 (CcAsyncReadWorker.c)
 *     MiWakeLargePageRebuild @ 0x14015124C (MiWakeLargePageRebuild.c)
 *     CcIncrementWriteBehindPriority @ 0x1401E032C (CcIncrementWriteBehindPriority.c)
 *     MiInSwapStore @ 0x1404443BC (MiInSwapStore.c)
 *     MiContractWsSwapPageFile @ 0x140444648 (MiContractWsSwapPageFile.c)
 *     MmScrubMemory @ 0x1406EEF04 (MmScrubMemory.c)
 * Callees:
 *     ExpTypeToPriority @ 0x1400234C8 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x140061500 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x140062344 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemToPartition(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  ULONG_PTR BugCheckParameter4; // rbp
  int v8; // eax
  __int64 result; // rax

  v4 = a2;
  BugCheckParameter4 = a3;
  ExpValidateWorkItem(BugCheckParameter2);
  v8 = ExpTypeToPriority((unsigned int)v4);
  result = ExpQueueWorkItem(*(_QWORD *)(a4 + 16), BugCheckParameter2, v8, BugCheckParameter4, 0);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, BugCheckParameter2, v4, BugCheckParameter4);
  return result;
}
