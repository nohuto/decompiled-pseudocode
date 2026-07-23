/*
 * XREFs of KiResortScbQueue @ 0x1400A9530
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x1400A8024 (KeSetSchedulingGroupRankBias.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400A8494 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400A91B0 (KiRemoveThreadFromScbQueue.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x1400A93B4 (KiInsertNonMaxOverQuotaScb.c)
 *     KiComputeGroupSchedulingRank @ 0x1400B1940 (KiComputeGroupSchedulingRank.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x1400A9260 (KiRemoveSchedulingGroupQueue.c)
 *     KiInsertSchedulingGroupQueue @ 0x1400A9414 (KiInsertSchedulingGroupQueue.c)
 */

char __fastcall KiResortScbQueue(_RTL_RB_TREE *a1, __int64 a2, char a3)
{
  unsigned __int64 *i; // rax
  unsigned __int64 v6; // rcx
  __int64 j; // rcx
  unsigned __int64 v8; // r8
  __int64 k; // r8
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // cx
  int v12; // edx
  unsigned __int64 **v13; // rdx
  int v14; // edx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // dx
  int v17; // r8d

  i = (unsigned __int64 *)(a2 + 88);
  if ( !a3 )
  {
    v6 = *i;
    if ( *i )
    {
      for ( i = *(unsigned __int64 **)(v6 + 8); i; i = (unsigned __int64 *)i[1] )
        v6 = (unsigned __int64)i;
    }
    else
    {
      for ( j = *(_QWORD *)(a2 + 104); ; j = *(_QWORD *)(v6 + 16) )
      {
        v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(unsigned __int64 **)(v6 + 8) == i )
          break;
        i = (unsigned __int64 *)v6;
      }
    }
    if ( !v6 )
      return (char)i;
    v14 = *(_DWORD *)(a2 + 116);
    LODWORD(i) = v14 - *(_DWORD *)(v6 + 28);
    if ( v14 != *(_DWORD *)(v6 + 28) )
      goto LABEL_23;
    v15 = *(_WORD *)(a2 + 114);
    if ( v15 )
    {
      v16 = *(_WORD *)(v6 + 26);
      _BitScanReverse((unsigned int *)&v17, v15);
      LODWORD(i) = 0;
      if ( v16 )
        _BitScanReverse((unsigned int *)&i, v16);
      LODWORD(i) = (_DWORD)i - v17;
LABEL_23:
      if ( (int)i >= 0 )
        return (char)i;
      goto LABEL_24;
    }
    if ( v14 )
    {
      LODWORD(i) = 1;
      goto LABEL_23;
    }
    i = *(unsigned __int64 **)(v6 - 88);
    if ( *(_QWORD *)a2 > (unsigned __int64)i )
      return (char)i;
LABEL_24:
    KiRemoveSchedulingGroupQueue(a1, a2, 0);
    LOBYTE(i) = KiInsertSchedulingGroupQueue(a1, a2, 0);
    return (char)i;
  }
  v8 = *(_QWORD *)(a2 + 96);
  if ( v8 )
  {
    v13 = *(unsigned __int64 ***)v8;
    if ( *(_QWORD *)v8 )
    {
      do
      {
        i = *v13;
        v8 = (unsigned __int64)v13;
        v13 = (unsigned __int64 **)i;
      }
      while ( i );
    }
  }
  else
  {
    for ( k = *(_QWORD *)(a2 + 104); ; k = *(_QWORD *)(v8 + 16) )
    {
      v8 = k & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 || *(unsigned __int64 **)v8 == i )
        break;
      i = (unsigned __int64 *)v8;
    }
  }
  if ( v8 )
  {
    LODWORD(i) = *(_DWORD *)(a2 + 116) - *(_DWORD *)(v8 + 28);
    if ( !(_DWORD)i )
    {
      v10 = *(_WORD *)(a2 + 114);
      if ( v10 )
      {
        v11 = *(_WORD *)(v8 + 26);
        _BitScanReverse((unsigned int *)&v12, v10);
        LODWORD(i) = 0;
        if ( v11 )
          _BitScanReverse((unsigned int *)&i, v11);
        LODWORD(i) = (_DWORD)i - v12;
      }
      else
      {
        if ( !*(_DWORD *)(a2 + 116) )
        {
          i = *(unsigned __int64 **)(v8 - 88);
          if ( *(_QWORD *)a2 <= (unsigned __int64)i )
            return (char)i;
          goto LABEL_24;
        }
        LODWORD(i) = 1;
      }
    }
    if ( (int)i <= 0 )
      return (char)i;
    goto LABEL_24;
  }
  return (char)i;
}
