/*
 * XREFs of ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14005B948
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14005B2AC (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x14012FA30 (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEA.c)
 * Callees:
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x140058840 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140058BF8 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140058DF0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005BACC (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005BCE4 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRecordRemove(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebp
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  __int64 v10; // rax
  int v11; // r8d

  v4 = ((unsigned int)a2 - ((a2 & 0xFFFFF000) + *(_DWORD *)(a1 + 472))) / *(_DWORD *)(a1 + 464)
     + (*(_DWORD *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  v5 = *(_DWORD *)(a1 + 112);
  if ( v5 == -1 || !v5 )
    v6 = a1 + 96;
  else
    v6 = *(_QWORD *)(a1 + 88) + 16LL * (unsigned int)(v5 - 1);
  if ( **(_DWORD **)(v6 + 8) != v4 )
    __int2c();
  if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 128),
      a1 + 152);
  *(_DWORD *)(a1 + 184) &= ~1u;
  v7 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx((struct NP_CONTEXT::NP_CTX *)(a1 + 64));
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( v7 != -1073741818 )
      __int2c();
  }
  else
  {
    if ( !(unsigned __int8)*(_DWORD *)(a1 + 776) )
    {
      if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
                  (_DWORD *)(a1 + 128),
                  v4,
                  a1 + 152) < 0 )
        __int2c();
      v9 = *(_DWORD *)(a1 + 176);
      if ( v9 == -1 || !v9 )
        v10 = a1 + 160;
      else
        v10 = *(_QWORD *)(a1 + 152) + 16LL * (unsigned int)(v9 - 1);
      if ( **(_DWORD **)(v10 + 8) != v4 )
        __int2c();
      v8 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDeleteEx((struct NP_CONTEXT::NP_CTX *)(a1 + 128));
      if ( v8 < 0 )
        __int2c();
    }
    v11 = 4096;
    if ( (*(_DWORD *)(a2 + 4) & 0xFFF) != 0 )
      v11 = *(_DWORD *)(a2 + 4) & 0xFFF;
    ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(
      a1,
      (unsigned int)(*(_DWORD *)a2 >> *(_DWORD *)(a1 + 812)),
      -((unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v11) >> 4),
      0);
  }
  return (unsigned int)v8;
}
