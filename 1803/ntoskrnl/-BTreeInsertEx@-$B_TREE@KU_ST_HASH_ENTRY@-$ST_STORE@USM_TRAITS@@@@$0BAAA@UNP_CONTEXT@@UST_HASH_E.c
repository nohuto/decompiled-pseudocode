/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1400929AC
 * Callers:
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14009263C (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400CA7BC (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 * Callees:
 *     SmArrayGrow @ 0x14009A7F4 (SmArrayGrow.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400CA7BC (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1400CA9DC (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400CBE8C (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402A2620 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeInsertEx(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  unsigned int *v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rsi
  unsigned int *v11; // rdi
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // r12d
  _DWORD *v15; // rsi
  __int64 v17; // rbp
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // r8
  unsigned __int64 v22; // r10
  unsigned int v23; // eax
  int v24; // edx
  __int64 v25; // rdx
  void **v26; // rdx
  __int64 v27; // rdx
  void **v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // eax
  int v31; // ebp
  unsigned int *v32; // r8
  int v33; // r11d
  unsigned int *v34; // rax
  __int64 v35; // rax

  v3 = *(unsigned int **)a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *((unsigned __int8 *)v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v10 = *(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1);
  }
  else
  {
    v35 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            1LL,
            1LL);
    *(_QWORD *)a1 = v35;
    if ( !v35 )
      return (unsigned int)-1073741670;
    v10 = *(_QWORD *)a2;
    *(_QWORD *)v10 = v35;
    *(_QWORD *)(v10 + 8) = *(_QWORD *)a1 + 16LL;
    ++*(_DWORD *)(a2 + 24);
  }
  v11 = *(unsigned int **)v10;
  v12 = **(_DWORD **)v10;
  v13 = HIBYTE(v12);
  v14 = *(_BYTE *)(*(_QWORD *)v10 + 3LL) != 0 ? 1020 : 255;
  if ( (unsigned __int16)v12 >= v14 )
  {
    v17 = *(_QWORD *)(v10 + 8) - (_QWORD)v11 - 16LL;
    if ( *(_BYTE *)(*(_QWORD *)v10 + 3LL) )
      v18 = v17 >> 2;
    else
      v18 = v17 >> 4;
    if ( v11 == *(unsigned int **)a1 )
    {
      v22 = 0LL;
      v21 = 0LL;
      v20 = 0LL;
    }
    else
    {
      v19 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2);
      v20 = *(_QWORD *)(v10 - 8);
      v12 = *v11;
      v21 = v19;
      v22 = v20 + 32LL * ((v19 & 1) == 0) - 16;
    }
    v23 = HIBYTE(v12);
    if ( (unsigned __int16)v12 < v14 )
    {
      if ( (v21 & 1) != 0 )
      {
        v32 = (unsigned int *)(v21 & 0xFFFFFFFFFFFFFFFEuLL);
        v24 = v18 + (unsigned __int16)v12 - v14;
        v33 = v24;
        if ( (_BYTE)v23 )
        {
          if ( v24 <= 0 )
            v24 += (unsigned __int16)*v32;
          v34 = v32;
          if ( v33 > 0 )
            v34 = v11;
          v11 = v34;
        }
        else if ( v24 < 0 )
        {
          v11 = v32;
          v24 += (unsigned __int16)*v32 + 1;
        }
        if ( v11 == v32 )
          *(_QWORD *)(v10 - 8) = v22;
        else
          v20 = v22;
        goto LABEL_20;
      }
      if ( (int)v18 <= (unsigned __int16)v12 )
      {
        v20 = v22;
LABEL_19:
        v24 = v18;
LABEL_20:
        *(_QWORD *)v10 = v11;
        if ( *((_BYTE *)v11 + 3) )
        {
          *(_QWORD *)(v10 + 8) = &v11[v24 + 4];
          v25 = *(_QWORD *)(v10 - 16);
          if ( v20 <= v25 + 16 )
            v26 = (void **)(v25 + 8);
          else
            v26 = (void **)(v20 - 8);
          if ( **(_DWORD **)(a1 + 16) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v26);
        }
        else
        {
          *(_QWORD *)(v10 + 8) = &v11[4 * v24 + 4];
        }
        v12 = *v11;
        LOBYTE(v13) = *((_BYTE *)v11 + 3);
        goto LABEL_7;
      }
      v31 = v18 - (unsigned __int16)v12;
      *(_QWORD *)(v10 - 8) = v22;
      v11 = (unsigned int *)v21;
      goto LABEL_35;
    }
    if ( v21 && HIBYTE(v12) )
    {
      v27 = *(_QWORD *)(v10 - 16);
      v28 = (void **)(v22 <= v27 + 16 ? v27 + 8 : v22 - 8);
      if ( **(_DWORD **)(a1 + 16) != -1 )
        NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v28);
    }
    v29 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSplitChild(
            a1,
            a2);
    if ( v29 )
    {
      v30 = *v11;
      v10 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
      v20 = *(_QWORD *)(v10 - 8);
      if ( (int)v18 <= (unsigned __int16)*v11 )
      {
        v20 += 16LL;
        goto LABEL_19;
      }
      v31 = v18 - (unsigned __int16)*v11;
      *(_QWORD *)(v10 - 8) = v20 + 16;
      v23 = HIBYTE(v30);
      v11 = (unsigned int *)v29;
LABEL_35:
      v24 = v31 - 1;
      if ( (_BYTE)v23 )
        v24 = v31;
      goto LABEL_20;
    }
    return (unsigned int)-1073741670;
  }
LABEL_7:
  v15 = *(_DWORD **)(v10 + 8);
  if ( (_BYTE)v13 )
  {
    memmove(v15 + 1, v15, (size_t)v11 + 4LL * (unsigned __int16)v12 + 16 - (_QWORD)v15);
    *v15 = *a3;
    ++*(_QWORD *)(a1 + 8);
  }
  else
  {
    memmove(v15 + 4, v15, (size_t)v11 + 16 * ((unsigned __int16)v12 + 1LL) - (_QWORD)v15);
    *(_OWORD *)v15 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v11;
  return v4;
}
