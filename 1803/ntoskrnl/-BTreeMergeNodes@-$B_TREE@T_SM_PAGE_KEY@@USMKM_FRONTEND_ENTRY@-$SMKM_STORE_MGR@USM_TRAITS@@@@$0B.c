/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x14014CDA4
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400BC6C0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400BC6C0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
        int **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  _QWORD *v6; // rdi
  void **v8; // rdx
  int v9; // r8d
  _DWORD *v10; // r10
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rbp
  int v14; // ecx
  void *v15; // rcx
  size_t v16; // r8
  __int64 result; // rax
  __int64 v18; // rcx

  v6 = (_QWORD *)a3;
  v8 = (void **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v9 = a3 & 1;
  v10 = *(v8 - 1);
  if ( v9 )
    v6 = *v8;
  v11 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !v9 )
    v11 = (unsigned __int64)*v8;
  v12 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  v13 = (unsigned __int16)*(_DWORD *)v11;
  v14 = HIBYTE(*(_DWORD *)v11);
  if ( !v9 )
    v12 = a3;
  if ( v11 == v12 )
  {
    v10 -= 4;
    *(v8 - 1) = v10;
    LOBYTE(v14) = *(_BYTE *)(v11 + 3);
  }
  if ( (_BYTE)v14 )
  {
    *(_QWORD *)(v11 + 8) = v6[1];
    v15 = (void *)(v11 + 16 + 8 * v13);
    v16 = 8LL * (unsigned __int16)*(_DWORD *)v6;
  }
  else
  {
    v18 = 2 * v13;
    LODWORD(v13) = v13 + 1;
    *(_DWORD *)(v11 + 8 * v18 + 16) = *v10;
    *(_QWORD *)(v11 + 8 * v18 + 24) = v6[1];
    v16 = 16LL * (unsigned __int16)*(_DWORD *)v6;
    v15 = (void *)(v11 + 16 * ((unsigned int)v13 + 1LL));
  }
  memmove(v15, v6 + 2, v16);
  *(_WORD *)v11 = v13 + *(_WORD *)v6;
  ExFreePoolWithTag(v6, 0);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
