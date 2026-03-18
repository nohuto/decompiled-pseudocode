/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140260650
 * Callers:
 *     ?BTreeDelete@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140260618 (-BTreeDelete@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140262700 (-BTreeMergeNodes@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14026DBDC (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14026FB00 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140260D58 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x1402614D8 (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_.c)
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x140262700 (-BTreeMergeNodes@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140262E6C (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402645DC (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140264698 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x14026471C (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int64 *v6; // rbx
  _DWORD *v7; // rsi
  int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r12d
  const void *v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  char *v14; // rbp
  int v15; // eax
  _DWORD **v16; // rbx
  __int64 v17; // r14
  unsigned int v18; // eax
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  void **v24; // rdx
  unsigned __int64 v25; // r14
  int v26; // eax
  __int64 v27; // rcx
  _DWORD *v28; // rcx
  _DWORD *v29; // rbx
  char v31[8]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v32; // [rsp+28h] [rbp-30h]

  v3 = 0;
  v6 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v7 = (_DWORD *)*v6;
  v8 = *(_DWORD *)*v6;
  if ( *(_BYTE *)(*v6 + 3) )
  {
    v9 = v6[1];
    v10 = 510;
    v11 = (const void *)(v9 + 4);
    v12 = 4LL * (unsigned __int16)v8 + 12 - v9;
  }
  else
  {
    v13 = v6[1];
    v10 = 127;
    v12 = 16LL * (unsigned __int16)v8 - v13;
    v11 = (const void *)(v13 + 16);
  }
  v14 = (char *)v7 + v12;
  if ( (_DWORD *)((char *)v7 + v12) )
    memmove((void *)v6[1], v11, (size_t)v7 + v12);
  --*(_WORD *)v7;
  if ( *((_BYTE *)v7 + 3) )
    --*(_QWORD *)(a1 + 8);
  v15 = *v7;
  if ( *(_DWORD **)a1 == v7 )
  {
    if ( !(_WORD)v15 && !*((_BYTE *)v7 + 3) )
    {
      memmove(v6, v6 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      v16 = (_DWORD **)(a1 + 16);
      --*(_DWORD *)(a2 + 24);
      if ( **(_DWORD **)(a1 + 16) == -1 || *((_BYTE *)v7 + 2) != 2 )
      {
        *(_QWORD *)a1 = *((_QWORD *)v7 + 1);
      }
      else
      {
        *(_QWORD *)a1 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1, 1u);
        if ( **v16 != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1);
        if ( **v16 != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1);
        if ( **v16 != -1 )
          NP_CONTEXT::NpLeafRemoveInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1);
      }
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
        a1,
        v7);
    }
  }
  else
  {
    if ( (unsigned __int16)v15 < v10 )
    {
      v17 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2,
              a3,
              v11);
      if ( !v17 )
        return (unsigned int)-1073741818;
      v18 = (unsigned __int16)*v7;
      if ( v18 < v10 )
      {
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeMergeNodes(
          a1,
          a2,
          v17);
        v6 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v17 & 1) != 0 )
        {
          v25 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
          *v6 = v25;
          v26 = *(_DWORD *)v25;
          if ( *(_BYTE *)(v25 + 3) )
            v27 = 4LL * (unsigned __int16)v26 + 16;
          else
            v27 = 16 * ((unsigned __int16)v26 + 1LL);
          v6[1] = v25 + v27 - (_QWORD)v14;
        }
      }
      else
      {
        v19 = v17 & 1;
        if ( v19 )
        {
          v20 = v18 - v10 + 1;
          if ( *((_BYTE *)v7 + 3) )
            v21 = 4 * v20;
          else
            v21 = 16 * v20;
          v6[1] += v21;
        }
        if ( *((_BYTE *)v7 + 3) )
        {
          v22 = *(v6 - 2);
          v23 = *(v6 - 1) - 16;
          if ( !v19 )
            v23 = *(v6 - 1) + 16;
          if ( v23 <= v22 + 16 )
            v24 = (void **)(v22 + 8);
          else
            v24 = (void **)(v23 - 8);
          if ( **(_DWORD **)(a1 + 16) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v24);
        }
      }
    }
    v28 = (_DWORD *)*v6;
    v29 = (_DWORD *)v6[1];
    if ( v29 == v28 + 4
      && *((_BYTE *)v28 + 3)
      && (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                         a2,
                         0LL,
                         v31) )
    {
      *v32 = *v29;
    }
  }
  return v3;
}
