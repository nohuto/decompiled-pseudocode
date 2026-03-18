/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14026187C
 * Callers:
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140263DE8 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140265D68 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140262B3C (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140263120 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140263DE8 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     SmArrayGrow @ 0x140271A84 (SmArrayGrow.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rax
  __int64 *v11; // r14
  _DWORD *v12; // rsi
  unsigned int v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  _DWORD *v20; // r8
  char v21; // cl
  __int64 v22; // rdx
  int v23; // ebx
  int v24; // eax
  _QWORD *v25; // rbx
  int v26; // eax

  v3 = *a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v11 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1));
  }
  else
  {
    v10 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            v8,
            1LL,
            1LL);
    *a1 = v10;
    if ( !v10 )
      return (unsigned int)-1073741670;
    v11 = *(__int64 **)a2;
    *v11 = v10;
    v11[1] = *a1 + 16;
    ++*(_DWORD *)(a2 + 24);
  }
  v12 = (_DWORD *)*v11;
  v13 = (unsigned __int8)-(*(_BYTE *)(*v11 + 3) != 0) + 255;
  v14 = (unsigned __int16)*(_DWORD *)*v11;
  if ( (unsigned int)v14 < v13 )
    goto LABEL_38;
  v15 = v11[1] - (_QWORD)v12 - 16;
  if ( *(_BYTE *)(*v11 + 3) )
    v16 = v15 >> 3;
  else
    v16 = v15 >> 4;
  if ( v12 == (_DWORD *)*a1 )
  {
    v18 = 0LL;
    v17 = 0LL;
  }
  else
  {
    v17 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
            v14,
            a2);
    v18 = 32LL * ((v17 & 1) == 0) - 16 + *(v11 - 1);
  }
  v19 = (unsigned __int16)*v12;
  if ( v19 < v13 )
  {
    if ( (v17 & 1) != 0 )
    {
      v20 = (_DWORD *)(v17 & 0xFFFFFFFFFFFFFFFEuLL);
      LODWORD(v16) = v19 + v16 - v13;
      if ( *((_BYTE *)v12 + 3) )
      {
        if ( (int)v16 > 0 )
          goto LABEL_25;
      }
      else
      {
        if ( (int)v16 >= 0 )
          goto LABEL_25;
        LODWORD(v16) = v16 + 1;
      }
      v12 = v20;
      LODWORD(v16) = (unsigned __int16)*v20 + (_DWORD)v16;
LABEL_25:
      if ( v12 == v20 )
        *(v11 - 1) = v18;
      goto LABEL_35;
    }
    if ( (int)v16 > v19 )
    {
      v21 = *((_BYTE *)v12 + 3);
      v12 = (_DWORD *)v17;
      *(v11 - 1) = v18;
LABEL_32:
      v23 = v16 - v19;
      v24 = v23 - 1;
      if ( v21 )
        v24 = v23;
      LODWORD(v16) = v24;
      goto LABEL_35;
    }
    goto LABEL_35;
  }
  v22 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
          a1,
          a2,
          v17,
          v18);
  if ( !v22 )
    return (unsigned int)-1073741670;
  v11 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v19 = (unsigned __int16)*v12;
  if ( (int)v16 > v19 )
  {
    v21 = *((_BYTE *)v12 + 3);
    v12 = (_DWORD *)v22;
    *(v11 - 1) += 16LL;
    goto LABEL_32;
  }
LABEL_35:
  *v11 = (__int64)v12;
  if ( *((_BYTE *)v12 + 3) )
    v11[1] = (__int64)&v12[2 * (int)v16 + 4];
  else
    v11[1] = (__int64)&v12[4 * (int)v16 + 4];
LABEL_38:
  v25 = (_QWORD *)v11[1];
  v26 = *v12;
  if ( *((_BYTE *)v12 + 3) )
  {
    memmove(v25 + 1, v25, (size_t)v12 + 8LL * (unsigned __int16)v26 + 16 - (_QWORD)v25);
    *v25 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v25 + 2, v25, (size_t)v12 + 16 * ((unsigned __int16)v26 + 1LL) - (_QWORD)v25);
    *(_OWORD *)v25 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v12;
  return v4;
}
