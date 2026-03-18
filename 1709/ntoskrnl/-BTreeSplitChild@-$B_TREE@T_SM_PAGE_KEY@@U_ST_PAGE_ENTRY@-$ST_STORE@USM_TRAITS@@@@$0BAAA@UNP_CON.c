/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140263FC0
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140261ADC (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140260D58 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140261ADC (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140262AD8 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z @ 0x1402645A8 (-NpGetResidentLeaf@NP_CONTEXT@@SAPEAUB_TREE_NODE_HDR@@PEAUNP_CTX@1@PEAT_NP_LEAF_PTR@@@Z.c)
 */

_BYTE *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
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
  _BYTE *v15; // rax
  struct NP_CONTEXT::NP_CTX *v16; // rcx
  union _NP_LEAF_PTR *v17; // rdx
  int v18; // ecx
  int v19; // eax
  struct NP_CONTEXT::NP_CTX *v20; // rcx
  union _NP_LEAF_PTR *v21; // rdx
  bool v22; // zf
  __int128 v24; // [rsp+20h] [rbp-48h] BYREF
  __int16 v25; // [rsp+78h] [rbp+10h]
  _BYTE *v26; // [rsp+80h] [rbp+18h]
  unsigned __int8 **Src; // [rsp+88h] [rbp+20h]

  v4 = (unsigned __int8 **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = 0LL;
  v26 = 0LL;
  Src = v4;
  v6 = *v4;
  v7 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
         a1,
         (*v4)[3],
         (*v4)[2]);
  if ( !v7 )
    return v26;
  *((_QWORD *)&v24 + 1) = v7;
  *(_QWORD *)&v24 = 0LL;
  v8 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  if ( v6[3] )
  {
    v9 = &v6[8 * v8 + 16];
    if ( (*(_DWORD *)v6 & 1) != 0 && v9 + 8 < v4[1] )
    {
      v9 += 8;
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
    v13 = **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( v13 == -1 )
      v14 = *((_QWORD *)v6 + 1);
    else
      v14 = 3358LL;
    if ( v13 == -1 )
      *((_QWORD *)v7 + 1) = v14;
    memmove(v7 + 16, v9, 8LL * v12);
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
    v15 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            0,
            v6[2] + 1);
    v5 = v15;
    if ( v15 )
    {
      v17 = (union _NP_LEAF_PTR *)(v15 + 8);
      *((_QWORD *)v15 + 1) = v6;
      *((_OWORD *)v15 + 1) = v24;
      *(_WORD *)v15 = 1;
      *(_QWORD *)a1 = v15;
      if ( v6[3] && **(_DWORD **)(a1 + 16) != -1 )
      {
        *(_DWORD *)v17 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v16, v17);
      }
      memmove(Src + 2, Src, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      *Src = v5;
      Src[1] = v5 + 16;
      v18 = ++*(_DWORD *)(a2 + 24);
      goto LABEL_23;
    }
  }
  else
  {
    --*(_DWORD *)(a2 + 24);
    v19 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
            a1,
            a2,
            &v24);
    v18 = ++*(_DWORD *)(a2 + 24);
    if ( v19 >= 0 )
    {
LABEL_23:
      if ( v6[3] && **(_DWORD **)(a1 + 16) != -1 )
      {
        v20 = (struct NP_CONTEXT::NP_CTX *)(2LL * (unsigned int)(v18 - 2));
        v21 = (union _NP_LEAF_PTR *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v20 + 8) + 8LL);
        *(_DWORD *)v21 |= 1u;
        NP_CONTEXT::NpGetResidentLeaf(v20, v21);
      }
      v22 = v6[3] == 0;
      *(_WORD *)v6 = v8;
      if ( !v22 && **(_DWORD **)(a1 + 16) == -1 )
        *((_QWORD *)v6 + 1) = v7;
      v26 = v7;
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
  return v26;
}
