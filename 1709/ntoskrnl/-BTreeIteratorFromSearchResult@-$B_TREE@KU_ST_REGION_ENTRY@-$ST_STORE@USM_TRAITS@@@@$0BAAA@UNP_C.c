/*
 * XREFs of ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140262378
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14026A3EC (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x14026D124 (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 * Callees:
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x140006414 (-BTreeSearchResultInit@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140006BE4 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401897F0 (_alloca_probe.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1402637A0 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140264698 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

unsigned __int8 *__fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
        unsigned __int8 **a1,
        _QWORD *a2,
        __int64 a3)
{
  int v3; // r9d
  _OWORD *v6; // rdx
  unsigned __int8 *result; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  void **v10; // rbx
  __int64 v11; // r15
  unsigned int v12; // r14d
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  void *v17; // rsp
  __int64 v18; // rdx
  __int64 *v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v21; // rbx
  _QWORD v22[3]; // [rsp+20h] [rbp+0h] BYREF
  int v23; // [rsp+38h] [rbp+18h]
  unsigned int v24; // [rsp+3Ch] [rbp+1Ch]

  v3 = *(_DWORD *)(a3 + 24);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v3 == -1 || !v3 )
    v6 = (_OWORD *)(a3 + 8);
  else
    v6 = (_OWORD *)(*(_QWORD *)a3 + 16LL * (unsigned int)(v3 - 1));
  *(_OWORD *)a2 = *v6;
  result = *(unsigned __int8 **)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
  if ( *(_DWORD *)result != -1 )
  {
    if ( *a2 )
    {
      result = *a1;
      if ( (unsigned __int8 *)*a2 != *a1 )
      {
        if ( v3 == -1 )
        {
          v11 = *(_QWORD *)v6;
          if ( result )
            v12 = result[2];
          else
            v12 = 0;
          v13 = 16LL * v12;
          v14 = v13 + 15;
          if ( v13 + 15 < v13 )
            v14 = 0xFFFFFFFFFFFFFF0LL;
          v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
          v16 = alloca(v15);
          v17 = alloca(v15);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultInit(
            v22,
            2);
          v18 = *(unsigned int *)(v11 + 16);
          v23 = 0;
          v22[0] = v22;
          v24 = v12;
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
            a1,
            v18,
            v22);
          v19 = &v22[2 * v12 - 4];
          v20 = v19[1];
          v21 = *v19;
          if ( v20 <= v21 + 16 )
            v10 = (void **)(v21 + 8);
          else
            v10 = (void **)(v20 - 8);
          B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
            (__int64 *)a1,
            (__int64)v22);
        }
        else
        {
          v8 = *((_QWORD *)v6 - 2);
          v9 = *((_QWORD *)v6 - 1);
          if ( v9 <= v8 + 16 )
            v10 = (void **)(v8 + 8);
          else
            v10 = (void **)(v9 - 8);
        }
        result = a1[2];
        if ( *(_DWORD *)result != -1 )
          result = (unsigned __int8 *)NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 2), v10, 3u);
      }
    }
  }
  a2[1] -= 4LL;
  return result;
}
