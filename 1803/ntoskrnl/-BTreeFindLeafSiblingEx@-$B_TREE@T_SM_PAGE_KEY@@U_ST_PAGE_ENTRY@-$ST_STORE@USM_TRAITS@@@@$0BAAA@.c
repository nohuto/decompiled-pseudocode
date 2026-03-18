/*
 * XREFs of ?BTreeFindLeafSiblingEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140151730
 * Callers:
 *     ?BTreeFindNextEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAU_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1401516A4 (-BTreeFindNextEntry@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1402A2108 (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 * Callees:
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140095BD8 (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$.c)
 *     ?BTreeDescendToSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x140151824 (-BTreeDescendToSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@U.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402A2620 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1402A26DC (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSiblingEx(
        __int64 a1,
        __int64 a2)
{
  char *v4; // rbx
  __int64 v5; // rdx
  void **v6; // rax
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rdx
  void **v9; // rdx
  struct NP_CONTEXT::NP_CTX *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( (unsigned int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                       a2,
                       1,
                       v13) )
  {
    v6 = (void **)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDescendToSibling(
                    v13,
                    v5,
                    0LL);
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      v4 = (char *)*v6;
    else
      v4 = (char *)NP_CONTEXT::NpLeafRefInternal(
                     (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)),
                     v6,
                     2 * (*(_DWORD *)(a2 + 32) & 1u));
    if ( v4 )
    {
      v7 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 2));
      v8 = v7[1];
      if ( v8 <= *v7 + 16LL )
        v9 = (void **)(*v7 + 8LL);
      else
        v9 = (void **)(v8 - 8);
      v10 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
      if ( **(_DWORD **)v10 != -1 )
        NP_CONTEXT::NpLeafDerefInternal(v10, v9);
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDescendToSibling(
        v13,
        v9,
        a2);
      v11 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      *v11 = v4;
      v11[1] = v4 + 16;
    }
    else
    {
      return -1LL;
    }
  }
  return (__int64)v4;
}
