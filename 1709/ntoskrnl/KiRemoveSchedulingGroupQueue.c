/*
 * XREFs of KiRemoveSchedulingGroupQueue @ 0x1400D2A58
 * Callers:
 *     KiSwapThread @ 0x14006E1D0 (KiSwapThread.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14008ED50 (KiGroupSchedulingQuantumEnd.c)
 *     KiComputeGroupSchedulingRank @ 0x1400D1370 (KiComputeGroupSchedulingRank.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400D208C (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x1400D23B8 (KiResetScb.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400D29C0 (KiRemoveThreadFromScbQueue.c)
 *     KiResortScbQueue @ 0x1400D2CD0 (KiResortScbQueue.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 */

unsigned __int64 __fastcall KiRemoveSchedulingGroupQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 result; // rax

  do
  {
    v5 = (__int64 *)(a2 + 408);
    v6 = *(_QWORD *)(a2 + 408);
    v7 = v6 + 392;
    if ( !v6 )
      v7 = a1 + 22896;
    if ( a3 )
      *(_QWORD *)(a2 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 64);
    *(_BYTE *)(a2 + 112) &= ~1u;
    result = RtlRbRemoveNode(v7, a2 + 88);
    a2 = *v5;
  }
  while ( *v5 && (*(_BYTE *)(a2 + 112) & 1) != 0 && !*(_QWORD *)(a2 + 392) && !*(_WORD *)(a2 + 114) );
  return result;
}
