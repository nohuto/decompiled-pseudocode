/*
 * XREFs of ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140095C4C
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1400940C0 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x14007E6C8 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140093364 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14009362C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14009431C (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140095ED0 (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x140095F14 (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEA.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x14009652C (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140097874 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140099680 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  int v6; // eax
  int v7; // edi
  __int64 v8; // r15
  unsigned __int64 v9; // rdi
  int v10; // ecx
  int v11; // r14d
  unsigned __int64 v12; // r14
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // r15
  char *v17; // rax
  unsigned int v18; // edx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // [rsp+20h] [rbp-50h] BYREF
  char v24; // [rsp+28h] [rbp-48h] BYREF
  int v25; // [rsp+38h] [rbp-38h]
  _QWORD v26[5]; // [rsp+48h] [rbp-28h] BYREF

  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultInit(
    &v23,
    2);
  v4 = *(_QWORD *)(a1 + 800);
  v5 = *a2;
  if ( (*(_BYTE *)(v4 + 6021) & 4) != 0 )
  {
    memset(v26, 0, sizeof(v26));
    v26[1] = v5;
    v26[0] = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback;
    v6 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(v4, 5LL, v26);
    v7 = v6;
    if ( v6 )
    {
      if ( v6 == -1073741536 )
        *a2 = 0LL;
    }
    else
    {
      v7 = v26[4];
    }
  }
  else
  {
    v7 = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(v4 + 6232, *a2, 0LL);
  }
  if ( v7 >= 0 )
  {
    v8 = *a2;
    v9 = v8 + 8;
    v10 = *(_DWORD *)(a1 + 120);
    v11 = (*(_DWORD *)(v8 + 8) >> 4) | (*(_DWORD *)v8 << *(_DWORD *)(a1 + 812));
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        a1 + 64,
        a1 + 88);
      v10 = *(_DWORD *)(a1 + 120);
    }
    *(_DWORD *)(a1 + 120) = v10 & 0xFFFFFFFE;
    **(_DWORD **)(a1 + 760) = v11;
    if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
                a1 + 88,
                a1 + 64,
                *(unsigned int *)(a1 + 768)) < 0 )
      __int2c();
    v12 = v8 + *(unsigned __int16 *)(v8 + 6);
    while ( v9 < v12 )
    {
      if ( *(_BYTE *)(v9 + 7) < 0x10u )
      {
        *(_DWORD *)v9 >>= 4;
        do
        {
          v13 = *(_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                             a1 + 64,
                             a1 + 88);
          v14 = v13 >> *(_DWORD *)(a1 + 456);
          _BitScanReverse((unsigned int *)&v15, v14);
          v16 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                         + *(_DWORD *)(a1 + 464) * (v13 & *(_DWORD *)(a1 + 460))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v15 + 192) + 16 * (v14 ^ (unsigned int)(1 << v15))));
        }
        while ( (*(_DWORD *)(a1 + 808) & *v16) != *(_DWORD *)v9 );
        if ( (v16[1] & 0xFFFFF000) <= 0x1000 )
        {
          **(_DWORD **)(a1 + 760) = (*(_DWORD *)(v9 + 8LL * *(unsigned __int8 *)(v9 + 7) + 12) >> 4) | (*(_DWORD *)(v9 + 8LL * *(unsigned __int8 *)(v9 + 7) + 8) << *(_DWORD *)(a1 + 812));
          if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                      (char **)(a1 + 64),
                      *(_DWORD *)(a1 + 768),
                      (__int64)&v23) >= 0 )
          {
            if ( v25 == -1 || !v25 )
              v17 = &v24;
            else
              v17 = (char *)(v23 + 16LL * (unsigned int)(v25 - 1));
            v18 = **((_DWORD **)v17 + 1);
            v19 = v18 & *(_DWORD *)(a1 + 460);
            v20 = v18 >> *(_DWORD *)(a1 + 456);
            _BitScanReverse((unsigned int *)&v21, v20);
            if ( (*(_DWORD *)(*(unsigned int *)(a1 + 472)
                            + (unsigned int)(*(_DWORD *)(a1 + 464) * v19)
                            + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v21 + 192) + 16 * (v20 ^ (unsigned int)(1 << v21)))
                            + 4LL) & 0xFFFFF000) != 0xFFFFF000 )
              ST_STORE<SM_TRAITS>::StDmCombinePageRecords(a1, v16, a1 + 88);
          }
        }
      }
      v9 += 8LL * *(unsigned __int8 *)(v9 + 6) + 8;
    }
    v7 = 0;
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
    a1 + 64,
    &v23,
    0LL);
  return (unsigned int)v7;
}
