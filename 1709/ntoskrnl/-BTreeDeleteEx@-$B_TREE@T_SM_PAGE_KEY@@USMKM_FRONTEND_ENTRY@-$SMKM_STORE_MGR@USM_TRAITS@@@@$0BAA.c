/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402608E4
 * Callers:
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140262870 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14026668C (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x1402614D8 (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140262870 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140263120 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
        _QWORD *a1,
        __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 *v5; // rbx
  _BYTE *v6; // r14
  int v7; // eax
  unsigned __int64 v8; // rdx
  unsigned int v9; // r13d
  size_t v10; // rbp
  const void *v11; // rdx
  unsigned __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rcx
  _DWORD *v21; // rcx
  _DWORD *v22; // rbx
  char v24[8]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v25; // [rsp+28h] [rbp-30h]

  v2 = 0;
  v5 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v6 = (_BYTE *)*v5;
  v7 = *(_DWORD *)*v5;
  if ( *(_BYTE *)(*v5 + 3) )
  {
    v8 = v5[1];
    v9 = 255;
    v10 = (size_t)&v6[8LL * (unsigned __int16)v7 + 8 - v8];
    v11 = (const void *)(v8 + 8);
  }
  else
  {
    v12 = v5[1];
    v9 = 127;
    v10 = (size_t)&v6[16LL * (unsigned __int16)v7 - v12];
    v11 = (const void *)(v12 + 16);
  }
  if ( v10 )
    memmove((void *)v5[1], v11, v10);
  --*(_WORD *)v6;
  if ( v6[3] )
    --a1[1];
  v13 = *(_DWORD *)v6;
  if ( (_BYTE *)*a1 == v6 )
  {
    if ( !(_WORD)v13 && !v6[3] )
    {
      memmove(v5, v5 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      --*(_DWORD *)(a2 + 24);
      *a1 = *((_QWORD *)v6 + 1);
      ExFreePoolWithTag(v6, 0);
    }
  }
  else
  {
    if ( (unsigned __int16)v13 < v9 )
    {
      v14 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
              (unsigned __int16)v13,
              a2);
      if ( !v14 )
        return (unsigned int)-1073741818;
      v15 = (unsigned __int16)*(_DWORD *)v6;
      if ( v15 < v9 )
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(
          a1,
          a2,
          v14);
        v5 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v14 & 1) != 0 )
        {
          v18 = v14 & 0xFFFFFFFFFFFFFFFEuLL;
          *v5 = v18;
          v19 = *(_DWORD *)v18;
          if ( *(_BYTE *)(v18 + 3) )
            v20 = 8LL * (unsigned __int16)v19 + 16;
          else
            v20 = 16 * ((unsigned __int16)v19 + 1LL);
          v5[1] = v18 + v20 - v10;
        }
      }
      else if ( (v14 & 1) != 0 )
      {
        v16 = v15 - v9 + 1;
        if ( v6[3] )
          v17 = 8 * v16;
        else
          v17 = 16 * v16;
        v5[1] += v17;
      }
    }
    v21 = (_DWORD *)*v5;
    v22 = (_DWORD *)v5[1];
    if ( v22 == v21 + 4
      && *((_BYTE *)v21 + 3)
      && (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                         a2,
                         0LL,
                         v24) )
    {
      *v25 = *v22;
    }
  }
  return v2;
}
