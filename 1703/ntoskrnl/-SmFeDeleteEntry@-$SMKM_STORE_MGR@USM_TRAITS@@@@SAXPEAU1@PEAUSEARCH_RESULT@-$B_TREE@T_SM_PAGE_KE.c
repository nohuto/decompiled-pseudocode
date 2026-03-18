/*
 * XREFs of ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14002B1F8
 * Callers:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14001ED9C (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14002AEB8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x140054FF0 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14024ECBC (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140055BC8 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rsi
  int v6; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  int v12; // eax

  v5 = a1 + 448;
  v6 = *(_DWORD *)(a2 + 24);
  if ( v6 == -1 || !v6 )
    v8 = a2 + 8;
  else
    v8 = *(_QWORD *)a2 + 16LL * (unsigned int)(v6 - 1);
  v9 = *a3;
  if ( *(_QWORD *)v8 == *a3 )
  {
    v10 = a3[1];
  }
  else
  {
    if ( v6 == -1 )
      *(_QWORD *)(a2 + 8) = 0LL;
    else
      *(_DWORD *)(a2 + 24) = 0;
    if ( *(_DWORD *)(a2 + 24) == -1 )
    {
      *(_OWORD *)v8 = *(_OWORD *)a3;
      return B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
               v5,
               a2);
    }
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      v5,
      *(unsigned int *)(v9 + 16),
      a2,
      a4);
    v12 = *(_DWORD *)(a2 + 24);
    if ( v12 == -1 || !v12 )
      v8 = a2 + 8;
    else
      v8 = *(_QWORD *)a2 + 16LL * (unsigned int)(v12 - 1);
    v10 = a3[1];
  }
  *(_QWORD *)(v8 + 8) = v10;
  return B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
           v5,
           a2);
}
