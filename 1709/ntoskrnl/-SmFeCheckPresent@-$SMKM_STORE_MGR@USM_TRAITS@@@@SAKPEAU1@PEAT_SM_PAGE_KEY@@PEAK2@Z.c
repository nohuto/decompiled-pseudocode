/*
 * XREFs of ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14026652C
 * Callers:
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x140266DD8 (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14017D098 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140262520 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(__int64 a1, unsigned int *a2, unsigned int *a3, int *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // r12d
  unsigned int v8; // esi
  int v9; // r15d
  int v10; // r14d
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  _QWORD v20[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v21[5]; // [rsp+40h] [rbp-C0h] BYREF
  char v22; // [rsp+68h] [rbp-98h] BYREF

  v4 = *a2;
  memset(v21, 0, sizeof(v21));
  LODWORD(v21[4]) |= 1u;
  v21[3] = 0x800000000LL;
  v21[0] = &v22;
  v7 = 1024;
  v18 = *a3;
  v8 = 0;
  v9 = 1024;
  v10 = 0;
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
    (__int64 *)(a1 + 448),
    v4,
    (__int64)v21);
  B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
    v11,
    v20,
    (__int64)v21);
  v12 = v20[1];
  v13 = v20[0];
  while ( v13 )
  {
    v12 += 8LL;
    if ( v12 >= v13 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v13 + 2) )
    {
      v14 = *(_QWORD *)(v13 + 8);
      if ( !v14 )
      {
        v15 = 0LL;
        goto LABEL_8;
      }
      v13 = *(_QWORD *)(v13 + 8);
      v12 = v14 + 16;
    }
    v15 = v12;
LABEL_8:
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
      v10 = 1;
    if ( v8 )
    {
      if ( v9 != *(unsigned __int16 *)(v15 + 4) )
        break;
    }
    else
    {
      v9 = *(unsigned __int16 *)(v15 + 4);
    }
    if ( ++v8 >= v18 )
      break;
    ++v4;
  }
  if ( v8 )
  {
    v7 = v9;
    *a3 = v8;
    *a4 = v10;
  }
  return v7;
}
