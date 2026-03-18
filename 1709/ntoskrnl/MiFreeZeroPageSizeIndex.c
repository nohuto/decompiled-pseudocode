/*
 * XREFs of MiFreeZeroPageSizeIndex @ 0x1400C70F0
 * Callers:
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 *     MiFreeLargeZeroPages @ 0x1400C5300 (MiFreeLargeZeroPages.c)
 *     MiAttemptHugePageCoalesce @ 0x1400C59B0 (MiAttemptHugePageCoalesce.c)
 *     MiPfnsWorthTrying @ 0x1400C5DF0 (MiPfnsWorthTrying.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiSetPfnOwnedAndActive @ 0x1400C7EB8 (MiSetPfnOwnedAndActive.c)
 *     MiFindLargeNodePage @ 0x140216B0C (MiFindLargeNodePage.c)
 *     MiPurgeZeroList @ 0x14022A7B0 (MiPurgeZeroList.c)
 *     MiGetSinglePageToZero @ 0x14022B680 (MiGetSinglePageToZero.c)
 *     MiTransferPartitionPageRun @ 0x140238208 (MiTransferPartitionPageRun.c)
 *     MiCreatePagingFileMap @ 0x14048D708 (MiCreatePagingFileMap.c)
 *     MiGetFastLargePage @ 0x1406EBFA0 (MiGetFastLargePage.c)
 *     MiCombineAllPhysicalMemory @ 0x1406ECD38 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreeZeroPageSizeIndex(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v2 = MiLargePageContainingFrames;
  result = 0LL;
  while ( v1 != *v2 )
  {
    result = (unsigned int)(result + 1);
    ++v2;
    if ( (unsigned int)result >= 3 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
