/*
 * XREFs of MiSetPfnBlink @ 0x1400C7514
 * Callers:
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiReplenishPageSlist @ 0x1400C53D0 (MiReplenishPageSlist.c)
 *     MiReplaceTransitionPage @ 0x1400C75F8 (MiReplaceTransitionPage.c)
 *     MiLargeFreePageToMdl @ 0x14012630C (MiLargeFreePageToMdl.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MiGetEnclavePage @ 0x140229730 (MiGetEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x14022AA0C (MiUnlinkPageFromBadList.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnBlink(__int64 a1, __int64 a2, int a3)
{
  signed __int64 v5; // rdx
  __int64 v6; // r10
  signed __int64 result; // rax
  bool i; // zf
  signed __int64 v9; // rcx

  if ( a3 == 1 )
  {
    result = (a2 ^ *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(a1 + 24) ^= result;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    v6 = a2 & 0xFFFFFFFFFLL;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v6 | v5 & 0xFFFFFFF000000000uLL, v5);
    for ( i = v5 == result; !i; i = v9 == result )
    {
      v9 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 24),
                 v6 | result & 0xFFFFFFF000000000uLL,
                 result);
    }
  }
  return result;
}
