/*
 * XREFs of ExQueueWorkItemToPartition @ 0x14008F67C
 * Callers:
 *     CcLazyWriteScan @ 0x140042058 (CcLazyWriteScan.c)
 *     CcPostWorkQueue @ 0x1400428A8 (CcPostWorkQueue.c)
 *     CcWriteBehind @ 0x140042EF0 (CcWriteBehind.c)
 *     CcWorkerThread @ 0x140043080 (CcWorkerThread.c)
 *     MmInSwapWorkingSet @ 0x14007F098 (MmInSwapWorkingSet.c)
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 *     MiScanPagefiles @ 0x140080B38 (MiScanPagefiles.c)
 *     MiCheckZeroFreeRebalance @ 0x140121EB0 (MiCheckZeroFreeRebalance.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x140123010 (MiQueueLargeFreeZeroRebuild.c)
 *     CcPostWorkQueueAsyncRead @ 0x1401394C4 (CcPostWorkQueueAsyncRead.c)
 *     CcReEngageWorkerThreads @ 0x14014CBA0 (CcReEngageWorkerThreads.c)
 *     MiWakeLargePageRebuild @ 0x140155D70 (MiWakeLargePageRebuild.c)
 *     CcAsyncReadWorker @ 0x140178110 (CcAsyncReadWorker.c)
 *     MiInSwapStore @ 0x14052C4A8 (MiInSwapStore.c)
 *     MiContractWsSwapPageFile @ 0x14052C90C (MiContractWsSwapPageFile.c)
 *     MmScrubMemory @ 0x1407583E4 (MmScrubMemory.c)
 * Callees:
 *     ExpTypeToPriority @ 0x14008FAA8 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x14008FAC8 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x140125F10 (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
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
