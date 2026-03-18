/*
 * XREFs of MiFreeZeroPageSizeIndex @ 0x1400B6080
 * Callers:
 *     MiSetPfnOwnedAndActive @ 0x1400269E4 (MiSetPfnOwnedAndActive.c)
 *     MiAssignNonPagedPoolPtes @ 0x1400B2F20 (MiAssignNonPagedPoolPtes.c)
 *     MiAttemptHugePageCoalesce @ 0x1400B58B0 (MiAttemptHugePageCoalesce.c)
 *     MiPfnsWorthTrying @ 0x1400B6AD0 (MiPfnsWorthTrying.c)
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 *     MiPurgeZeroList @ 0x140138B04 (MiPurgeZeroList.c)
 *     MiFindLargeNodePage @ 0x14020EDB8 (MiFindLargeNodePage.c)
 *     MiTransferPartitionPageRun @ 0x14021EA0C (MiTransferPartitionPageRun.c)
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 *     MiFreeLargeZeroPages @ 0x1406BEC28 (MiFreeLargeZeroPages.c)
 *     MiGetFastLargePage @ 0x1406BECF0 (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreeZeroPageSizeIndex(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v2 = &MiLargePageContainingFrames;
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
