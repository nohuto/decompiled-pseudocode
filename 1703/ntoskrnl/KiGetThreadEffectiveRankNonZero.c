/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x140113960
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140042440 (KiGroupSchedulingQuantumEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140043F10 (KiTransitionSchedulingGroupGeneration.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400E1C90 (KiDirectSwitchThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400E2590 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiSelectReadyThread @ 0x1400EC0C0 (KiSelectReadyThread.c)
 *     KiSelectReadyThreadEx @ 0x1400ECE00 (KiSelectReadyThreadEx.c)
 *     KeAccumulateTicks @ 0x1400F6700 (KeAccumulateTicks.c)
 *     KiChooseLowestRankedThread @ 0x140112D54 (KiChooseLowestRankedThread.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1401136E0 (KiDeferGroupSchedulingPreemption.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14011F5AC (KiMoveScbThreadsToNewReadylist.c)
 *     KiAddThreadToReadyQueue @ 0x140203C24 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadEffectiveRankNonZero(__int64 a1, __int64 a2, __int64 a3, char a4, bool *a5)
{
  __int64 v5; // r11
  bool v6; // bl
  __int64 result; // rax
  int v8; // edi
  __int64 v9; // r9

  v5 = a2;
  v6 = a5 && *(_QWORD *)(a2 + 120);
  result = 0LL;
  v8 = 0;
  if ( *(char *)(a1 + 195) < 16
    && (*(_DWORD *)(a1 + 120) & 0x100) == 0
    && (!a4 || !*(_DWORD *)(a1 + 484) && *(_BYTE *)(a1 + 390) != 1) )
  {
    v9 = a2;
    do
    {
      if ( (*(_BYTE *)(v9 + 112) & 2) != 0 )
      {
        result = 0xFFFFFFFFLL;
        goto LABEL_11;
      }
      v9 = *(_QWORD *)(v9 + 408);
    }
    while ( v9 );
    do
    {
      result = (unsigned int)(*(_DWORD *)(v5 + 116) + result);
      if ( v6 )
      {
        v8 += **(_DWORD **)(v5 + 120);
      }
      else if ( (_DWORD)result )
      {
        break;
      }
      v5 = *(_QWORD *)(v5 + 408);
    }
    while ( v5 );
  }
LABEL_11:
  if ( a5 )
    *a5 = v8 != 0;
  return result;
}
