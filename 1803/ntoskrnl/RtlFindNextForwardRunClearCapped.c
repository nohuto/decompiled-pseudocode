/*
 * XREFs of RtlFindNextForwardRunClearCapped @ 0x1400D7870
 * Callers:
 *     MiStoreEvictPageFile @ 0x140072CD4 (MiStoreEvictPageFile.c)
 *     ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x140097DDC (-StRegionFindCompact@-$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14009A524 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     HvUnCOWReconciledPages @ 0x1400B6314 (HvUnCOWReconciledPages.c)
 *     MiReplacePageOfProtoPool @ 0x1400BF848 (MiReplacePageOfProtoPool.c)
 *     RtlFindFirstRunClear @ 0x1400D17F0 (RtlFindFirstRunClear.c)
 *     HvpFindNextDirtyRun @ 0x1400D4BEC (HvpFindNextDirtyRun.c)
 *     RtlFindNextForwardRunClear @ 0x1400D5D90 (RtlFindNextForwardRunClear.c)
 *     PopGetNextTable @ 0x14014EE24 (PopGetNextTable.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402A3184 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1402A52E8 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClearCapped(__int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int i; // ebx
  unsigned int v6; // r8d
  const signed __int64 *v9; // r9
  _DWORD *v10; // rax
  _DWORD *v11; // r10
  unsigned int v12; // r9d
  unsigned int j; // ecx
  __int64 result; // rax
  _DWORD *v15; // rax

  i = a2;
  v6 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= a2 )
  {
    result = 0LL;
    *a4 = a2;
    return result;
  }
  v9 = *(const signed __int64 **)(a1 + 8);
  v10 = (_DWORD *)v9 + ((unsigned __int64)a2 >> 5);
  v11 = (_DWORD *)v9 + ((unsigned __int64)(v6 - 1) >> 5);
  if ( v10 != v11 && (*v10 | dword_1402F9540[a2 & 0x1F]) == -1 )
  {
    ++v10;
    for ( i = (a2 & 0xFFFFFFE0) + 32; v10 < v11; i += 32 )
    {
      if ( *v10 != -1 )
        break;
      ++v10;
    }
  }
  for ( ; i < v6; ++i )
  {
    if ( _bittest64(v9, i) != 1 )
      break;
  }
  v12 = 0;
  if ( v10 == v11 || (~dword_1402F9540[i & 0x1F] & *v10) != 0 )
    goto LABEL_9;
  v12 = 32 - (i & 0x1F);
  if ( v12 < a3 )
  {
    v15 = v10 + 1;
    while ( v15 < v11 )
    {
      if ( *v15 )
        break;
      ++v15;
      v12 += 32;
      if ( v12 >= a3 )
        goto LABEL_13;
    }
LABEL_9:
    for ( j = v12 + i; j < *(_DWORD *)a1; ++v12 )
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 8), j) )
        break;
      if ( v12 >= a3 )
        break;
      ++j;
    }
  }
LABEL_13:
  *a4 = i;
  if ( v12 > a3 )
    return a3;
  return v12;
}
