/*
 * XREFs of MiSetPfnBlink @ 0x140075C3C
 * Callers:
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiLargeFreePageToMdl @ 0x140074CE4 (MiLargeFreePageToMdl.c)
 *     MiReplaceTransitionPage @ 0x1400750E8 (MiReplaceTransitionPage.c)
 *     MiReplenishPageSlist @ 0x1400756C0 (MiReplenishPageSlist.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140138F10 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     MiGetEnclavePage @ 0x14021C8F8 (MiGetEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x14021F3D4 (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 *     MiGet64KPage @ 0x1402240A0 (MiGet64KPage.c)
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
