/*
 * XREFs of KiRemoveSchedulingGroupQueue @ 0x140114D04
 * Callers:
 *     KiComputeGroupSchedulingRank @ 0x14001C768 (KiComputeGroupSchedulingRank.c)
 *     KeSetSchedulingGroupRankBias @ 0x14001D2E4 (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x14001D5B8 (KiResetScb.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140042440 (KiGroupSchedulingQuantumEnd.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiRemoveThreadFromScbQueue @ 0x140114C6C (KiRemoveThreadFromScbQueue.c)
 *     KiResortScbQueue @ 0x140114D8C (KiResortScbQueue.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140048460 (RtlRbRemoveNode.c)
 */

BOOLEAN __fastcall KiRemoveSchedulingGroupQueue(_RTL_RB_TREE *a1, __int64 a2, char a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  _RTL_RB_TREE *v7; // rcx
  BOOLEAN result; // al

  do
  {
    v5 = (__int64 *)(a2 + 408);
    v6 = *(_QWORD *)(a2 + 408);
    v7 = (_RTL_RB_TREE *)(v6 + 392);
    if ( !v6 )
      v7 = a1 + 1431;
    if ( a3 )
      *(_QWORD *)(a2 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 64);
    *(_BYTE *)(a2 + 112) &= ~1u;
    result = RtlRbRemoveNode(v7, (PRTL_BALANCED_NODE)(a2 + 88));
    a2 = *v5;
  }
  while ( *v5 && (*(_BYTE *)(a2 + 112) & 1) != 0 && !*(_QWORD *)(a2 + 392) && !*(_WORD *)(a2 + 114) );
  return result;
}
