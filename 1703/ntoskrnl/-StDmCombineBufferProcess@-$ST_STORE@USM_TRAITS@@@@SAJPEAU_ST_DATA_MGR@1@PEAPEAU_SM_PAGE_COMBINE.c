/*
 * XREFs of ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x14012F7B0
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140059EF4 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14001F9B4 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1400350F0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14005919C (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005939C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005A150 (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14005C27C (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x14012F0F4 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x14012FA30 (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEA.c)
 *     ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x14012FB30 (-BTreeSearchResultIterStart@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferProcess(__int64 a1, unsigned __int16 **a2)
{
  unsigned __int64 v4; // r9
  __int64 v5; // rdi
  unsigned __int16 *v6; // r14
  int v7; // eax
  int v8; // edi
  unsigned __int16 *v9; // r15
  unsigned __int16 *v10; // rdi
  int v11; // r14d
  unsigned __int16 *v12; // r14
  _DWORD *PreviousEntry; // rax
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
  v5 = *(_QWORD *)(a1 + 800);
  v6 = *a2;
  if ( (*(_BYTE *)(v5 + 5989) & 4) != 0 )
  {
    memset(v26, 0, sizeof(v26));
    v26[1] = v6;
    v26[0] = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback;
    v7 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(v5, 5LL, (__int64)v26, 0xCu);
    v8 = v7;
    if ( v7 )
    {
      if ( v7 == -1073741536 )
        *a2 = 0LL;
    }
    else
    {
      v8 = v26[4];
    }
  }
  else
  {
    v8 = SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(v5 + 6200, *a2, 0LL, v4);
  }
  if ( v8 >= 0 )
  {
    v9 = *a2;
    v10 = v9 + 4;
    v11 = (*((_DWORD *)v9 + 2) >> 4) | (*(_DWORD *)v9 << *(_DWORD *)(a1 + 812));
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
      B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        (__int64 *)(a1 + 64),
        a1 + 88);
    *(_DWORD *)(a1 + 120) &= ~1u;
    **(_DWORD **)(a1 + 760) = v11;
    if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
                a1 + 88,
                a1 + 64,
                *(unsigned int *)(a1 + 768)) < 0 )
      __int2c();
    v12 = (unsigned __int16 *)((char *)v9 + v9[3]);
    while ( v10 < v12 )
    {
      if ( *((_BYTE *)v10 + 7) < 0x10u )
      {
        *(_DWORD *)v10 >>= 4;
        do
        {
          PreviousEntry = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                                      a1 + 64,
                                      a1 + 88);
          v14 = (unsigned int)(*PreviousEntry >> *(_DWORD *)(a1 + 456));
          _BitScanReverse((unsigned int *)&v15, v14);
          v16 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                         + (unsigned int)(*(_DWORD *)(a1 + 464) * (*(_DWORD *)(a1 + 460) & *PreviousEntry))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v15 + 192) + 16 * (v14 ^ (unsigned int)(1 << v15))));
        }
        while ( (*(_DWORD *)(a1 + 808) & *v16) != *(_DWORD *)v10 );
        if ( (v16[1] & 0xFFFFF000) <= 0x1000 )
        {
          **(_DWORD **)(a1 + 760) = (*(_DWORD *)&v10[4 * *((unsigned __int8 *)v10 + 7) + 6] >> 4) | (*(_DWORD *)&v10[4 * *((unsigned __int8 *)v10 + 7) + 4] << *(_DWORD *)(a1 + 812));
          if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
                      (_DWORD *)(a1 + 64),
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
      v10 += 4 * *((unsigned __int8 *)v10 + 6) + 4;
    }
    v8 = 0;
  }
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultCleanup(
    (__int64 *)(a1 + 64),
    (__int64)&v23,
    0);
  return (unsigned int)v8;
}
