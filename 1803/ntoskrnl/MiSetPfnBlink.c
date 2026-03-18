/*
 * XREFs of MiSetPfnBlink @ 0x140003784
 * Callers:
 *     MiLargeFreePageToMdl @ 0x140002D74 (MiLargeFreePageToMdl.c)
 *     MiReplaceTransitionPage @ 0x1400031F8 (MiReplaceTransitionPage.c)
 *     MiGetPageChain @ 0x140017C10 (MiGetPageChain.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiGetEnclavePage @ 0x140264534 (MiGetEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x140265518 (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnBlink(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  signed __int64 v5; // rdx
  unsigned __int64 result; // rax
  bool i; // zf
  unsigned __int64 v8; // rcx

  v3 = a2 & 0xFFFFFFFFFLL;
  if ( a3 == 1 )
  {
    result = v3 | *(_QWORD *)(a1 + 24) & 0xFFFFFFF000000000uLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3 | v5 & 0xFFFFFFF000000000uLL, v5);
    for ( i = v5 == result; !i; i = v8 == result )
    {
      v8 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 24),
                 v3 | result & 0xFFFFFFF000000000uLL,
                 result);
    }
  }
  return result;
}
