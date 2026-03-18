/*
 * XREFs of ?BTreeNodeFree@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140004D98
 * Callers:
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140004D98 (-BTreeNodeFree@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14001E8E4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140004D98 (-BTreeNodeFree@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140249580 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

void __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(
        __int64 a1,
        char *a2)
{
  unsigned __int8 v2; // al
  char *v3; // rdi
  unsigned int v5; // r8d
  __int64 v6; // rax
  int v7; // eax
  char *v8; // rdx
  char *v9; // rsi
  char *v10; // rbp
  struct NP_CONTEXT::NP_CTX *v11; // r8
  void **v12; // rcx
  void *v13; // rax
  struct NP_CONTEXT::NP_CTX *v14; // [rsp+38h] [rbp+10h]

  v2 = a2[3];
  v3 = a2;
  if ( v2 )
  {
    v5 = v2;
    v6 = a1 + 16;
  }
  else
  {
    v7 = *(_DWORD *)a2;
    v8 = a2 + 16;
    v9 = v8;
    v10 = &v8[16 * (unsigned __int16)v7];
    if ( v8 <= v10 )
    {
      v11 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
      v14 = v11;
      do
      {
        v12 = (void **)(v9 - 8);
        if ( v9 <= v8 )
          v12 = (void **)(v3 + 8);
        if ( **(_DWORD **)v11 == -1 || v3[2] != 2 )
          v13 = *v12;
        else
          v13 = NP_CONTEXT::NpLeafRemoveInternal(v11, v12);
        if ( v13 )
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(
            a1,
            v13);
        v11 = v14;
        v8 = v3 + 16;
        v9 += 16;
      }
      while ( v9 <= v10 );
    }
    v5 = (unsigned __int8)v3[3];
    v6 = a1 + 16;
    a2 = v3;
  }
  NP_CONTEXT::NpNodeFree((struct NP_CONTEXT::NP_CTX *)(v6 & -(__int64)(a1 != 0)), a2, v5);
}
