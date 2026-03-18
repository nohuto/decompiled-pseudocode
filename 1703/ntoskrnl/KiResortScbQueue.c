/*
 * XREFs of KiResortScbQueue @ 0x140114D8C
 * Callers:
 *     KiComputeGroupSchedulingRank @ 0x14001C768 (KiComputeGroupSchedulingRank.c)
 *     KeSetSchedulingGroupRankBias @ 0x14001D2E4 (KeSetSchedulingGroupRankBias.c)
 *     KiRecomputeGroupSchedulingRank @ 0x14002A620 (KiRecomputeGroupSchedulingRank.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x140113CDC (KiInsertNonMaxOverQuotaScb.c)
 *     KiRemoveThreadFromScbQueue @ 0x140114C6C (KiRemoveThreadFromScbQueue.c)
 * Callees:
 *     KiInsertSchedulingGroupQueue @ 0x140113D3C (KiInsertSchedulingGroupQueue.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140114D04 (KiRemoveSchedulingGroupQueue.c)
 */

void __fastcall KiResortScbQueue(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v6; // rcx
  __int64 j; // rcx
  unsigned __int64 v8; // r8
  __int64 m; // r8
  int v10; // eax
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // cx
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // dx
  int v19; // r8d
  int v20; // eax
  _QWORD *k; // rax
  unsigned __int64 i; // rax

  v3 = (unsigned __int64 *)(a2 + 88);
  if ( !a3 )
  {
    v6 = *v3;
    if ( *v3 )
    {
      for ( i = *(_QWORD *)(v6 + 8); i; i = *(_QWORD *)(i + 8) )
        v6 = i;
    }
    else
    {
      for ( j = *(_QWORD *)(a2 + 104); ; j = *(_QWORD *)(v6 + 16) )
      {
        v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(unsigned __int64 **)(v6 + 8) == v3 )
          break;
        v3 = (unsigned __int64 *)v6;
      }
    }
    if ( !v6 )
      return;
    v15 = *(_DWORD *)(a2 + 116);
    v16 = v15 - *(_DWORD *)(v6 + 28);
    if ( v15 != *(_DWORD *)(v6 + 28) )
      goto LABEL_25;
    v17 = *(_WORD *)(a2 + 114);
    if ( v17 )
    {
      v18 = *(_WORD *)(v6 + 26);
      _BitScanReverse((unsigned int *)&v19, v17);
      v20 = 0;
      if ( v18 )
        _BitScanReverse((unsigned int *)&v20, v18);
      v16 = v20 - v19;
LABEL_25:
      if ( v16 >= 0 )
        return;
      goto LABEL_17;
    }
    if ( v15 )
    {
      v16 = 1;
      goto LABEL_25;
    }
    if ( *(_QWORD *)a2 > *(_QWORD *)(v6 - 88) )
      return;
LABEL_17:
    KiRemoveSchedulingGroupQueue(a1, a2, 0);
    KiInsertSchedulingGroupQueue(a1, a2, 0);
    return;
  }
  v8 = *(_QWORD *)(a2 + 96);
  if ( v8 )
  {
    for ( k = *(_QWORD **)v8; k; k = (_QWORD *)*k )
      v8 = (unsigned __int64)k;
  }
  else
  {
    for ( m = *(_QWORD *)(a2 + 104); ; m = *(_QWORD *)(v8 + 16) )
    {
      v8 = m & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 || *(unsigned __int64 **)v8 == v3 )
        break;
      v3 = (unsigned __int64 *)v8;
    }
  }
  if ( v8 )
  {
    v10 = *(_DWORD *)(a2 + 116) - *(_DWORD *)(v8 + 28);
    if ( !v10 )
    {
      v11 = *(_WORD *)(a2 + 114);
      if ( v11 )
      {
        v12 = *(_WORD *)(v8 + 26);
        _BitScanReverse((unsigned int *)&v13, v11);
        v14 = 0;
        if ( v12 )
          _BitScanReverse((unsigned int *)&v14, v12);
        v10 = v14 - v13;
      }
      else
      {
        if ( !*(_DWORD *)(a2 + 116) )
        {
          if ( *(_QWORD *)a2 <= *(_QWORD *)(v8 - 88) )
            return;
          goto LABEL_17;
        }
        v10 = 1;
      }
    }
    if ( v10 <= 0 )
      return;
    goto LABEL_17;
  }
}
