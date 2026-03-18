/*
 * XREFs of MiFreeZeroPageSizeIndex @ 0x140121FC0
 * Callers:
 *     MiFreeLargeZeroPages @ 0x140049444 (MiFreeLargeZeroPages.c)
 *     MiSetPfnOwnedAndActive @ 0x1400C2954 (MiSetPfnOwnedAndActive.c)
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiPfnsWorthTrying @ 0x140124360 (MiPfnsWorthTrying.c)
 *     MiPurgeZeroList @ 0x14014F71C (MiPurgeZeroList.c)
 *     MiFindLargeNodePage @ 0x140254588 (MiFindLargeNodePage.c)
 *     MiGetSinglePageToZero @ 0x140266CF4 (MiGetSinglePageToZero.c)
 *     MiTransferPartitionPageRun @ 0x14026FE30 (MiTransferPartitionPageRun.c)
 *     MiCreatePagingFileMap @ 0x1404BC908 (MiCreatePagingFileMap.c)
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 *     MiGetFastLargePage @ 0x140755A14 (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreeZeroPageSizeIndex(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v2 = MiLargePageContainingFrames;
  v3 = 0;
  while ( v1 != *v2 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 3 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}
