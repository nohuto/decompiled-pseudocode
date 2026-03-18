/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140263B60
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1402615A8 (-BTreeInsertEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140260D58 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1402615A8 (-BTreeInsertEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140262AD8 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x1402645A8 (-NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 */

_BYTE *__fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSplitChild(
        __int64 a1,
        __int64 a2)
{
  unsigned __int8 **v4; // r15
  unsigned __int8 *v5; // r14
  unsigned __int8 *v6; // rbx
  _BYTE *v7; // rdi
  unsigned int v8; // ebp
  unsigned __int8 *v9; // r9
  int v10; // eax
  unsigned __int8 *v11; // r15
  unsigned int v12; // edx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r9
  _BYTE *v16; // rax
  struct NP_CONTEXT::NP_CTX *v17; // rcx
  union _NP_LEAF_PTR *v18; // rdx
  int v19; // ecx
  int v20; // eax
  struct NP_CONTEXT::NP_CTX *v21; // rcx
  union _NP_LEAF_PTR *v22; // rdx
  bool v23; // zf
  __int128 v25; // [rsp+20h] [rbp-48h] BYREF
  __int16 v26; // [rsp+78h] [rbp+10h]
  _BYTE *v27; // [rsp+80h] [rbp+18h]
  unsigned __int8 **Src; // [rsp+88h] [rbp+20h]

  v4 = (unsigned __int8 **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = 0LL;
  v27 = 0LL;
  Src = v4;
  v6 = *v4;
  v7 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
         a1,
         (*v4)[3],
         (*v4)[2]);
  if ( !v7 )
    return v27;
  *((_QWORD *)&v25 + 1) = v7;
  *(_QWORD *)&v25 = 0LL;
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
  LODWORD(v25) = v10;
  v12 = (unsigned __int16)*(_DWORD *)v6 - v8;
  v26 = *(_DWORD *)v6 - v8;
  if ( v6[3] )
  {
    v13 = **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
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
    v26 = v12 - 1;
    memmove(v7 + 16, v11 + 16, 16LL * (v12 - 1));
    *((_QWORD *)v7 + 1) = *((_QWORD *)v11 + 1);
  }
  *(_WORD *)v7 = v26;
  if ( *(unsigned __int8 **)a1 == v6 )
  {
    v16 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            0,
            v6[2] + 1);
    v5 = v16;
    if ( v16 )
    {
      v18 = (union _NP_LEAF_PTR *)(v16 + 8);
      *((_QWORD *)v16 + 1) = v6;
      *((_OWORD *)v16 + 1) = v25;
      *(_WORD *)v16 = 1;
      *(_QWORD *)a1 = v16;
      if ( v6[3] && **(_DWORD **)(a1 + 16) != -1 )
      {
        *(_DWORD *)v18 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v17, v18);
      }
      memmove(Src + 2, Src, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      *Src = v5;
      Src[1] = v5 + 16;
      v19 = ++*(_DWORD *)(a2 + 24);
      goto LABEL_23;
    }
  }
  else
  {
    --*(_DWORD *)(a2 + 24);
    v20 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
            a1,
            a2,
            &v25,
            v15);
    v19 = ++*(_DWORD *)(a2 + 24);
    if ( v20 >= 0 )
    {
LABEL_23:
      if ( v6[3] && **(_DWORD **)(a1 + 16) != -1 )
      {
        v21 = (struct NP_CONTEXT::NP_CTX *)(2LL * (unsigned int)(v19 - 2));
        v22 = (union _NP_LEAF_PTR *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v21 + 8) + 8LL);
        *(_DWORD *)v22 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v21, v22);
      }
      v23 = v6[3] == 0;
      *(_WORD *)v6 = v8;
      if ( !v23 && **(_DWORD **)(a1 + 16) == -1 )
        *((_QWORD *)v6 + 1) = v7;
      v27 = v7;
      v7 = 0LL;
      v5 = 0LL;
    }
  }
  if ( v7 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
      a1,
      v7);
  if ( v5 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
      a1,
      v5);
  return v27;
}
