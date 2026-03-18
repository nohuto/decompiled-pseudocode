/*
 * XREFs of ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14005859C
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140058180 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 * Callees:
 *     SmEtwEnabled @ 0x1400587E0 (SmEtwEnabled.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x140058840 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14005890C (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140058BF8 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140058DF0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x140058E84 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005939C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140059430 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1400596E4 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140059870 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005BACC (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005BCE4 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005BF00 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     SmEtwLogStoreOp @ 0x14024D98C (SmEtwLogStoreOp.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  char v3; // bl
  char *v4; // r14
  unsigned int v8; // r13d
  int v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // r8d
  __int64 v14; // rax
  int v16; // eax
  int v17; // eax
  unsigned int v19; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v20; // [rsp+94h] [rbp+1Ch]

  v3 = 0;
  v4 = (char *)a1 + 24;
  if ( (*((_BYTE *)a1 + 56) & 1) != 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      a1,
      (char *)a1 + 24);
  *((_DWORD *)v4 + 8) &= ~1u;
  if ( (*((_BYTE *)a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (char *)a1 + 64,
      (char *)a1 + 88);
  *((_DWORD *)a1 + 30) &= ~1u;
  if ( (*((_BYTE *)a1 + 184) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (char *)a1 + 128,
      (char *)a1 + 152);
  *((_DWORD *)a1 + 46) &= ~1u;
  v8 = ((unsigned int)a3 - ((a3 & 0xFFFFF000) + *((_DWORD *)a1 + 118))) / *((_DWORD *)a1 + 116)
     + (*(_DWORD *)((a3 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *((_DWORD *)a1 + 114));
  v19 = *(_DWORD *)(a2 + 16);
  v20 = v8;
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    a1,
    v19,
    v4);
  v9 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(a1);
  if ( v9 >= 0 )
  {
    v3 = 1;
    if ( !(unsigned __int8)*((_DWORD *)a1 + 194) )
    {
      v10 = *(_DWORD *)(a3 + 4) & 0xFFF ^ ((*(_DWORD *)(a3 + 4) & 0xFFFFF000) + 4096);
      *(_DWORD *)(a3 + 4) = v10;
      v11 = v10 >> 12;
      if ( v11 > 1 )
        return 0;
      if ( !v11 )
        __int2c();
    }
    v9 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsert((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 64));
    if ( v9 >= 0 )
    {
      v3 = 3;
      if ( (unsigned __int8)*((_DWORD *)a1 + 194) )
        goto LABEL_17;
      v12 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
              (char *)a1 + 128,
              v8,
              (char *)a1 + 152);
      v9 = v12;
      if ( v12 == -1073741275 )
      {
        v9 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 128));
      }
      else if ( v12 >= 0 )
      {
        v9 = -1073741484;
      }
      if ( v9 >= 0 )
      {
LABEL_17:
        v13 = 4096;
        if ( (*(_DWORD *)(a3 + 4) & 0xFFF) != 0 )
          v13 = *(_DWORD *)(a3 + 4) & 0xFFF;
        ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(
          a1,
          (unsigned int)(*(_DWORD *)a3 >> *((_DWORD *)a1 + 203)),
          (unsigned int)(*((_DWORD *)a1 + 206) + 15 + v13) >> 4,
          0LL);
        v14 = SmEtwEnabled(0LL);
        if ( v14 )
          SmEtwLogStoreOp(
            v14,
            0,
            (unsigned int)&v19,
            v14,
            *(_DWORD *)a3,
            (char)a1,
            *(_WORD *)(a3 + 4),
            (2 * (*(_BYTE *)a2 & 7)) | ((*(_DWORD *)a2 & 0x40000000) != 0));
        return 0;
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v16 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(a1);
    if ( v16 < 0 )
    {
      if ( v16 != -1073741818 )
        __int2c();
      v9 = v16;
    }
  }
  if ( (v3 & 2) != 0 )
  {
    v17 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 64));
    if ( v17 < 0 )
    {
      if ( v17 != -1073741818 )
        __int2c();
      return (unsigned int)v17;
    }
  }
  return (unsigned int)v9;
}
