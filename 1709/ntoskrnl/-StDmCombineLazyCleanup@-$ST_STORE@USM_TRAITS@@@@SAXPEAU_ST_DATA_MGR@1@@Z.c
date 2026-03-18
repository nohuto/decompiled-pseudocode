/*
 * XREFs of ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14026BFA8
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402713C4 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140006CB0 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14026109C (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorAttachEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUITERATOR@1@PEAU1@@Z @ 0x140261DB0 (-BTreeIteratorAttachEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14026209C (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140262558 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14026391C (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?StDmCombinePageEntry@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14026C184 (-StDmCombinePageEntry@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_S.c)
 *     ?StLazyWorkMgrQueueWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE@1@KK@Z @ 0x140270310 (-StLazyWorkMgrQueueWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@W4_ST_LAZY_WORK_TYPE.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmCombineLazyCleanup(__int64 a1)
{
  char v2; // cl
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  unsigned int v5; // r12d
  unsigned __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 LeafSibling; // rax
  __int64 v10; // r14
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+28h] [rbp-8h]

  v2 = *(_BYTE *)(a1 + 1905);
  v11 = 0LL;
  v12 = 0LL;
  if ( (v2 & 3) == 1 )
  {
    *(_BYTE *)(a1 + 1905) = v2 & 0xFC | 2;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorAttachEx(
      &v11,
      (_QWORD *)a1);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 1064);
    if ( (*(_DWORD *)(a1 + 56) & 1) == 0 )
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (__int64 *)a1,
        a1 + 24);
    *(_DWORD *)(a1 + 56) |= 1u;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      (char **)a1,
      v3,
      a1 + 24);
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      (unsigned __int8 **)a1,
      &v11,
      a1 + 24);
  }
  v4 = 0;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 1896) )
  {
    v6 = v12;
    v7 = v11;
    while ( v7 )
    {
      v6 += 8LL;
      v8 = (unsigned __int16)*(_DWORD *)v7 + 2LL;
      v12 = v6;
      if ( v6 >= v7 + 8 * v8 )
      {
        if ( **(_DWORD **)(a1 + 16) == -1 )
        {
          LeafSibling = *(_QWORD *)(v7 + 8);
        }
        else
        {
          LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                          a1,
                          v7);
          if ( LeafSibling == -1 )
          {
            v10 = -1LL;
            goto LABEL_18;
          }
        }
        if ( !LeafSibling )
        {
          v10 = 0LL;
          goto LABEL_18;
        }
        v6 = LeafSibling + 16;
        v11 = LeafSibling;
        v12 = LeafSibling + 16;
        v7 = LeafSibling;
      }
      v10 = v6;
LABEL_18:
      if ( !v10 )
        break;
      if ( v5 >= 0x200 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 800) + 6100LL) >> 8)
           + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6576LL)
           + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6096LL) )
        {
          goto LABEL_23;
        }
        v6 = v12;
        v7 = v11;
      }
      ST_STORE<SM_TRAITS>::StDmCombinePageEntry(a1, v10);
      ++v5;
      if ( !*(_DWORD *)(a1 + 1896) )
      {
LABEL_23:
        *(_DWORD *)(a1 + 1064) = *(_DWORD *)v10;
        goto LABEL_25;
      }
    }
  }
  v4 = 1024;
  *(_BYTE *)(a1 + 1905) = *(_BYTE *)(a1 + 1905) & 0xFC | 1;
LABEL_25:
  if ( *(_DWORD *)(a1 + 1896) <= v4 )
    *(_BYTE *)(a1 + 1905) &= 0xFCu;
  else
    ST_STORE<SM_TRAITS>::StLazyWorkMgrQueueWork(*(_QWORD *)(a1 + 1912), 5LL, 30000LL, 4294967294LL);
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    &v11,
    (__int64 *)a1);
}
