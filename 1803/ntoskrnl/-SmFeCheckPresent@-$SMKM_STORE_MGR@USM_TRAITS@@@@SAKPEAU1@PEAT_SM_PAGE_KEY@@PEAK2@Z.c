/*
 * XREFs of ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140152F2C
 * Callers:
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x140152E44 (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 * Callees:
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14008F3EC (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14008F424 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(__int64 a1, unsigned int *a2, unsigned int *a3, int *a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // r15d
  unsigned int v9; // esi
  int v10; // r14d
  int v11; // ebp
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-128h]
  _QWORD v20[3]; // [rsp+28h] [rbp-120h] BYREF
  _QWORD v21[5]; // [rsp+40h] [rbp-108h] BYREF
  char v22; // [rsp+68h] [rbp-E0h] BYREF

  v4 = *a2;
  memset(v21, 0, sizeof(v21));
  v21[3] = 0x800000000LL;
  v21[0] = &v22;
  v8 = 1024;
  v19 = *a3;
  LODWORD(v21[4]) = 1;
  v9 = 0;
  v10 = 1024;
  v11 = 0;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    a1 + 448,
    v4,
    (__int64)v21);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
    v12,
    v20,
    (__int64)v21);
  v13 = v20[1];
  v14 = v20[0];
  while ( v14 )
  {
    v13 += 8LL;
    if ( v13 >= v14 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v14 + 2) )
    {
      v18 = *(_QWORD *)(v14 + 8);
      if ( v18 )
      {
        v14 = *(_QWORD *)(v14 + 8);
        v13 = v18 + 16;
      }
      v15 = (v18 + 16) & -(__int64)(v18 != 0);
    }
    else
    {
      v15 = v13;
    }
    if ( !v15 )
      break;
    if ( v4 < *(_DWORD *)v15 )
      break;
    if ( (*(_BYTE *)(v15 + 7) & 1) != 0 )
      break;
    v16 = *(unsigned __int8 *)(v15 + 6);
    if ( v16 != 3 && v16 != 1 )
      break;
    if ( v16 == 1 )
      v11 = 1;
    if ( v9 )
    {
      if ( v10 != *(unsigned __int16 *)(v15 + 4) )
        break;
    }
    else
    {
      v10 = *(unsigned __int16 *)(v15 + 4);
    }
    if ( ++v9 >= v19 )
      break;
    ++v4;
  }
  if ( v9 )
  {
    *a3 = v9;
    v8 = v10;
    *a4 = v11;
  }
  return v8;
}
