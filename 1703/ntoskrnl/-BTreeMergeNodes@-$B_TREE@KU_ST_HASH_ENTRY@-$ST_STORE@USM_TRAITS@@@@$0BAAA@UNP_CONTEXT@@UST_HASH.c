/*
 * XREFs of ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14013C2C8
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005BACC (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 * Callees:
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x14003C49C (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005BACC (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140249440 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140249580 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeMergeNodes(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r15
  int v10; // ecx
  __int64 v11; // rax
  void *v12; // rcx
  size_t v13; // r8
  bool v14; // zf
  _DWORD **v15; // rbx
  __int64 result; // rax
  __int64 v17; // rcx

  v5 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  if ( (a3 & 1) != 0 )
  {
    v7 = *v5;
    a3 &= ~1uLL;
    v6 = a3;
  }
  else
  {
    v6 = *v5;
    v7 = a3;
  }
  v8 = *(v5 - 1);
  v9 = (unsigned __int16)*(_DWORD *)v6;
  if ( v6 == a3 )
  {
    v8 -= 16LL;
    *(v5 - 1) = v8;
  }
  if ( *(_BYTE *)(v6 + 3) )
  {
    v10 = **(_DWORD **)(((unsigned __int64)a1 + 16) & -(__int64)(a1 != 0LL));
    if ( v10 == -1 )
      v11 = *(_QWORD *)(v7 + 8);
    else
      v11 = 3358LL;
    if ( v10 == -1 )
      *(_QWORD *)(v6 + 8) = v11;
    v12 = (void *)(v6 + 4 * (v9 + 4));
    v13 = 4LL * (unsigned __int16)*(_DWORD *)v7;
  }
  else
  {
    v17 = 2 * v9;
    LODWORD(v9) = v9 + 1;
    *(_DWORD *)(v6 + 8 * v17 + 16) = *(_DWORD *)v8;
    *(_QWORD *)(v6 + 8 * v17 + 24) = *(_QWORD *)(v7 + 8);
    v13 = 16LL * (unsigned __int16)*(_DWORD *)v7;
    v12 = (void *)(v6 + 16 * ((unsigned int)v9 + 1LL));
  }
  memmove(v12, (const void *)(v7 + 16), v13);
  v14 = *(_BYTE *)(v6 + 3) == 0;
  *(_WORD *)v6 = v9 + *(_WORD *)v7;
  if ( !v14 )
  {
    v15 = (_DWORD **)(((unsigned __int64)a1 + 16) & -(__int64)(a1 != 0LL));
    if ( **v15 != -1 )
      NP_CONTEXT::NpLeafDerefInternal(
        (struct NP_CONTEXT::NP_CTX *)(((unsigned __int64)a1 + 16) & -(__int64)(a1 != 0LL)),
        (void **)(v8 + 8));
    if ( **v15 != -1 )
      NP_CONTEXT::NpLeafRemoveInternal(
        (struct NP_CONTEXT::NP_CTX *)(((unsigned __int64)a1 + 16) & -(__int64)(a1 != 0LL)),
        (void **)(v8 + 8));
  }
  NP_CONTEXT::NpNodeFree(
    (struct NP_CONTEXT::NP_CTX *)(((unsigned __int64)a1 + 16) & -(__int64)(a1 != 0LL)),
    (_QWORD *)v7,
    *(unsigned __int8 *)(v7 + 3));
  --*(_DWORD *)(a2 + 24);
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeDeleteEx(
             a1,
             a2);
  ++*(_DWORD *)(a2 + 24);
  return result;
}
