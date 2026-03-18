/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140037CD4
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x140058ED4 (-BTreeInsertEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 * Callees:
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14003813C (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x14003C49C (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x140058ED4 (-BTreeInsertEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ?NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x140249408 (-NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 */

unsigned __int8 *__fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSplitChild(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2)
{
  unsigned __int8 **v4; // r15
  unsigned __int8 *v5; // rsi
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // rdi
  unsigned int v8; // ebp
  unsigned __int8 *v9; // r9
  int v10; // eax
  unsigned __int8 *v11; // r15
  unsigned int v12; // edx
  int v13; // ecx
  __int64 v14; // rax
  int v15; // eax
  int v16; // ecx
  struct NP_CONTEXT::NP_CTX *v17; // rcx
  union _NP_LEAF_PTR *v18; // rdx
  bool v19; // zf
  __int64 v21; // rax
  struct NP_CONTEXT::NP_CTX *v22; // rcx
  union _NP_LEAF_PTR *v23; // rdx
  __int128 v24; // [rsp+20h] [rbp-48h]
  __int16 v25; // [rsp+78h] [rbp+10h]
  unsigned __int8 *v26; // [rsp+80h] [rbp+18h]
  unsigned __int8 **Src; // [rsp+88h] [rbp+20h]

  v4 = (unsigned __int8 **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = 0LL;
  v26 = 0LL;
  Src = v4;
  v6 = *v4;
  v7 = (unsigned __int8 *)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
                            a1,
                            (*v4)[3],
                            (*v4)[2]);
  if ( !v7 )
    return v26;
  *((_QWORD *)&v24 + 1) = v7;
  DWORD1(v24) = 0;
  v8 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  if ( v6[3] )
  {
    v9 = &v6[4 * v8 + 16];
    if ( (*(_DWORD *)v6 & 1) != 0 && v9 + 4 < v4[1] )
    {
      v9 += 4;
      ++v8;
    }
    v10 = *(_DWORD *)v9;
    v11 = 0LL;
  }
  else
  {
    v9 = 0LL;
    v11 = &v6[16 * v8 + 16];
    v10 = *(_DWORD *)v11;
  }
  LODWORD(v24) = v10;
  v12 = (unsigned __int16)*(_DWORD *)v6 - v8;
  v25 = *(_DWORD *)v6 - v8;
  if ( v6[3] )
  {
    v13 = **(_DWORD **)(((unsigned __int64)a1 + 16) & -(__int64)(a1 != 0LL));
    if ( v13 == -1 )
      v14 = *((_QWORD *)v6 + 1);
    else
      v14 = 3358LL;
    if ( v13 == -1 )
      *((_QWORD *)v7 + 1) = v14;
    memmove(v7 + 16, v9, 4LL * v12);
  }
  else
  {
    v25 = v12 - 1;
    memmove(v7 + 16, v11 + 16, 16LL * (v12 - 1));
    *((_QWORD *)v7 + 1) = *((_QWORD *)v11 + 1);
  }
  *(_WORD *)v7 = v25;
  if ( *(unsigned __int8 **)a1 == v6 )
  {
    v21 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            0LL,
            (unsigned int)v6[2] + 1);
    v5 = (unsigned __int8 *)v21;
    if ( v21 )
    {
      v23 = (union _NP_LEAF_PTR *)(v21 + 8);
      *(_QWORD *)(v21 + 8) = v6;
      *(_OWORD *)(v21 + 16) = v24;
      *(_WORD *)v21 = 1;
      *(_QWORD *)a1 = v21;
      if ( v6[3] && **((_DWORD **)a1 + 2) != -1 )
      {
        *(_DWORD *)v23 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v22, v23);
      }
      memmove(Src + 2, Src, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      *Src = v5;
      Src[1] = v5 + 16;
      v16 = ++*(_DWORD *)(a2 + 24);
      goto LABEL_13;
    }
  }
  else
  {
    --*(_DWORD *)(a2 + 24);
    v15 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(a1);
    v16 = ++*(_DWORD *)(a2 + 24);
    if ( v15 >= 0 )
    {
LABEL_13:
      if ( v6[3] )
      {
        v17 = (struct NP_CONTEXT::NP_CTX *)(2LL * (unsigned int)(v16 - 2));
        v18 = (union _NP_LEAF_PTR *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v17 + 8) + 8LL);
        if ( **((_DWORD **)a1 + 2) != -1 )
        {
          *(_DWORD *)v18 |= 1u;
          NP_CONTEXT::NpGetResidentLeaf(v17, v18);
        }
      }
      v19 = v6[3] == 0;
      *(_WORD *)v6 = v8;
      if ( !v19 && **((_DWORD **)a1 + 2) == -1 )
        *((_QWORD *)v6 + 1) = v7;
      v26 = v7;
      v7 = 0LL;
      v5 = 0LL;
    }
  }
  if ( v7 )
    NP_CONTEXT::NpNodeFree((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v7, v7[3]);
  if ( v5 )
    NP_CONTEXT::NpNodeFree((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v5, v5[3]);
  return v26;
}
