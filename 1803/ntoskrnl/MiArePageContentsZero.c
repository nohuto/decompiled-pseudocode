/*
 * XREFs of MiArePageContentsZero @ 0x140264DE4
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140029290 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiGet64KPage @ 0x140055A00 (MiGet64KPage.c)
 *     MiCreateSystemPageTable @ 0x140070FD0 (MiCreateSystemPageTable.c)
 *     MiCreateSharedZeroPages @ 0x1400A2810 (MiCreateSharedZeroPages.c)
 *     MiGetPageSlist @ 0x1400AA3F0 (MiGetPageSlist.c)
 *     MiSlistGetFreePage @ 0x1400B82CC (MiSlistGetFreePage.c)
 *     MiReplenishPageSlist @ 0x1400D5110 (MiReplenishPageSlist.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400E7480 (MiUnlinkNodeLargePageHelper.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiLargePageFreeToZero @ 0x1401235B0 (MiLargePageFreeToZero.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     KeCheckForZeroPage @ 0x1401AE900 (KeCheckForZeroPage.c)
 *     MiPageNotZero @ 0x140265130 (MiPageNotZero.c)
 */

__int64 __fastcall MiArePageContentsZero(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  ULONG_PTR v5; // rbx
  unsigned __int8 CurrentIrql; // r14
  _BYTE *v7; // rdi
  _QWORD *v8; // rbp
  __int64 result; // rax

  v4 = a2;
  v5 = BugCheckParameter2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KeGetCurrentPrcb()->HyperPte && a2 )
  {
    v7 = (_BYTE *)(48 * BugCheckParameter2 - 0x58000000000LL + 35);
    do
    {
      if ( (*v7 & 0x40) == 0 )
      {
        v8 = (_QWORD *)MiMapPageInHyperSpaceWorker(v5, 0LL, 0x20000000, a4);
        if ( KeCheckForZeroPage(v8) )
          MiPageNotZero((ULONG_PTR)v8, v5);
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v8, 0x11u, 0);
      }
      v7 += 48;
      ++v5;
      --v4;
    }
    while ( v4 );
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
