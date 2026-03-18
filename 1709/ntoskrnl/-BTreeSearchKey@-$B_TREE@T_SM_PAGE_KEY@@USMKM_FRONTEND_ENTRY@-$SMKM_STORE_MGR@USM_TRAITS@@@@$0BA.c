/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14017D098
 * Callers:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14000429C (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x1402659F4 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140265D68 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14026652C (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14026668C (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14026699C (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140266EC0 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14027485C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140274BC4 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SmArrayGrow @ 0x140271A84 (SmArrayGrow.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  int v7; // ebp
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // r8
  __int64 v12; // r9
  char v13; // r14
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  __int64 *v16; // r9
  unsigned int *v17; // r10

  v3 = 0;
  v5 = a2;
  if ( *(_DWORD *)(a3 + 24) == -1 )
    *(_QWORD *)(a3 + 8) = 0LL;
  else
    *(_DWORD *)(a3 + 24) = 0;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v7 = 0;
    v8 = (_QWORD *)(a3 + 8);
  }
  else
  {
    v9 = *a1;
    v7 = 1;
    v10 = 0LL;
    if ( v9 )
      v10 = *(unsigned __int8 *)(v9 + 2);
    v11 = (_DWORD *)(a3 + 28);
    if ( *v11 < (unsigned int)v10 && !(unsigned int)SmArrayGrow(v10, a2, v11, a3) )
      return (unsigned int)-1073741670;
    v8 = *(_QWORD **)a3;
  }
  v12 = *a1;
  if ( !*a1 )
  {
    if ( !v7 )
    {
      *v8 = 0LL;
      v8[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    v13 = *(_BYTE *)(v12 + 3);
    v14 = -1;
    v15 = (unsigned __int16)*(_DWORD *)v12;
    if ( v13 )
    {
      if ( (unsigned __int16)*(_DWORD *)v12 )
      {
        do
        {
          if ( *(_DWORD *)(v12 + 8LL * ((v15 + v14) >> 1) + 16) >= v5 )
            v15 = (v15 + v14) >> 1;
          else
            v14 = (v15 + v14) >> 1;
        }
        while ( v14 + 1 != v15 );
      }
    }
    else if ( (unsigned __int16)*(_DWORD *)v12 )
    {
      do
      {
        if ( *(_DWORD *)(v12 + 16 * (((v15 + v14) >> 1) + 1LL)) <= v5 )
          v14 = (v15 + v14) >> 1;
        else
          v15 = (v15 + v14) >> 1;
      }
      while ( v14 + 1 != v15 );
    }
    if ( v13 )
      break;
    if ( v7 )
    {
      *v8 = v12;
      v8[1] = v12 + 16 * (v15 + 1LL);
      v8 += 2;
    }
    if ( v15 )
      v16 = (__int64 *)(16LL * (v15 - 1) + v12 + 24);
    else
      v16 = (__int64 *)(v12 + 8);
    v12 = *v16;
  }
  *v8 = v12;
  v17 = (unsigned int *)(v12 + 8 * (v15 + 2LL));
  v8[1] = v17;
  if ( v7 )
    *(_DWORD *)(a3 + 24) = (((__int64)v8 - *(_QWORD *)a3) >> 4) + 1;
  if ( v15 >= (unsigned __int16)*(_DWORD *)v12 || *v17 < v5 || *v17 != v5 )
    return (unsigned int)-1073741275;
  return v3;
}
