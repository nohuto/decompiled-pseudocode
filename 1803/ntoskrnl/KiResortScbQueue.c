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

unsigned __int64 __fastcall KiResortScbQueue(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rcx
  __int64 i; // rcx
  unsigned __int64 v8; // r8
  __int64 j; // r8
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // cx
  int v12; // edx
  int v13; // eax
  unsigned __int64 *v14; // rdx
  int v15; // edx
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // dx
  int v18; // r8d
  int v19; // eax

  result = a2 + 88;
  if ( !a3 )
  {
    v6 = *(_QWORD *)result;
    if ( *(_QWORD *)result )
    {
      for ( result = *(_QWORD *)(v6 + 8); result; result = *(_QWORD *)(result + 8) )
        v6 = result;
    }
    else
    {
      for ( i = *(_QWORD *)(a2 + 104); ; i = *(_QWORD *)(v6 + 16) )
      {
        v6 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)(v6 + 8) == result )
          break;
        result = v6;
      }
    }
    if ( !v6 )
      return result;
    v15 = *(_DWORD *)(a2 + 116);
    result = (unsigned int)(v15 - *(_DWORD *)(v6 + 28));
    if ( v15 != *(_DWORD *)(v6 + 28) )
      goto LABEL_23;
    v16 = *(_WORD *)(a2 + 114);
    if ( v16 )
    {
      v17 = *(_WORD *)(v6 + 26);
      _BitScanReverse((unsigned int *)&v18, v16);
      v19 = 0;
      if ( v17 )
        _BitScanReverse((unsigned int *)&v19, v17);
      result = (unsigned int)(v19 - v18);
LABEL_23:
      if ( (result & 0x80000000) == 0LL )
        return result;
      goto LABEL_24;
    }
    if ( v15 )
    {
      result = 1LL;
      goto LABEL_23;
    }
    result = *(_QWORD *)(v6 - 88);
    if ( *(_QWORD *)a2 > result )
      return result;
LABEL_24:
    KiRemoveSchedulingGroupQueue(a1, a2, 0);
    return KiInsertSchedulingGroupQueue(a1, a2, 0LL);
  }
  v8 = *(_QWORD *)(a2 + 96);
  if ( v8 )
  {
    v14 = *(unsigned __int64 **)v8;
    if ( *(_QWORD *)v8 )
    {
      do
      {
        result = *v14;
        v8 = (unsigned __int64)v14;
        v14 = (unsigned __int64 *)result;
      }
      while ( result );
    }
  }
  else
  {
    for ( j = *(_QWORD *)(a2 + 104); ; j = *(_QWORD *)(v8 + 16) )
    {
      v8 = j & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 || *(_QWORD *)v8 == result )
        break;
      result = v8;
    }
  }
  if ( v8 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 116) - *(_DWORD *)(v8 + 28));
    if ( !(_DWORD)result )
    {
      v10 = *(_WORD *)(a2 + 114);
      if ( v10 )
      {
        v11 = *(_WORD *)(v8 + 26);
        _BitScanReverse((unsigned int *)&v12, v10);
        v13 = 0;
        if ( v11 )
          _BitScanReverse((unsigned int *)&v13, v11);
        result = (unsigned int)(v13 - v12);
      }
      else
      {
        if ( !*(_DWORD *)(a2 + 116) )
        {
          result = *(_QWORD *)(v8 - 88);
          if ( *(_QWORD *)a2 <= result )
            return result;
          goto LABEL_24;
        }
        result = 1LL;
      }
    }
    if ( (int)result <= 0 )
      return result;
    goto LABEL_24;
  }
  return result;
}
