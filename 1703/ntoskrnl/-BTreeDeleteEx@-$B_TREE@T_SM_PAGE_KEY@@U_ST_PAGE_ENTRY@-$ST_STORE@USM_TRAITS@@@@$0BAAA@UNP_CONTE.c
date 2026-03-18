/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005BF00
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14005859C (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14005B2AC (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14013BAD8 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14003587C (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x14003B83C (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x14003C49C (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x14013BAD8 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140249440 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1402494FC (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140249580 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 *v5; // rbx
  _DWORD *v6; // rsi
  int v7; // eax
  unsigned __int64 v8; // rdx
  unsigned int v9; // r12d
  size_t v10; // rbp
  const void *v11; // rdx
  int v12; // eax
  _DWORD *v13; // rcx
  _DWORD *v14; // rbx
  unsigned __int64 v16; // r14
  unsigned int v17; // eax
  int v18; // r14d
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  void **v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r14
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  _DWORD **v28; // rbx
  char v29[8]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v30; // [rsp+28h] [rbp-30h]

  v2 = 0;
  v5 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v6 = (_DWORD *)*v5;
  v7 = *(_DWORD *)*v5;
  if ( *(_BYTE *)(*v5 + 3) )
  {
    v8 = v5[1];
    v9 = 255;
    v10 = (size_t)v6 + 8LL * (unsigned __int16)v7 + 8 - v8;
    v11 = (const void *)(v8 + 8);
  }
  else
  {
    v22 = v5[1];
    v9 = 127;
    v10 = (size_t)v6 + 16LL * (unsigned __int16)v7 - v22;
    v11 = (const void *)(v22 + 16);
  }
  if ( v10 )
    memmove((void *)v5[1], v11, v10);
  --*(_WORD *)v6;
  if ( *((_BYTE *)v6 + 3) )
    --*((_QWORD *)a1 + 1);
  v12 = *v6;
  if ( *(_DWORD **)a1 == v6 )
  {
    if ( !(_WORD)v12 && !*((_BYTE *)v6 + 3) )
    {
      memmove(v5, v5 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      v28 = (_DWORD **)((char *)a1 + 16);
      --*(_DWORD *)(a2 + 24);
      if ( **((_DWORD **)a1 + 2) == -1 || *((_BYTE *)v6 + 2) != 2 )
      {
        *(_QWORD *)a1 = *((_QWORD *)v6 + 1);
      }
      else
      {
        *(_QWORD *)a1 = NP_CONTEXT::NpLeafRefInternal(
                          (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16),
                          (void **)v6 + 1,
                          1u);
        if ( **v28 != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), (void **)v6 + 1);
        if ( **v28 != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), (void **)v6 + 1);
        if ( **v28 != -1 )
          NP_CONTEXT::NpLeafRemoveInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), (void **)v6 + 1);
      }
      NP_CONTEXT::NpNodeFree((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v6, *((unsigned __int8 *)v6 + 3));
    }
  }
  else
  {
    if ( (unsigned __int16)v12 < v9 )
    {
      v16 = (unsigned __int64)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
                                a1,
                                a2);
      if ( !v16 )
        return (unsigned int)-1073741818;
      v17 = (unsigned __int16)*v6;
      if ( v17 < v9 )
      {
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeMergeNodes(a1);
        v5 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v16 & 1) != 0 )
        {
          v23 = v16 & 0xFFFFFFFFFFFFFFFEuLL;
          *v5 = v23;
          v24 = *(_DWORD *)v23;
          if ( *(_BYTE *)(v23 + 3) )
            v25 = 8LL * (unsigned __int16)v24 + 16;
          else
            v25 = 16 * ((unsigned __int16)v24 + 1LL);
          v5[1] = v23 + v25 - v10;
        }
      }
      else
      {
        v18 = v16 & 1;
        if ( v18 )
        {
          v26 = v17 - v9 + 1;
          if ( *((_BYTE *)v6 + 3) )
            v27 = 8 * v26;
          else
            v27 = 16 * v26;
          v5[1] += v27;
        }
        if ( *((_BYTE *)v6 + 3) )
        {
          v19 = *(v5 - 1) + 16;
          if ( v18 )
            v19 = *(v5 - 1) - 16;
          v20 = *(v5 - 2);
          if ( v19 <= v20 + 16 )
            v21 = (void **)(v20 + 8);
          else
            v21 = (void **)(v19 - 8);
          if ( **((_DWORD **)a1 + 2) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v21);
        }
      }
    }
    v13 = (_DWORD *)*v5;
    v14 = (_DWORD *)v5[1];
    if ( v14 == v13 + 4
      && *((_BYTE *)v13 + 3)
      && (unsigned int)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                         a2,
                         0,
                         (__int64)v29) )
    {
      *v30 = *v14;
    }
  }
  return v2;
}
