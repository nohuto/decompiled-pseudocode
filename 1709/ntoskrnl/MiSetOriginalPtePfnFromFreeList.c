/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x14022A99C
 * Callers:
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 *     MiGet64KPage @ 0x1400C4A90 (MiGet64KPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400C68C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiConvertContiguousPages @ 0x1400CA4C4 (MiConvertContiguousPages.c)
 *     MiTradeTransitionPage @ 0x1400CB06C (MiTradeTransitionPage.c)
 *     MiZeroAndConvertLargePage @ 0x1400CFECC (MiZeroAndConvertLargePage.c)
 *     MiReplacePageTablePage @ 0x1400D0B4C (MiReplacePageTablePage.c)
 *     MiFreeLargePageMemory @ 0x1400F43C0 (MiFreeLargePageMemory.c)
 *     MiLargeFreePageToMdl @ 0x14012630C (MiLargeFreePageToMdl.c)
 *     MiFindLargeNodePage @ 0x140216B0C (MiFindLargeNodePage.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MiSetFreshPfnFromFreeList @ 0x14022A964 (MiSetFreshPfnFromFreeList.c)
 *     MiGetFastLargePage @ 0x1406EBFA0 (MiGetFastLargePage.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
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
    result = MiMakeDemandZeroPte(4);
    *v2 = result;
  }
  return result;
}
