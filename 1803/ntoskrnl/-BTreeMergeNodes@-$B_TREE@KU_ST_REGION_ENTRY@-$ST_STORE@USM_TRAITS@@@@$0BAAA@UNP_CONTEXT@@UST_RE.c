/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14014C1CC
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400955CC (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 * Callees:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400955CC (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14014C314 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402A2620 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402A2760 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeMergeNodes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 *v8; // rdx
  int v9; // r8d
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  int v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  void *v17; // rcx
  size_t v18; // r8
  bool v19; // zf
  _DWORD **v20; // rbx
  __int64 result; // rax
  __int64 v22; // rcx

  v6 = a3;
  v8 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v9 = a3 & 1;
  v10 = *(v8 - 1);
  if ( v9 )
    v6 = *v8;
  v11 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !v9 )
    v11 = *v8;
  v12 = (unsigned __int16)*(_DWORD *)v11;
  v13 = HIBYTE(*(_DWORD *)v11);
  v14 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !v9 )
    v14 = a3;
  if ( v11 == v14 )
  {
    v10 -= 16LL;
    *(v8 - 1) = v10;
    LOBYTE(v13) = *(_BYTE *)(v11 + 3);
  }
  if ( (_BYTE)v13 )
  {
    v15 = **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( v15 == -1 )
      v16 = *(_QWORD *)(v6 + 8);
    else
      v16 = 3358LL;
    if ( v15 == -1 )
      *(_QWORD *)(v11 + 8) = v16;
    v17 = (void *)(v11 + 16 + 4 * v12);
    v18 = 4LL * (unsigned __int16)*(_DWORD *)v6;
  }
  else
  {
    v22 = 2 * v12;
    LODWORD(v12) = v12 + 1;
    *(_DWORD *)(v11 + 8 * v22 + 16) = *(_DWORD *)v10;
    *(_QWORD *)(v11 + 8 * v22 + 24) = *(_QWORD *)(v6 + 8);
    v18 = 16LL * (unsigned __int16)*(_DWORD *)v6;
    v17 = (void *)(v11 + 16 * ((unsigned int)v12 + 1LL));
  }
  memmove(v17, (const void *)(v6 + 16), v18);
  v19 = *(_BYTE *)(v11 + 3) == 0;
  *(_WORD *)v11 = v12 + *(_WORD *)v6;
  if ( !v19 )
  {
    v20 = (_DWORD **)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **v20 != -1 )
    {
      NP_CONTEXT::NpLeafDerefInternal(
        (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)),
        (void **)(v10 + 8));
      if ( **v20 != -1 )
        NP_CONTEXT::NpLeafRemoveInternal(
          (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)),
          (void **)(v10 + 8));
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
    a1,
    v6);
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
