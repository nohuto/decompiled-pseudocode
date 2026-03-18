/*
 * XREFs of ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140059DEC
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140058180 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14001F170 (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x14003196C (-StRegionFindCompact@-$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x14003ADB4 (-StDmReuseCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@.c)
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140059EF4 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(
        __int64 a1,
        unsigned int a2,
        int a3,
        _QWORD *a4,
        int *a5)
{
  __int64 v7; // rdi
  int v9; // edx
  __int64 result; // rax
  _WORD *Compact; // rax
  __int64 v12; // rax

  v7 = a1 + 16 * (a2 + 77LL);
  if ( *(_DWORD *)v7 != -1 && (unsigned int)(a3 + *(_DWORD *)(v7 + 4)) <= *(_DWORD *)(a1 + 816) )
    goto LABEL_3;
  if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
    goto LABEL_10;
  if ( *(_DWORD *)v7 == -1
    || (int)ST_STORE<SM_TRAITS>::StDmCombineRegion(a1) < 0
    || (int)ST_STORE<SM_TRAITS>::StDmReuseCurrentRegion(a1, (unsigned int *)v7) < 0 )
  {
    if ( (int)ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, a2, 0xFFFFFFFF) < 0 )
      __int2c();
LABEL_10:
    while ( 1 )
    {
      Compact = ST_STORE<SM_TRAITS>::StRegionFindCompact(a1, a2);
      if ( !Compact )
        return 3221225599LL;
      v12 = ((__int64)Compact - *(_QWORD *)(a1 + 1016)) >> 1;
      if ( (_DWORD)v12 == -1 )
        return 3221225599LL;
      result = ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, a2, v12);
      if ( (int)result >= 0 )
        goto LABEL_3;
      if ( (_DWORD)result != -1073741267 )
        return result;
    }
  }
  else
  {
LABEL_3:
    v9 = *(_DWORD *)v7;
    *a4 = *(_QWORD *)(v7 + 8) + (unsigned int)(16 * *(_DWORD *)(v7 + 4));
    *a5 = *(_DWORD *)(v7 + 4) | (v9 << *(_DWORD *)(a1 + 812));
    return 0LL;
  }
}
