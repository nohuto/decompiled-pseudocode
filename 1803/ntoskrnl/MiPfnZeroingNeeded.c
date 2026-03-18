/*
 * XREFs of MiPfnZeroingNeeded @ 0x140052058
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiConvertContiguousPages @ 0x14004D90C (MiConvertContiguousPages.c)
 *     MiAllocateMdlPagesByLists @ 0x14005105C (MiAllocateMdlPagesByLists.c)
 *     MiInitializeMdlBatchPages @ 0x140051D48 (MiInitializeMdlBatchPages.c)
 *     MiGet64KPage @ 0x140055A00 (MiGet64KPage.c)
 *     MiAddMdlPageToTradeBlock @ 0x1400BFF90 (MiAddMdlPageToTradeBlock.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 *     MiGetFastLargePage @ 0x140755A14 (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPfnZeroingNeeded(__int64 a1, int a2)
{
  int v2; // ecx
  _BOOL8 result; // rax

  result = 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x3E0LL) == 0 )
  {
    v2 = *(unsigned __int8 *)(a1 + 34) >> 6;
    if ( v2 == a2 || ((unsigned __int8)((1 << v2) | (1 << a2)) & (unsigned __int8)byte_1403CB750) == 0 )
      return 0;
  }
  return result;
}
