/*
 * XREFs of ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140092F9C
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14009263C (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140092CBC (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140092F9C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140094388 (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140094810 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x140095200 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400999C8 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x14007E684 (-BTreeSearchResultInit@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140092CBC (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140092F9C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401B3450 (_alloca_probe.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402A2620 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

void __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // edx
  struct NP_CONTEXT::NP_CTX *v5; // r8
  __int64 v6; // rcx
  char *v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  void *v12; // rsp
  __int64 *v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  void **v16; // rbx
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  void **v19; // rdx
  _DWORD v20[2]; // [rsp+20h] [rbp+0h] BYREF
  __int64 v21; // [rsp+28h] [rbp+8h]
  _QWORD v22[3]; // [rsp+30h] [rbp+10h] BYREF
  int v23; // [rsp+48h] [rbp+28h]
  int v24; // [rsp+4Ch] [rbp+2Ch]

  v4 = *(_DWORD *)(a2 + 24);
  v5 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
  if ( **(_DWORD **)v5 == -1 )
  {
    if ( v4 != -1 )
    {
LABEL_3:
      *(_DWORD *)(a2 + 24) = 0;
      return;
    }
  }
  else
  {
    if ( v4 != -1 )
    {
      if ( v4 > 1 )
      {
        v17 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (v4 - 2));
        v18 = v17[1];
        if ( v18 <= *v17 + 16LL )
          v19 = (void **)(*v17 + 8LL);
        else
          v19 = (void **)(v18 - 8);
        NP_CONTEXT::NpLeafDerefInternal(v5, v19);
      }
      goto LABEL_3;
    }
    v6 = *(_QWORD *)(a2 + 8);
    v21 = v6;
    if ( v6 )
    {
      v7 = *(char **)a1;
      if ( v6 != *(_QWORD *)a1 )
      {
        if ( v7 )
          v7 = (char *)(unsigned __int8)v7[2];
        v20[0] = (_DWORD)v7;
        v8 = 16LL * (_QWORD)v7;
        v9 = v8 + 15;
        if ( v8 + 15 < v8 )
          v9 = 0xFFFFFFFFFFFFFF0LL;
        v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
        v11 = alloca(v10);
        v12 = alloca(v10);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
          v22,
          2);
        v23 = 0;
        v24 = v20[0];
        v22[0] = v20;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
          (char **)a1,
          *(_DWORD *)(v21 + 16),
          (__int64)v22);
        v13 = (__int64 *)&v20[4 * (v20[0] - 2)];
        v14 = v13[1];
        v15 = *v13;
        if ( v14 <= v15 + 16 )
          v16 = (void **)(v15 + 8);
        else
          v16 = (void **)(v14 - 8);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          a1,
          v22);
        if ( **(_DWORD **)(a1 + 16) != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v16);
      }
    }
  }
  *(_QWORD *)(a2 + 8) = 0LL;
}
