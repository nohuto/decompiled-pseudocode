/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140055BC8
 * Callers:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14001ED9C (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14002AEB8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14002B1F8 (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x140054FF0 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140055720 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1401215F0 (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140121970 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140249B6C (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14024ECBC (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 * Callees:
 *     SmArrayGrow @ 0x14003BA3C (SmArrayGrow.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebx
  __int64 v7; // rax
  int v8; // ebp
  unsigned int v9; // ecx
  unsigned int *v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // r9
  char v13; // r11
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  _DWORD *v16; // r10
  __int64 *v18; // r9

  v3 = 0;
  v5 = a2;
  if ( *(_DWORD *)(a3 + 24) == -1 )
    *(_QWORD *)(a3 + 8) = 0LL;
  else
    *(_DWORD *)(a3 + 24) = 0;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v8 = 0;
    v11 = (_QWORD *)(a3 + 8);
  }
  else
  {
    v7 = *a1;
    v8 = 1;
    v9 = 0;
    if ( v7 )
      v9 = *(unsigned __int8 *)(v7 + 2);
    v10 = (unsigned int *)(a3 + 28);
    if ( *v10 < v9 && !(unsigned int)SmArrayGrow(v9, a2, v10, (const void **)a3) )
      return (unsigned int)-1073741670;
    v11 = *(_QWORD **)a3;
  }
  v12 = *a1;
  if ( !*a1 )
  {
    if ( !v8 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
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
        if ( *(_DWORD *)(v12 + 16 * (((v15 + v14) >> 1) + 1LL)) > v5 )
          v15 = (v15 + v14) >> 1;
        else
          v14 = (v15 + v14) >> 1;
      }
      while ( v14 + 1 != v15 );
    }
    if ( v13 )
      break;
    if ( v8 )
    {
      *v11 = v12;
      v11[1] = v12 + 16 * (v15 + 1LL);
      v11 += 2;
    }
    if ( v15 )
      v18 = (__int64 *)(16LL * (v15 - 1) + v12 + 24);
    else
      v18 = (__int64 *)(v12 + 8);
    v12 = *v18;
  }
  *v11 = v12;
  v16 = (_DWORD *)(v12 + 8 * (v15 + 2LL));
  v11[1] = v16;
  if ( v8 )
    *(_DWORD *)(a3 + 24) = (((__int64)v11 - *(_QWORD *)a3) >> 4) + 1;
  if ( v15 >= (unsigned __int16)*(_DWORD *)v12 || *v16 != v5 )
    return (unsigned int)-1073741275;
  return v3;
}
