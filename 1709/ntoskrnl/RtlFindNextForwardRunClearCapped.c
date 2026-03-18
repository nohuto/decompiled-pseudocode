/*
 * XREFs of RtlFindNextForwardRunClearCapped @ 0x1400C1A50
 * Callers:
 *     RtlFindFirstRunClear @ 0x14000C420 (RtlFindFirstRunClear.c)
 *     RtlFindNextForwardRunClear @ 0x1400C1920 (RtlFindNextForwardRunClear.c)
 *     HvpFindNextDirtyRun @ 0x1400D5174 (HvpFindNextDirtyRun.c)
 *     MiStoreEvictThread @ 0x1401DF9C0 (MiStoreEvictThread.c)
 *     PopGetNextTable @ 0x140241D08 (PopGetNextTable.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140268DA4 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402691F0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14026D694 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x140270D24 (-StRegionFindCompact@-$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClearCapped(__int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int i; // r10d
  unsigned int v6; // r8d
  const signed __int64 *v9; // r11
  _DWORD *v10; // rax
  _DWORD *v11; // r9
  unsigned int v12; // r11d
  _DWORD *v13; // rax
  unsigned int j; // ecx

  i = a2;
  v6 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= a2 )
  {
    *a4 = a2;
    return 0LL;
  }
  v9 = *(const signed __int64 **)(a1 + 8);
  v10 = (_DWORD *)v9 + ((unsigned __int64)a2 >> 5);
  v11 = (_DWORD *)v9 + ((unsigned __int64)(v6 - 1) >> 5);
  if ( v10 != v11 && (*v10 | dword_1402C05D0[a2 & 0x1F]) == -1 )
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
  if ( v10 == v11 || (~dword_1402C05D0[i & 0x1F] & *v10) != 0 )
    goto LABEL_17;
  v12 = 32 - (i & 0x1F);
  if ( v12 < a3 )
  {
    v13 = v10 + 1;
    while ( v13 < v11 )
    {
      if ( *v13 )
        break;
      ++v13;
      v12 += 32;
      if ( v12 >= a3 )
        goto LABEL_21;
    }
LABEL_17:
    for ( j = v12 + i; j < *(_DWORD *)a1; ++v12 )
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 8), j) )
        break;
      if ( v12 >= a3 )
        break;
      ++j;
    }
  }
LABEL_21:
  *a4 = i;
  if ( v12 > a3 )
    return a3;
  return v12;
}
