/*
 * XREFs of ?BTreeNodeFree@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140262DA8
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400068A4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140262DA8 (-BTreeNodeFree@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 * Callees:
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140260D58 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeNodeFree@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140262DA8 (-BTreeNodeFree@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14026471C (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

void __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(
        __int64 a1,
        unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rbx
  __int64 v3; // rsi
  int v4; // eax
  unsigned __int8 *v5; // rdx
  unsigned __int8 *v6; // rdi
  unsigned __int8 *v7; // rbp
  struct NP_CONTEXT::NP_CTX *v8; // r8
  void **v9; // rcx
  void *v10; // rax
  struct NP_CONTEXT::NP_CTX *v11; // [rsp+38h] [rbp+10h]

  v2 = a2;
  v3 = a1;
  if ( !a2[3] )
  {
    v4 = *(_DWORD *)a2;
    v5 = a2 + 16;
    v6 = v5;
    v7 = &v5[16 * (unsigned __int16)v4];
    if ( v5 <= v7 )
    {
      v8 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
      v11 = v8;
      do
      {
        v9 = (void **)(v6 - 8);
        if ( v6 <= v5 )
          v9 = (void **)(v2 + 8);
        if ( **(_DWORD **)v8 == -1 || v2[2] != 2 )
          v10 = *v9;
        else
          v10 = NP_CONTEXT::NpLeafRemoveInternal(v8, v9);
        if ( v10 )
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFree(v3);
        v8 = v11;
        v5 = v2 + 16;
        v6 += 16;
      }
      while ( v6 <= v7 );
    }
    a2 = v2;
    a1 = v3;
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
    a1,
    a2);
}
