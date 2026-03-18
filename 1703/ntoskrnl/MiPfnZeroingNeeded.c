/*
 * XREFs of MiPfnZeroingNeeded @ 0x14007AE20
 * Callers:
 *     MiConvertContiguousPages @ 0x14007A79C (MiConvertContiguousPages.c)
 *     MiInitializeMdlPages @ 0x14007A868 (MiInitializeMdlPages.c)
 *     MiFindPagesForMdl @ 0x14007AE64 (MiFindPagesForMdl.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiAllocateMdlPagesByLists @ 0x140133DC0 (MiAllocateMdlPagesByLists.c)
 *     MiGet64KPage @ 0x1402240A0 (MiGet64KPage.c)
 *     MiZeroAndConvertLargePage @ 0x140225624 (MiZeroAndConvertLargePage.c)
 *     MiGetFastLargePage @ 0x1406BECF0 (MiGetFastLargePage.c)
 * Callees:
 *     MiIsFreshPfnFromZeroedList @ 0x14017D250 (MiIsFreshPfnFromZeroedList.c)
 */

_BOOL8 MiPfnZeroingNeeded()
{
  int v0; // edx
  __int64 v1; // rcx
  _BOOL8 result; // rax
  int v3; // ecx

  result = 1;
  if ( (unsigned int)MiIsFreshPfnFromZeroedList() )
  {
    v3 = *(unsigned __int8 *)(v1 + 34) >> 6;
    if ( v3 == v0 || ((unsigned __int8)((1 << v3) | (1 << v0)) & (unsigned __int8)byte_14036C260) == 0 )
      return 0;
  }
  return result;
}
