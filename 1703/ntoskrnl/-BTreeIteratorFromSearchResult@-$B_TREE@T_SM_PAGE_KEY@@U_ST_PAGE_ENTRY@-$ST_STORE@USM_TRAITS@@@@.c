/*
 * XREFs of ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14005B654
 * Callers:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14005B2AC (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14024AE1C (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1400596E4 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140059870 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x14012F0B0 (-BTreeSearchResultInit@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1402494FC (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

char *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  char **v3; // rax
  int v5; // ecx
  _OWORD *v7; // r8
  char *result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  void **v12; // rbx
  __int64 v13; // r15
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  unsigned int v20; // edx
  __int64 *v21; // rbx
  unsigned __int64 v22; // rcx
  __int64 v23; // rbx
  _QWORD v24[3]; // [rsp+20h] [rbp+0h] BYREF
  int v25; // [rsp+38h] [rbp+18h]
  unsigned int v26; // [rsp+3Ch] [rbp+1Ch]

  v3 = 0LL;
  v5 = *(_DWORD *)(a3 + 24);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v5 == -1 || !v5 )
    v7 = (_OWORD *)(a3 + 8);
  else
    v7 = (_OWORD *)(*(_QWORD *)a3 + 16LL * (unsigned int)(v5 - 1));
  *(_OWORD *)a2 = *v7;
  if ( a1 )
    v3 = (char **)(a1 + 16);
  result = *v3;
  if ( *(_DWORD *)result != -1 )
  {
    v9 = *a2;
    if ( v9 )
    {
      result = *(char **)a1;
      if ( v9 != *(_QWORD *)a1 )
      {
        if ( v5 == -1 )
        {
          v13 = *(_QWORD *)v7;
          if ( result )
            v14 = (unsigned __int8)result[2];
          else
            v14 = 0;
          v15 = 16LL * v14;
          v16 = v15 + 15;
          if ( v15 + 15 < v15 )
            v16 = 0xFFFFFFFFFFFFFF0LL;
          v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
          v18 = alloca(v17);
          v19 = alloca(v17);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
            v24,
            2LL);
          v20 = *(_DWORD *)(v13 + 16);
          v25 = 0;
          v24[0] = v24;
          v26 = v14;
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
            (char **)a1,
            v20,
            (__int64)v24);
          v21 = &v24[2 * v14 - 4];
          v22 = v21[1];
          v23 = *v21;
          if ( v22 <= v23 + 16 )
            v12 = (void **)(v23 + 8);
          else
            v12 = (void **)(v22 - 8);
          B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
            a1,
            (__int64)v24);
        }
        else
        {
          v10 = *((_QWORD *)v7 - 2);
          v11 = *((_QWORD *)v7 - 1);
          if ( v11 <= v10 + 16 )
            v12 = (void **)(v10 + 8);
          else
            v12 = (void **)(v11 - 8);
        }
        result = *(char **)(a1 + 16);
        if ( *(_DWORD *)result != -1 )
          result = (char *)NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v12, 3u);
      }
    }
  }
  a2[1] -= 8LL;
  return result;
}
