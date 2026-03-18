/*
 * XREFs of ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024C954
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140027AA0 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ?NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z @ 0x140249710 (-NpiPerformPageOut@NP_CONTEXT@@SAJPEAU1@PEAUNP_CTX@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14024C4D8 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14024D04C (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMetaRegionsUpdate(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v5; // r12d
  __int64 v6; // rbp
  unsigned int v7; // r8d
  int v8; // esi
  int v9; // ebx
  __int64 v10; // r14
  struct NP_CONTEXT **v11; // rdx
  struct NP_CONTEXT **v12; // rdx
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1 + 2000;
  v5 = 0;
  v6 = 0LL;
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 2000, &v14, 0LL);
  v7 = *(_DWORD *)(a1 + 2856) - v14;
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
  {
    v8 = 2;
    if ( v7 < 2 )
    {
      v14 = 0;
      v10 = a1 + 80;
      v6 = v2;
      goto LABEL_9;
    }
    goto LABEL_3;
  }
  if ( v7 < 8 )
  {
LABEL_3:
    v9 = 1075380276;
    goto LABEL_12;
  }
  v6 = a1 + 80;
  v10 = v2;
  v8 = *(_DWORD *)(a1 + 2856) - v14;
  if ( *(_DWORD *)(v2 + 856) == v7 )
    v8 = v7 - 1;
  v14 = 0;
  if ( v8 )
  {
LABEL_9:
    while ( 1 )
    {
      v9 = ST_STORE<SM_TRAITS>::StDmRegionRemove(v10, &v14);
      if ( v9 < 0 )
        break;
      ++v5;
      *(_BYTE *)(((unsigned __int64)v14 >> 3) + *(_QWORD *)(v6 + 848)) |= 1 << (v14 & 7);
      ++*(_DWORD *)(v6 + 856);
      if ( !--v8 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v9 = 0;
  }
LABEL_12:
  ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(a1, a2);
  if ( v6 == v2 && v5 && v9 != -1073741818 )
  {
    v11 = (struct NP_CONTEXT **)((a1 + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 + 80) >> 64));
    if ( *((_DWORD *)*v11 + 10) > *(_DWORD *)*v11 )
      NP_CONTEXT::NpiPerformPageOut(*v11, (struct NP_CONTEXT::NP_CTX *)v11);
    v12 = (struct NP_CONTEXT **)((a1 + 160) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 + 144) >> 64));
    if ( *((_DWORD *)*v12 + 10) > *(_DWORD *)*v12 )
      NP_CONTEXT::NpiPerformPageOut(*v12, (struct NP_CONTEXT::NP_CTX *)v12);
  }
  return (unsigned int)v9;
}
