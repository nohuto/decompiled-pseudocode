/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x1400ABA00
 * Callers:
 *     KiMoveScbThreadsToNewReadylist @ 0x14000CFA8 (KiMoveScbThreadsToNewReadylist.c)
 *     KiSelectReadyThread @ 0x14006F300 (KiSelectReadyThread.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400763C0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14008AB70 (KiTransitionSchedulingGroupGeneration.c)
 *     KiSelectReadyThreadEx @ 0x14008B420 (KiSelectReadyThreadEx.c)
 *     KiDirectSwitchThread @ 0x14008DBB0 (KiDirectSwitchThread.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14008ED50 (KiGroupSchedulingQuantumEnd.c)
 *     KeAccumulateTicks @ 0x1400987C0 (KeAccumulateTicks.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400AA5D0 (KiDeferGroupSchedulingPreemption.c)
 *     KiChooseLowestRankedThread @ 0x1400AB7D4 (KiChooseLowestRankedThread.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiAddThreadToReadyQueue @ 0x14020A110 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadEffectiveRankNonZero(__int64 a1, __int64 a2, __int64 a3, char a4, bool *a5)
{
  __int64 v5; // r8
  bool v6; // r11
  __int64 result; // rax
  int v8; // ebx

  v5 = a2;
  v6 = a5 && *(_QWORD *)(a2 + 120);
  result = 0LL;
  v8 = 0;
  if ( *(char *)(a1 + 195) < 16
    && (*(_DWORD *)(a1 + 120) & 0x200) == 0
    && (!a4 || !*(_DWORD *)(a1 + 484) && *(_BYTE *)(a1 + 390) != 1) )
  {
    do
    {
      if ( (*(_BYTE *)(a2 + 112) & 2) != 0 )
      {
        result = 0xFFFFFFFFLL;
        goto LABEL_11;
      }
      a2 = *(_QWORD *)(a2 + 408);
    }
    while ( a2 );
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
