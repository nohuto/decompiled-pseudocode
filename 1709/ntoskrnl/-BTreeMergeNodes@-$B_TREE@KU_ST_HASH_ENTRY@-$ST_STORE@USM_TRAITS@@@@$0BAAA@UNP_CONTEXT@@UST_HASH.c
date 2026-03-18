/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140262700
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140260650 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140260650 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140260D58 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402645DC (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14026471C (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeMergeNodes(
        __int64 a1,
        __int64 a2,
        int *a3)
{
  __int64 *v5; // r9
  __int64 v6; // rsi
  int *v7; // rbx
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // ecx
  __int64 v12; // rax
  int *v13; // rcx
  size_t v14; // r8
  __int64 v15; // rcx
  bool v16; // zf
  _DWORD **v17; // rbx
  __int64 v18; // r8
  __int64 result; // rax

  v5 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  if ( ((unsigned __int8)a3 & 1) != 0 )
  {
    v6 = *v5;
    a3 = (int *)((unsigned __int64)a3 & 0xFFFFFFFFFFFFFFFEuLL);
    v7 = a3;
  }
  else
  {
    v7 = (int *)*v5;
    v6 = (__int64)a3;
  }
  v8 = *v7;
  v9 = *(v5 - 1);
  v10 = (unsigned __int16)*v7;
  if ( v7 == a3 )
  {
    v9 -= 16LL;
    *(v5 - 1) = v9;
  }
  if ( *((_BYTE *)v7 + 3) )
  {
    v11 = **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( v11 == -1 )
      v12 = *(_QWORD *)(v6 + 8);
    else
      v12 = 3358LL;
    if ( v11 == -1 )
      *((_QWORD *)v7 + 1) = v12;
    v13 = &v7[v10 + 4];
    v14 = 4LL * (unsigned __int16)*(_DWORD *)v6;
  }
  else
  {
    v15 = 2LL * (unsigned __int16)v8;
    LODWORD(v10) = (unsigned __int16)v8 + 1;
    v7[2 * v15 + 4] = *(_DWORD *)v9;
    *(_QWORD *)&v7[2 * v15 + 6] = *(_QWORD *)(v6 + 8);
    v14 = 16LL * (unsigned __int16)*(_DWORD *)v6;
    v13 = &v7[4 * (unsigned int)v10 + 4];
  }
  memmove(v13, (const void *)(v6 + 16), v14);
  v16 = *((_BYTE *)v7 + 3) == 0;
  *(_WORD *)v7 = v10 + *(_WORD *)v6;
  if ( !v16 )
  {
    v17 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **v17 != -1 )
      NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)), (void **)(v9 + 8));
    if ( **v17 != -1 )
      NP_CONTEXT::NpLeafRemoveInternal(
        (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)),
        (void **)(v9 + 8));
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
    a1,
    (unsigned __int8 *)v6);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
             a1,
             a2,
             v18);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
