/*
 * XREFs of KiUpdateThreadPriority @ 0x14008C870
 * Callers:
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400837A0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x14008C460 (KiSetPriorityThread.c)
 *     NtYieldExecution @ 0x14008D810 (NtYieldExecution.c)
 *     KiDirectSwitchThread @ 0x14008DBB0 (KiDirectSwitchThread.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiQuantumEnd @ 0x140090E30 (KiQuantumEnd.c)
 *     KeStartThread @ 0x1400A6890 (KeStartThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400AAB38 (KiApplyForegroundBoostThread.c)
 *     KiSetPriorityBoost @ 0x1400D1540 (KiSetPriorityBoost.c)
 *     KeTransitionProcessorParkState @ 0x14020DD2C (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x14042615C (KiCompleteKernelInit.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 */

void __fastcall KiUpdateThreadPriority(__int64 a1, __int64 a2, char a3, char a4)
{
  struct _KPRCB *CurrentPrcb; // rcx
  char v7; // di
  _DWORD *v9; // rcx
  struct _SINGLE_LIST_ENTRY *v10; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = a3;
  if ( a3 > *(char *)(a2 + 195) )
  {
    if ( *(_BYTE *)(a2 + 793) )
    {
      v10 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
      if ( v10->Next == (struct _SINGLE_LIST_ENTRY *)1 )
      {
        p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
        if ( CurrentPrcb != (struct _KPRCB *)-25720LL )
        {
          v10->Next = p_AbPropagateBoostsList->Next;
          p_AbPropagateBoostsList->Next = v10;
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
      if ( (unsigned __int8)KiIsThreadRankNonZero(a2, a1) )
        v7 = 1;
      else
        v7 = *(_BYTE *)(a2 + 195);
    }
    **(_BYTE **)(a1 + 56) = v7;
    v9 = *(_DWORD **)(a1 + 25016);
    if ( v9 )
      *v9 = v7;
  }
}
