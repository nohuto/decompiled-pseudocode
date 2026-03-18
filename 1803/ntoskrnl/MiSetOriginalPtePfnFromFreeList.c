/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x140265490
 * Callers:
 *     MiSwapStackPageNoDpc @ 0x140002BDC (MiSwapStackPageNoDpc.c)
 *     MiLargeFreePageToMdl @ 0x140002D74 (MiLargeFreePageToMdl.c)
 *     MiTradeTransitionPage @ 0x140002F48 (MiTradeTransitionPage.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiConvertContiguousPages @ 0x14004D90C (MiConvertContiguousPages.c)
 *     MiGet64KPage @ 0x140055A00 (MiGet64KPage.c)
 *     MiReplacePageTablePage @ 0x1400B97E0 (MiReplacePageTablePage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400E7480 (MiUnlinkNodeLargePageHelper.c)
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 *     MiFreeLargePageMemory @ 0x1401363B0 (MiFreeLargePageMemory.c)
 *     MiFindLargeNodePage @ 0x140254588 (MiFindLargeNodePage.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiSetFreshPfnFromFreeList @ 0x140265454 (MiSetFreshPfnFromFreeList.c)
 *     MiGetFastLargePage @ 0x140755A14 (MiGetFastLargePage.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
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
