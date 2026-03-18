/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400955CC
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14009263C (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x140095200 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?BTreeDelete@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140148AB8 (-BTreeDelete@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14014C1CC (-BTreeMergeNodes@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 * Callees:
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x140096430 (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400C9B68 (-BTreeRedistribute@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_.c)
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14014C1CC (-BTreeMergeNodes@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14014C314 (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402A2620 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1402A26DC (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402A2760 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 *v4; // rdi
  unsigned int v5; // ebx
  _DWORD *v6; // r14
  unsigned __int64 v7; // rcx
  int v8; // edx
  const void *v9; // r9
  unsigned int v10; // esi
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  char *v13; // r13
  _DWORD *v14; // rcx
  _DWORD *v15; // rdi
  _DWORD **v17; // rdi
  __int64 v18; // rsi
  unsigned int v19; // ecx
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  void **v22; // rdx
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  char v29[8]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v30; // [rsp+28h] [rbp-30h]
  unsigned int v31; // [rsp+60h] [rbp+8h]

  v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = 0;
  v6 = (_DWORD *)*v4;
  v7 = v4[1];
  v8 = *(_DWORD *)*v4;
  if ( *(_BYTE *)(*v4 + 3) )
  {
    v9 = (const void *)(v7 + 4);
    v10 = 510;
    v11 = 4LL * (unsigned __int16)v8 + 12;
  }
  else
  {
    v9 = (const void *)(v7 + 16);
    v11 = 16LL * (unsigned __int16)v8;
    v10 = 127;
  }
  v12 = v11 - v7;
  v31 = v10;
  v13 = (char *)v6 + v12;
  if ( (_DWORD *)((char *)v6 + v12) )
  {
    memmove((void *)v4[1], v9, (size_t)v6 + v12);
    LOWORD(v8) = *(_WORD *)v6;
  }
  *(_WORD *)v6 = v8 - 1;
  if ( *((_BYTE *)v6 + 3) )
    --*(_QWORD *)(a1 + 8);
  if ( *(_DWORD **)a1 == v6 )
  {
    if ( !(unsigned __int16)*v6 && !HIBYTE(*v6) )
    {
      memmove(v4, v4 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      v17 = (_DWORD **)(a1 + 16);
      --*(_DWORD *)(a2 + 24);
      if ( **(_DWORD **)(a1 + 16) == -1 || *((_BYTE *)v6 + 2) != 2 )
      {
        *(_QWORD *)a1 = *((_QWORD *)v6 + 1);
      }
      else
      {
        *(_QWORD *)a1 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v6 + 1, 1u);
        if ( **v17 != -1 )
        {
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v6 + 1);
          if ( **v17 != -1 )
          {
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v6 + 1);
            if ( **v17 != -1 )
              NP_CONTEXT::NpLeafRemoveInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v6 + 1);
          }
        }
      }
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
        a1,
        v6);
    }
  }
  else
  {
    if ( (unsigned __int16)*v6 < v10 )
    {
      v18 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2);
      if ( !v18 )
        return (unsigned int)-1073741818;
      v19 = (unsigned __int16)*v6;
      if ( v19 < v31 )
      {
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeMergeNodes(
          a1,
          a2,
          v18);
        v4 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v18 & 1) != 0 )
        {
          v23 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
          *v4 = v23;
          v24 = (unsigned __int16)*(_DWORD *)v23;
          if ( *(_BYTE *)(v23 + 3) )
            v25 = 4 * v24 + 16;
          else
            v25 = 16 * (v24 + 1);
          v4[1] = v23 + v25 - (_QWORD)v13;
        }
      }
      else
      {
        if ( (v18 & 1) != 0 )
        {
          v26 = v19 - v31 + 1;
          v27 = v4[1];
          if ( HIBYTE(*v6) )
            v28 = v27 + 4 * v26;
          else
            v28 = v27 + 16 * v26;
          v4[1] = v28;
        }
        if ( *((_BYTE *)v6 + 3) )
        {
          v20 = *(v4 - 2);
          v21 = *(v4 - 1) - 16;
          if ( (v18 & 1) == 0 )
            v21 = *(v4 - 1) + 16;
          if ( v21 <= v20 + 16 )
            v22 = (void **)(v20 + 8);
          else
            v22 = (void **)(v21 - 8);
          if ( **(_DWORD **)(a1 + 16) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v22);
        }
      }
    }
    v14 = (_DWORD *)*v4;
    v15 = (_DWORD *)v4[1];
    if ( v15 == v14 + 4
      && *((_BYTE *)v14 + 3)
      && (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                         a2,
                         0LL,
                         v29,
                         v9) )
    {
      *v30 = *v15;
    }
  }
  return v5;
}
