/*
 * XREFs of ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1402603C4
 * Callers:
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x14026A3EC (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 * Callees:
 *     ?BTreeDescendToSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUPATH_ENTRY@1@KPEAUSEARCH_RESULT@1@@Z @ 0x140260DD8 (-BTreeDescendToSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x1402614D8 (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_.c)
 *     ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x1402644D0 (-Compare@ST_REGION_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402645DC (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140264698 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeChangeKey(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 *v6; // rdx
  int *v7; // r12
  __int64 v8; // r15
  int v9; // esi
  _DWORD *v11; // r14
  int v12; // esi
  unsigned int v13; // r8d
  void **v14; // r13
  int *v15; // rdx
  int v16; // r15d
  int v17; // eax
  int v18; // esi
  struct NP_CONTEXT::NP_CTX *v19; // rcx
  _BYTE v20[8]; // [rsp+20h] [rbp-10h] BYREF
  _DWORD *v21; // [rsp+28h] [rbp-8h]
  int v22; // [rsp+78h] [rbp+48h] BYREF
  int v23; // [rsp+80h] [rbp+50h] BYREF

  v22 = a3;
  v6 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v7 = (int *)v6[1];
  v8 = *v6;
  v23 = *v7;
  v9 = ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v22, &v23);
  if ( v9 <= 0 )
  {
    if ( (unsigned __int64)v7 > v8 + 16 )
    {
      if ( v9 )
      {
        v22 = *(v7 - 1);
        v23 = a3;
LABEL_4:
        if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v22, &v23) >= 0 )
          return 0LL;
        goto LABEL_33;
      }
      goto LABEL_33;
    }
  }
  else if ( (unsigned __int64)v7 < v8 + 4 * ((unsigned __int64)((unsigned int)(unsigned __int16)*(_DWORD *)v8 - 1) + 4) )
  {
    v23 = v7[1];
    v22 = a3;
    goto LABEL_4;
  }
  if ( (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                       a2,
                       v9 > 0,
                       v20) )
  {
    v11 = v21;
    if ( v9 <= 0 )
    {
      if ( v9 )
        goto LABEL_12;
      *v21 = a3;
    }
    else
    {
      v23 = *v21;
      v22 = a3;
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v22, &v23) >= 0 )
      {
LABEL_12:
        if ( v9 >= 0 && **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
        {
          v12 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
          v23 = v12;
          v22 = a3;
          if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v22, &v23) >= 0 )
            return 0LL;
          *v11 = v12;
          goto LABEL_33;
        }
        v14 = (void **)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDescendToSibling(
                         v20,
                         v9 > 0,
                         0LL);
        if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
          v15 = (int *)*v14;
        else
          v15 = (int *)NP_CONTEXT::NpLeafRefInternal(
                         (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0)),
                         v14,
                         v13);
        if ( !v15 )
          return 0xFFFFFFFFLL;
        v16 = 0;
        if ( v9 >= 0 )
        {
          v18 = v15[4];
          v23 = v18;
          v22 = a3;
          if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v22, &v23) >= 0 )
            goto LABEL_30;
          *v11 = v18;
        }
        else
        {
          v17 = *v15;
          v23 = a3;
          v22 = v15[(unsigned __int16)v17 + 3];
          if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v22, &v23) >= 0 )
            goto LABEL_30;
          *v11 = a3;
        }
        v16 = 1;
LABEL_30:
        v19 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
        if ( **(_DWORD **)v19 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v19, v14);
        if ( !v16 )
          return 0LL;
      }
    }
  }
LABEL_33:
  *v7 = a3;
  return 1LL;
}
