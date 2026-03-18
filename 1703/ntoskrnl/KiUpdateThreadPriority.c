/*
 * XREFs of KiUpdateThreadPriority @ 0x1401147E0
 * Callers:
 *     KiSetPriorityBoost @ 0x14001ACCC (KiSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x140042AF0 (KiSetPriorityThread.c)
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x14006515C (KiApplyForegroundBoostThread.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeStartThread @ 0x1401121B8 (KeStartThread.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KeTransitionProcessorParkState @ 0x14020739C (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x14041193C (KiCompleteKernelInit.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 */

void __fastcall KiUpdateThreadPriority(struct _KPRCB *a1, __int64 a2, char a3, char a4)
{
  struct _KPRCB *CurrentPrcb; // rcx
  char v7; // bl
  struct _SINGLE_LIST_ENTRY *v9; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = a3;
  if ( a3 > *(char *)(a2 + 195) )
  {
    if ( *(_BYTE *)(a2 + 793) )
    {
      v9 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
      if ( v9->Next == (struct _SINGLE_LIST_ENTRY *)1 )
      {
        p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
        if ( CurrentPrcb != (struct _KPRCB *)-26040LL )
        {
          v9->Next = p_AbPropagateBoostsList->Next;
          p_AbPropagateBoostsList->Next = v9;
          _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
          KiAbQueueAutoBoostDpc(CurrentPrcb);
        }
      }
    }
  }
  *(_BYTE *)(a2 + 195) = v7;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
    {
      if ( KiIsThreadRankNonZero(a2, a1) )
        v7 = 1;
      else
        v7 = *(_BYTE *)(a2 + 195);
    }
    *a1->PriorityState = v7;
  }
}
