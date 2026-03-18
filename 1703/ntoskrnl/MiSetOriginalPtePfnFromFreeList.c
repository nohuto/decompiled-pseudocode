/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x14017D278
 * Callers:
 *     MiReplacePageTablePage @ 0x140023E74 (MiReplacePageTablePage.c)
 *     MiLargeFreePageToMdl @ 0x140074CE4 (MiLargeFreePageToMdl.c)
 *     MiObtainTransitionPage @ 0x140074E48 (MiObtainTransitionPage.c)
 *     MiConvertContiguousPages @ 0x14007A79C (MiConvertContiguousPages.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 *     MiFreeLargePageMemory @ 0x140126770 (MiFreeLargePageMemory.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1401294A0 (MiUnlinkNodeLargePageHelper.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 *     MiFindLargeNodePage @ 0x14020EDB8 (MiFindLargeNodePage.c)
 *     MiGet64KPage @ 0x1402240A0 (MiGet64KPage.c)
 *     MiZeroAndConvertLargePage @ 0x140225624 (MiZeroAndConvertLargePage.c)
 *     MiGetFastLargePage @ 0x1406BECF0 (MiGetFastLargePage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14017D094 (MiSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiSetOriginalPtePfnFromFreeList(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdx

  if ( *a1 )
  {
    result = *a1 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    *a1 = result;
  }
  else
  {
    result = MiSwizzleInvalidPte(128LL);
    *v2 = result;
  }
  return result;
}
