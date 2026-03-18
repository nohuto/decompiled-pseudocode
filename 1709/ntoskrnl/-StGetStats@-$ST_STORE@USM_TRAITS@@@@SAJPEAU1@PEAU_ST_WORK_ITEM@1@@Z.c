/*
 * XREFs of ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140270284
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402713C4 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400094A4 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026CF10 (-StDmEtwPageRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmEtwRegionRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026D07C (-StDmEtwRegionRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmMapPage @ 0x140275E1C (SmMapPage.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StGetStats(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 result; // rax
  int v7; // edx
  char v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 )
  {
    v5 = SmMapPage(v4, &v8);
    if ( !v5 )
      return 3221225626LL;
  }
  else
  {
    v5 = 0LL;
  }
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 != -1 )
    return ST_STORE<SM_TRAITS>::StGetStatsWorker(a1, v7, v5, (unsigned int *)(a2 + 12));
  ST_STORE<SM_TRAITS>::StDmEtwRegionRundown(a1 + 80);
  ST_STORE<SM_TRAITS>::StDmEtwRegionRundown(a1 + 2016);
  result = ST_STORE<SM_TRAITS>::StDmEtwPageRundown((__int64 *)(a1 + 80));
  if ( (int)result >= 0 )
    return ST_STORE<SM_TRAITS>::StDmEtwPageRundown((__int64 *)(a1 + 2016));
  return result;
}
