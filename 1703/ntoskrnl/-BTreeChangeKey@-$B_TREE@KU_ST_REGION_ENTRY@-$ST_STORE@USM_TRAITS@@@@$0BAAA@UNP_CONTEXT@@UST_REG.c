/*
 * XREFs of ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14005B108
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14005AB00 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x140013ED0 (-Compare@ST_REGION_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x1400371A0 (-BTreeFindSeperatorIndexEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CO.c)
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x14013D1A0 (-BTreeDescendToSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140249440 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1402494FC (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // r9
  __int64 *v5; // r9
  unsigned int *v8; // r12
  __int64 v9; // r15
  int v10; // edi
  unsigned int *v12; // r14
  unsigned int v13; // r8d
  void **v14; // r13
  struct NP_CONTEXT::NP_CTX *v15; // rcx
  int *v16; // rdx
  int v17; // r15d
  int v18; // eax
  struct NP_CONTEXT::NP_CTX *v19; // rcx
  _DWORD **v20; // rax
  _DWORD **v21; // rax
  __int64 v22; // rax
  unsigned int v23; // edi
  unsigned int v24; // edi
  char v25[8]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int *v26; // [rsp+28h] [rbp-8h]
  unsigned int v27; // [rsp+78h] [rbp+48h] BYREF
  unsigned int v28; // [rsp+80h] [rbp+50h] BYREF

  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v27 = a3;
  v5 = (__int64 *)(*(_QWORD *)a2 + 16 * v4);
  v8 = (unsigned int *)v5[1];
  v9 = *v5;
  v28 = *v8;
  v10 = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v27, &v28);
  if ( v10 > 0 )
  {
    if ( (unsigned __int64)v8 < v9 + 4 * ((unsigned __int64)((unsigned int)(unsigned __int16)*(_DWORD *)v9 - 1) + 4) )
    {
      v28 = v8[1];
      v27 = a3;
LABEL_6:
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v27, &v28) < 0 )
        goto LABEL_4;
      return 0LL;
    }
  }
  else if ( (unsigned __int64)v8 > v9 + 16 )
  {
    if ( !v10 )
    {
LABEL_4:
      *v8 = a3;
      return 1LL;
    }
    v27 = *(v8 - 1);
    v28 = a3;
    goto LABEL_6;
  }
  if ( !(unsigned int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindSeperatorIndexEntry(
                        a2,
                        v10 > 0,
                        (__int64)v25) )
    goto LABEL_4;
  v12 = v26;
  if ( v10 > 0 )
  {
    v28 = *v26;
    v27 = a3;
    if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v27, &v28) < 0 )
      goto LABEL_4;
  }
  else if ( !v10 )
  {
    *v26 = a3;
    goto LABEL_4;
  }
  if ( v10 >= 0 )
  {
    v20 = a1 ? (_DWORD **)(a1 + 4) : 0LL;
    if ( **v20 == -1 )
    {
      if ( a1 )
        v21 = (_DWORD **)(a1 + 4);
      else
        v21 = 0LL;
      if ( **v21 == -1 )
        v22 = *(_QWORD *)(v9 + 8);
      else
        v22 = 3358LL;
      v23 = *(_DWORD *)(v22 + 16);
      v28 = v23;
      v27 = a3;
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v27, &v28) < 0 )
      {
        *v12 = v23;
        goto LABEL_4;
      }
      return 0LL;
    }
  }
  v14 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
                   v25,
                   v10 > 0,
                   0LL);
  if ( a1 )
    v15 = (struct NP_CONTEXT::NP_CTX *)(a1 + 4);
  else
    v15 = 0LL;
  if ( **(_DWORD **)v15 == -1 )
    v16 = (int *)*v14;
  else
    v16 = (int *)NP_CONTEXT::NpLeafRefInternal(v15, v14, v13);
  if ( v16 )
  {
    v17 = 0;
    if ( v10 >= 0 )
    {
      v24 = v16[4];
      v28 = v24;
      v27 = a3;
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v27, &v28) >= 0 )
      {
LABEL_24:
        if ( a1 )
          v19 = (struct NP_CONTEXT::NP_CTX *)(a1 + 4);
        else
          v19 = 0LL;
        if ( **(_DWORD **)v19 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v19, v14);
        if ( v17 )
          goto LABEL_4;
        return 0LL;
      }
      *v12 = v24;
    }
    else
    {
      v18 = *v16;
      v28 = a3;
      v27 = v16[(unsigned __int16)v18 + 3];
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v27, &v28) >= 0 )
        goto LABEL_24;
      *v12 = a3;
    }
    v17 = 1;
    goto LABEL_24;
  }
  return 0xFFFFFFFFLL;
}
