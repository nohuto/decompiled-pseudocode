/*
 * XREFs of KiCheckForEffectivePriorityChange @ 0x14001D530
 * Callers:
 *     KiComputeGroupSchedulingRank @ 0x14001C768 (KiComputeGroupSchedulingRank.c)
 *     KiUpdateCpuTargetByWeight @ 0x14001D010 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x14001D164 (KiUpdateCpuTargetByRate.c)
 *     KeSetSchedulingGroupRankBias @ 0x14001D2E4 (KeSetSchedulingGroupRankBias.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 */

void __fastcall KiCheckForEffectivePriorityChange(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  char IsThreadRankNonZero; // al
  char v6; // cl

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v2 + 104);
  if ( v4 )
  {
    for ( v4 += *(unsigned int *)(a1 + 216); v4; v4 = *(_QWORD *)(v4 + 408) )
    {
      if ( v4 == a2 )
        goto LABEL_9;
    }
  }
  if ( v4 == a2 )
  {
LABEL_9:
    if ( (*(_BYTE *)(v2 + 2) & 4) != 0 )
    {
      IsThreadRankNonZero = KiIsThreadRankNonZero(v2, a1);
      v6 = 1;
      if ( !IsThreadRankNonZero )
        v6 = *(_BYTE *)(v2 + 195);
    }
    else
    {
      v6 = *(_BYTE *)(v2 + 195);
    }
    **(_BYTE **)(a1 + 56) = v6;
  }
}
