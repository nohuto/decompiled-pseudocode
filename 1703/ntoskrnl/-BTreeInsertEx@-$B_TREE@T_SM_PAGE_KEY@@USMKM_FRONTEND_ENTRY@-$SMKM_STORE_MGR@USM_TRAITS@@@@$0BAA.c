/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140055338
 * Callers:
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14003AF20 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140055720 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14002B548 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14003AF20 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14003B0BC (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     SmArrayGrow @ 0x14003BA3C (SmArrayGrow.c)
 *     memmove @ 0x140192A40 (memmove.c)
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
  _QWORD *v10; // r14
  _QWORD *v11; // rsi
  unsigned int v12; // ebp
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rbx
  int v15; // eax
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  _DWORD *v25; // r8
  _QWORD *v26; // rdx
  char v27; // cl
  int v28; // ebx
  int v29; // eax
  _BYTE *v30; // rax

  v3 = *a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8
    && !(unsigned int)SmArrayGrow(v8, a2, (unsigned int *)(a2 + 28), (const void **)a2) )
  {
    return (unsigned int)-1073741670;
  }
  if ( v9 )
  {
    v10 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1));
  }
  else
  {
    v30 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            v8,
            1,
            1);
    *a1 = (__int64)v30;
    if ( !v30 )
      return (unsigned int)-1073741670;
    v10 = *(_QWORD **)a2;
    *v10 = v30;
    v10[1] = *a1 + 16;
    ++*(_DWORD *)(a2 + 24);
  }
  v11 = (_QWORD *)*v10;
  v12 = (unsigned __int8)-(*(_BYTE *)(*v10 + 3LL) != 0) + 255;
  v13 = (unsigned __int16)*(_DWORD *)*v10;
  if ( (unsigned int)v13 < v12 )
    goto LABEL_7;
  v17 = v10[1] - (_QWORD)v11 - 16LL;
  if ( *(_BYTE *)(*v10 + 3LL) )
    v18 = v17 >> 3;
  else
    v18 = v17 >> 4;
  if ( v11 == (_QWORD *)*a1 )
  {
    v23 = 0LL;
    v21 = 0LL;
  }
  else
  {
    v19 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
            (_DWORD *)v13,
            a2);
    v20 = *(v10 - 1);
    v21 = v19;
    v22 = v20 + 16;
    v23 = v20 - 16;
    if ( (v19 & 1) == 0 )
      v23 = v22;
  }
  v24 = (unsigned __int16)*(_DWORD *)v11;
  if ( v24 < v12 )
  {
    if ( (v21 & 1) != 0 )
    {
      v25 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFFEuLL);
      LODWORD(v18) = v24 - v12 + v18;
      if ( *((_BYTE *)v11 + 3) )
      {
        if ( (int)v18 > 0 )
          goto LABEL_20;
      }
      else
      {
        if ( (int)v18 >= 0 )
          goto LABEL_20;
        LODWORD(v18) = v18 + 1;
      }
      v11 = v25;
      LODWORD(v18) = (unsigned __int16)*v25 + (_DWORD)v18;
LABEL_20:
      if ( v11 == (_QWORD *)v25 )
        *(v10 - 1) = v23;
      goto LABEL_22;
    }
    if ( (int)v18 > v24 )
    {
      v27 = *((_BYTE *)v11 + 3);
      v11 = (_QWORD *)v21;
      *(v10 - 1) = v23;
      goto LABEL_27;
    }
    goto LABEL_22;
  }
  v26 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
          a1,
          a2);
  if ( !v26 )
    return (unsigned int)-1073741670;
  v10 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v24 = (unsigned __int16)*(_DWORD *)v11;
  if ( (int)v18 > v24 )
  {
    v27 = *((_BYTE *)v11 + 3);
    v11 = v26;
    *(v10 - 1) += 16LL;
LABEL_27:
    v28 = v18 - v24;
    v29 = v28 - 1;
    if ( v27 )
      v29 = v28;
    LODWORD(v18) = v29;
  }
LABEL_22:
  *v10 = v11;
  if ( *((_BYTE *)v11 + 3) )
    v10[1] = &v11[(int)v18 + 2];
  else
    v10[1] = &v11[2 * (int)v18 + 2];
LABEL_7:
  v14 = (_QWORD *)v10[1];
  v15 = *(_DWORD *)v11;
  if ( *((_BYTE *)v11 + 3) )
  {
    memmove(v14 + 1, v14, (size_t)v11 + 8LL * (unsigned __int16)v15 + 16 - (_QWORD)v14);
    *v14 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v14 + 2, v14, (size_t)v11 + 16 * ((unsigned __int16)v15 + 1LL) - (_QWORD)v14);
    *(_OWORD *)v14 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v11;
  return v4;
}
