/*
 * XREFs of ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14009263C
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14009224C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     SmEtwEnabled @ 0x140092880 (SmEtwEnabled.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x1400928E0 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1400929AC (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140092CBC (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140092F9C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x14009302C (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14009362C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x1400936BC (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140093994 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140093B74 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400955CC (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140095828 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     SmEtwLogStoreOp @ 0x1402A6F28 (SmEtwLogStoreOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r15
  int v7; // ecx
  int v9; // ecx
  int v10; // edx
  __int64 v11; // rdx
  int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // r8d
  __int64 v17; // rax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // [rsp+90h] [rbp+8h] BYREF
  _DWORD *v22; // [rsp+98h] [rbp+10h]
  unsigned int v23; // [rsp+A0h] [rbp+18h] BYREF
  int v24; // [rsp+A8h] [rbp+20h] BYREF
  unsigned int v25; // [rsp+ACh] [rbp+24h]

  v22 = a2;
  v3 = 0;
  v4 = a1 + 24;
  v7 = *(_DWORD *)(a1 + 56);
  if ( (v7 & 1) != 0 )
  {
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      a1,
      v4);
    v7 = *(_DWORD *)(v4 + 32);
  }
  *(_DWORD *)(v4 + 32) = v7 & 0xFFFFFFFE;
  v9 = *(_DWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      a1 + 64,
      a1 + 88);
    v9 = *(_DWORD *)(a1 + 120);
  }
  *(_DWORD *)(a1 + 120) = v9 & 0xFFFFFFFE;
  v10 = *(_DWORD *)(a1 + 184);
  if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      a1 + 128,
      a1 + 152);
    v10 = *(_DWORD *)(a1 + 184);
  }
  *(_DWORD *)(a1 + 184) = v10 & 0xFFFFFFFE;
  v11 = (unsigned int)a2[4];
  v25 = ((_DWORD)a3 - *(_DWORD *)(a1 + 472) - ((unsigned int)a3 & 0xFFFFF000)) / *(_DWORD *)(a1 + 464)
      + (*(_DWORD *)((a3 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  v21 = v25;
  v24 = v11;
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    a1,
    v11,
    v4);
  v12 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
          a1,
          v4,
          &v24);
  if ( v12 >= 0 )
  {
    v3 = 1;
    if ( !*(_BYTE *)(a1 + 776) )
    {
      v13 = *(_DWORD *)(a3 + 4) + 4096;
      *(_DWORD *)(a3 + 4) = v13;
      v14 = v13 >> 12;
      if ( v14 > 1 )
        return 0;
      if ( !v14 )
        __int2c();
    }
    v23 = v21;
    v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert(
            a1 + 64,
            &v23,
            a1 + 88);
    if ( v12 >= 0 )
    {
      v3 = 3;
      if ( *(_BYTE *)(a1 + 776) )
        goto LABEL_17;
      v15 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
              a1 + 128,
              v21,
              a1 + 152);
      v12 = v15;
      if ( v15 == -1073741275 )
      {
        v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
                a1 + 128,
                a1 + 152,
                &v21);
      }
      else if ( v15 >= 0 )
      {
        v12 = -1073741484;
      }
      if ( v12 >= 0 )
      {
LABEL_17:
        v16 = 4096;
        if ( (*(_DWORD *)(a3 + 4) & 0xFFF) != 0 )
          v16 = *(_DWORD *)(a3 + 4) & 0xFFF;
        ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(
          a1,
          (unsigned int)(*(_DWORD *)a3 >> *(_DWORD *)(a1 + 812)),
          (unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v16) >> 4,
          0LL);
        v17 = SmEtwEnabled(0LL);
        if ( v17 )
          SmEtwLogStoreOp(
            v17,
            0,
            (unsigned int)&v24,
            v17,
            *(_DWORD *)a3,
            a1,
            *(_BYTE *)(a3 + 4),
            (2 * (*v22 & 7)) | ((*v22 & 0x40000000) != 0));
        return 0;
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v19 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
            a1,
            v4);
    if ( v19 < 0 )
    {
      if ( v19 != -1073741818 )
        __int2c();
      v12 = v19;
    }
  }
  if ( v3 >= 2 )
  {
    v20 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
            a1 + 64,
            a1 + 88);
    if ( v20 < 0 )
    {
      if ( v20 != -1073741818 )
        __int2c();
      return (unsigned int)v20;
    }
  }
  return (unsigned int)v12;
}
