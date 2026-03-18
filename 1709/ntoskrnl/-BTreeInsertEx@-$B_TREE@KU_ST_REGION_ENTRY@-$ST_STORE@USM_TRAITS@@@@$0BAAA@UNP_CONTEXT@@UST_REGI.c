/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1402615A8
 * Callers:
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x140261550 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140263B60 (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14026FB00 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140262AD8 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140262E6C (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140263B60 (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402645DC (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     SmArrayGrow @ 0x140271A84 (SmArrayGrow.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  _DWORD *v4; // rax
  unsigned int v5; // edi
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 *v13; // rbx
  _DWORD *v14; // rsi
  unsigned int v15; // r12d
  __int64 v16; // rbp
  __int64 v17; // rbp
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  __int64 v20; // r8
  unsigned __int64 v21; // r10
  int v22; // edx
  _DWORD *v23; // r8
  int v24; // edx
  int v25; // ebp
  bool v26; // zf
  __int64 v27; // rdx
  void **v28; // rdx
  __int64 v29; // rdx
  int v30; // eax
  char v31; // cl
  __int64 v32; // rdx
  void **v33; // rdx
  _DWORD *v34; // rbx
  int v35; // eax

  v4 = *(_DWORD **)a1;
  v5 = 0;
  v9 = 0LL;
  if ( v4 )
    v9 = *((unsigned __int8 *)v4 + 2);
  v10 = *(_DWORD *)(a2 + 24);
  v11 = a2 + 28;
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v9 && !(unsigned int)SmArrayGrow(v9, a2, v11, a2) )
    return (unsigned int)-1073741670;
  if ( v10 )
  {
    v13 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v10 - 1));
  }
  else
  {
    v12 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            1LL,
            1LL);
    *(_QWORD *)a1 = v12;
    if ( !v12 )
      return (unsigned int)-1073741670;
    v13 = *(__int64 **)a2;
    *v13 = v12;
    v13[1] = *(_QWORD *)a1 + 16LL;
    ++*(_DWORD *)(a2 + 24);
  }
  v14 = (_DWORD *)*v13;
  v15 = *(_BYTE *)(*v13 + 3) != 0 ? 1020 : 255;
  if ( (unsigned __int16)*(_DWORD *)*v13 >= v15 )
  {
    v16 = v13[1] - (_QWORD)v14 - 16;
    if ( *(_BYTE *)(*v13 + 3) )
      v17 = v16 >> 2;
    else
      v17 = v16 >> 4;
    if ( v14 == *(_DWORD **)a1 )
    {
      v21 = 0LL;
      v20 = 0LL;
      v19 = 0LL;
    }
    else
    {
      v18 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2,
              v11,
              a4);
      v19 = *(v13 - 1);
      v20 = v18;
      v21 = v19 + 32LL * ((v18 & 1) == 0) - 16;
    }
    v22 = (unsigned __int16)*v14;
    if ( v22 < v15 )
    {
      if ( (v20 & 1) != 0 )
      {
        v23 = (_DWORD *)(v20 & 0xFFFFFFFFFFFFFFFEuLL);
        v24 = v17 + v22 - v15;
        if ( *((_BYTE *)v14 + 3) )
        {
          if ( v24 > 0 )
            goto LABEL_25;
        }
        else
        {
          if ( v24 >= 0 )
            goto LABEL_25;
          ++v24;
        }
        v14 = v23;
        v24 += (unsigned __int16)*v23;
LABEL_25:
        if ( v14 == v23 )
          *(v13 - 1) = v21;
        else
          v19 = v21;
LABEL_46:
        *v13 = (__int64)v14;
        if ( *((_BYTE *)v14 + 3) )
        {
          v13[1] = (__int64)&v14[v24 + 4];
          v32 = *(v13 - 2);
          if ( v19 <= v32 + 16 )
            v33 = (void **)(v32 + 8);
          else
            v33 = (void **)(v19 - 8);
          if ( **(_DWORD **)(a1 + 16) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v33);
        }
        else
        {
          v13[1] = (__int64)&v14[4 * v24 + 4];
        }
        goto LABEL_52;
      }
      if ( (int)v17 > v22 )
      {
        v25 = v17 - v22;
        v26 = *((_BYTE *)v14 + 3) == 0;
        *(v13 - 1) = v21;
        v14 = (_DWORD *)v20;
        goto LABEL_41;
      }
      v19 = v21;
      goto LABEL_45;
    }
    if ( v20 && *((_BYTE *)v14 + 3) )
    {
      v27 = *(v13 - 2);
      v28 = (void **)(v21 <= v27 + 16 ? v27 + 8 : v21 - 8);
      if ( **(_DWORD **)(a1 + 16) != -1 )
        NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v28);
    }
    v29 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSplitChild(
            a1,
            a2,
            v20,
            v19);
    if ( v29 )
    {
      v13 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v30 = (unsigned __int16)*v14;
      v19 = *(v13 - 1);
      if ( (int)v17 > v30 )
      {
        v31 = *((_BYTE *)v14 + 3);
        v25 = v17 - v30;
        v14 = (_DWORD *)v29;
        *(v13 - 1) = v19 + 16;
        v26 = v31 == 0;
LABEL_41:
        v24 = v25 - 1;
        if ( !v26 )
          v24 = v25;
        goto LABEL_46;
      }
      v19 += 16LL;
LABEL_45:
      v24 = v17;
      goto LABEL_46;
    }
    return (unsigned int)-1073741670;
  }
LABEL_52:
  v34 = (_DWORD *)v13[1];
  v35 = *v14;
  if ( *((_BYTE *)v14 + 3) )
  {
    memmove(v34 + 1, v34, (size_t)v14 + 4LL * (unsigned __int16)v35 + 16 - (_QWORD)v34);
    *v34 = *a3;
    ++*(_QWORD *)(a1 + 8);
  }
  else
  {
    memmove(v34 + 4, v34, (size_t)v14 + 16 * ((unsigned __int16)v35 + 1LL) - (_QWORD)v34);
    *(_OWORD *)v34 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v14;
  return v5;
}
