/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140263120
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402608E4 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x14026187C (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        _DWORD *a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // ebp
  _DWORD *v5; // r9
  _DWORD *v6; // rdx
  _DWORD *v7; // rsi
  unsigned int v8; // r8d
  __int64 *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // r12
  _DWORD *v13; // r13
  unsigned int v14; // edx
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v19; // ebx
  _DWORD *v20; // rdi
  _DWORD *v21; // r14
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rcx
  char *v25; // r9
  char *v26; // r15
  size_t v27; // r8
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  _DWORD *v32; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v33; // [rsp+78h] [rbp+10h] BYREF
  char *v34; // [rsp+80h] [rbp+18h]
  __int64 v35; // [rsp+88h] [rbp+20h]

  v32 = a1;
  v2 = 1LL;
  v3 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v4 = 16;
  v5 = *(_DWORD **)v3;
  v6 = *(_DWORD **)(v3 - 16);
  v7 = *(_DWORD **)(v3 - 8);
  v8 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v3 + 3LL) != 0) + 255;
  if ( v7 == &v6[4 * (unsigned __int16)*v6 + 4] )
  {
    v7 -= 4;
    v9 = (__int64 *)(v7 - 2);
    if ( v7 <= v6 + 4 )
      v9 = (__int64 *)(v6 + 2);
    v10 = &v33;
    v32 = v5;
  }
  else
  {
    v33 = *(_DWORD **)v3;
    v9 = (__int64 *)(v7 + 2);
    v10 = &v32;
    v2 = 0LL;
  }
  v11 = *v9;
  *v10 = v11;
  v12 = v32;
  v13 = v33;
  v35 = v11 | v2;
  v14 = (unsigned __int16)*v32;
  v15 = (unsigned __int16)*v33;
  v16 = v15 + v14;
  if ( v15 + v14 >= v8 && v16 < 2 * v8 - 1 )
  {
    if ( v15 <= v14 )
    {
      v17 = (unsigned __int16)*v33;
      v18 = 0;
      LODWORD(v32) = 0;
      v20 = v12;
      v19 = (v16 >> 1) - v15;
      v21 = v33;
    }
    else
    {
      v17 = 0;
      v18 = v16 >> 1;
      LODWORD(v32) = v16 >> 1;
      v19 = v15 - (v16 >> 1);
      v20 = v33;
      v21 = v12;
    }
    v22 = *((_BYTE *)v20 + 3) == 0;
    LODWORD(v33) = v17;
    if ( v22 )
    {
      v23 = 4LL * v18;
      v24 = 4LL * v17;
    }
    else
    {
      v23 = 2LL * v18;
      v4 = 8;
      v24 = 2LL * v17;
    }
    v25 = (char *)&v21[v24 + 4];
    v26 = (char *)&v20[v23 + 4];
    v34 = v25;
    if ( v20 == v13 )
    {
      memmove(&v25[v19 * v4], v25, v4 * (unsigned __int16)*v21);
      v18 = (unsigned int)v32;
      v17 = (unsigned int)v33;
      v25 = v34;
    }
    if ( *((_BYTE *)v20 + 3) )
    {
      v27 = v19 * v4;
    }
    else
    {
      v28 = *v7;
      if ( v20 == v13 )
      {
        v29 = 2LL * (v19 - 1);
        v21[2 * v29 + 4] = v28;
        *(_QWORD *)&v21[2 * v29 + 6] = *((_QWORD *)v21 + 1);
      }
      else
      {
        v30 = 2LL * v17;
        v21[2 * v30 + 4] = v28;
        *(_QWORD *)&v21[2 * v30 + 6] = *((_QWORD *)v20 + 1);
        v25 += v4;
      }
      if ( v20 == v13 )
      {
        *v7 = v20[4 * v18 + 4];
        *((_QWORD *)v21 + 1) = *(_QWORD *)&v20[4 * v18 + 6];
        v26 += v4;
      }
      else
      {
        *v7 = v20[4 * v19];
        *((_QWORD *)v20 + 1) = *(_QWORD *)&v20[4 * v19 + 2];
      }
      v27 = v4 * (v19 - 1);
    }
    memmove(v25, v26, v27);
    *(_WORD *)v21 += v19;
    *(_WORD *)v20 -= v19;
    if ( v20 == v12 )
      memmove(v26, &v26[v19 * v4], v4 * (unsigned __int16)*v20);
    if ( *((_BYTE *)v12 + 3) )
      *v7 = v12[4];
  }
  return v35;
}
