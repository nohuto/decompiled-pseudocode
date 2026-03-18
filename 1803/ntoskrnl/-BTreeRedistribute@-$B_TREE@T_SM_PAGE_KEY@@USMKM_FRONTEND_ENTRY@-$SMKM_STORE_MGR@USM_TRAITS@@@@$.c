/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400BC988
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14008CDB4 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400BC6C0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        _DWORD *a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  _DWORD *v4; // r9
  _DWORD *v5; // rdx
  _DWORD *v6; // r14
  unsigned int v7; // r8d
  __int64 *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // r12
  _DWORD *v12; // rsi
  unsigned int v13; // r9d
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  _DWORD *v17; // rbx
  unsigned int v18; // edi
  _DWORD *v19; // r13
  char v20; // r10
  _DWORD *v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // ebp
  char *v25; // r9
  char *v26; // r15
  size_t v27; // r8
  int v29; // r10d
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  _DWORD *v33; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v34; // [rsp+78h] [rbp+10h] BYREF
  __int64 v35; // [rsp+80h] [rbp+18h]
  __int64 v36; // [rsp+88h] [rbp+20h]

  v33 = a1;
  v2 = 1LL;
  v3 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v4 = *(_DWORD **)v3;
  v5 = *(_DWORD **)(v3 - 16);
  v6 = *(_DWORD **)(v3 - 8);
  v7 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v3 + 3LL) != 0) + 255;
  if ( v6 == &v5[4 * (unsigned __int16)*v5 + 4] )
  {
    v6 -= 4;
    v8 = (__int64 *)(v6 - 2);
    if ( v6 <= v5 + 4 )
      v8 = (__int64 *)(v5 + 2);
    v9 = &v34;
    v33 = v4;
  }
  else
  {
    v34 = *(_DWORD **)v3;
    v8 = (__int64 *)(v6 + 2);
    v9 = &v33;
    v2 = 0LL;
  }
  v10 = *v8;
  *v9 = v10;
  v11 = v33;
  v36 = v10 | v2;
  v12 = v34;
  v13 = (unsigned __int16)*v33;
  v14 = (unsigned __int16)*v34;
  v15 = v14 + v13;
  if ( v14 + v13 >= v7 && v15 < 2 * v7 - 1 )
  {
    v16 = v15 >> 1;
    if ( v14 > v13 )
    {
      v17 = v34;
      v18 = v14 - v16;
      v19 = v34;
      v12 = v33;
    }
    else
    {
      v17 = v33;
      v18 = v16 - v14;
      v19 = v34;
    }
    v20 = *((_BYTE *)v17 + 3);
    v21 = v13 < v14 ? (_DWORD *)v16 : 0LL;
    v22 = 0;
    v34 = v21;
    if ( v14 <= v13 )
      v22 = v14;
    v23 = v22;
    v35 = v22;
    v24 = v20 != 0 ? 8 : 16;
    v25 = (char *)v12 + v22 * ((-(__int64)(v20 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 16) + 16;
    v33 = v25;
    v26 = (char *)v17 + (_QWORD)v21 * ((-(__int64)(v20 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 16) + 16;
    if ( v17 == v19 )
    {
      memmove(&v25[v18 * v24], v25, v24 * (unsigned __int16)*v12);
      v20 = *((_BYTE *)v17 + 3);
      v25 = (char *)v33;
      v21 = v34;
      v23 = v35;
    }
    if ( v20 )
    {
      v27 = v18 * v24;
    }
    else
    {
      v29 = *v6;
      if ( v17 == v19 )
      {
        v30 = 2LL * (v18 - 1);
        v12[2 * v30 + 4] = v29;
        *(_QWORD *)&v12[2 * v30 + 6] = *((_QWORD *)v12 + 1);
      }
      else
      {
        v31 = 2 * v23;
        v25 += v24;
        v12[2 * v31 + 4] = v29;
        *(_QWORD *)&v12[2 * v31 + 6] = *((_QWORD *)v17 + 1);
      }
      if ( v17 == v19 )
      {
        v32 = 2LL * (_QWORD)v21;
        v26 += v24;
        *v6 = v17[2 * v32 + 4];
        *((_QWORD *)v12 + 1) = *(_QWORD *)&v17[2 * v32 + 6];
      }
      else
      {
        *v6 = v17[4 * v18];
        *((_QWORD *)v17 + 1) = *(_QWORD *)&v17[4 * v18 + 2];
      }
      v27 = v24 * (v18 - 1);
    }
    memmove(v25, v26, v27);
    *(_WORD *)v12 += v18;
    *(_WORD *)v17 -= v18;
    if ( v17 == v11 )
      memmove(v26, &v26[v18 * v24], v24 * (unsigned __int16)*v17);
    if ( *((_BYTE *)v11 + 3) )
      *v6 = v11[4];
  }
  return v36;
}
