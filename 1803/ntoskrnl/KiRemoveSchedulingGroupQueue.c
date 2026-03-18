/*
 * XREFs of KiRemoveSchedulingGroupQueue @ 0x1400A9260
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x1400A8024 (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x1400A83C8 (KiResetScb.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400A91B0 (KiRemoveThreadFromScbQueue.c)
 *     KiResortScbQueue @ 0x1400A9530 (KiResortScbQueue.c)
 *     KiComputeGroupSchedulingRank @ 0x1400B1940 (KiComputeGroupSchedulingRank.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400EABEC (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiRemoveSchedulingGroupQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax

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
    if ( !*v5 || (*(_BYTE *)(a2 + 112) & 1) == 0 )
      break;
    result = *(_QWORD *)(a2 + 392);
    if ( (*(_BYTE *)(a2 + 400) & 1) == 0 )
      goto LABEL_10;
    if ( result )
    {
      result ^= a2 + 392;
LABEL_10:
      if ( result )
        return result;
    }
  }
  while ( !*(_WORD *)(a2 + 114) );
  return result;
}
