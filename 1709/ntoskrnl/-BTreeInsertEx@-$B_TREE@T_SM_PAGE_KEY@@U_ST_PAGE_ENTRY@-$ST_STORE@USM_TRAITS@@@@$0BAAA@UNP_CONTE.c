/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140261ADC
 * Callers:
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140263FC0 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14026FB00 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140262AD8 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140263374 (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140263FC0 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1402645DC (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     SmArrayGrow @ 0x140271A84 (SmArrayGrow.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _DWORD *v3; // rax
  unsigned int v4; // edi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rax
  __int64 *v11; // rbx
  _DWORD *v12; // rsi
  unsigned int v13; // r12d
  __int64 v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // rax
  unsigned __int64 v17; // r9
  __int64 v18; // r8
  unsigned __int64 v19; // r10
  int v20; // edx
  _DWORD *v21; // r8
  int v22; // edx
  int v23; // ebp
  bool v24; // zf
  __int64 v25; // rdx
  void **v26; // rdx
  __int64 v27; // rdx
  int v28; // eax
  char v29; // cl
  __int64 v30; // rdx
  void **v31; // rdx
  _QWORD *v32; // rbx
  int v33; // eax

  v3 = *(_DWORD **)a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *((unsigned __int8 *)v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v11 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1));
  }
  else
  {
    v10 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            1LL,
            1LL);
    *(_QWORD *)a1 = v10;
    if ( !v10 )
      return (unsigned int)-1073741670;
    v11 = *(__int64 **)a2;
    *v11 = v10;
    v11[1] = *(_QWORD *)a1 + 16LL;
    ++*(_DWORD *)(a2 + 24);
  }
  v12 = (_DWORD *)*v11;
  v13 = (unsigned __int8)-(*(_BYTE *)(*v11 + 3) != 0) + 255;
  if ( (unsigned __int16)*(_DWORD *)*v11 >= v13 )
  {
    v14 = v11[1] - (_QWORD)v12 - 16;
    if ( *(_BYTE *)(*v11 + 3) )
      v15 = v14 >> 3;
    else
      v15 = v14 >> 4;
    if ( v12 == *(_DWORD **)a1 )
    {
      v19 = 0LL;
      v18 = 0LL;
      v17 = 0LL;
    }
    else
    {
      v16 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
              a1,
              a2);
      v17 = *(v11 - 1);
      v18 = v16;
      v19 = v17 + 32LL * ((v16 & 1) == 0) - 16;
    }
    v20 = (unsigned __int16)*v12;
    if ( v20 < v13 )
    {
      if ( (v18 & 1) != 0 )
      {
        v21 = (_DWORD *)(v18 & 0xFFFFFFFFFFFFFFFEuLL);
        v22 = v15 + v20 - v13;
        if ( *((_BYTE *)v12 + 3) )
        {
          if ( v22 > 0 )
            goto LABEL_25;
        }
        else
        {
          if ( v22 >= 0 )
            goto LABEL_25;
          ++v22;
        }
        v12 = v21;
        v22 += (unsigned __int16)*v21;
LABEL_25:
        if ( v12 == v21 )
          *(v11 - 1) = v19;
        else
          v17 = v19;
LABEL_46:
        *v11 = (__int64)v12;
        if ( *((_BYTE *)v12 + 3) )
        {
          v11[1] = (__int64)&v12[2 * v22 + 4];
          v30 = *(v11 - 2);
          if ( v17 <= v30 + 16 )
            v31 = (void **)(v30 + 8);
          else
            v31 = (void **)(v17 - 8);
          if ( **(_DWORD **)(a1 + 16) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v31);
        }
        else
        {
          v11[1] = (__int64)&v12[4 * v22 + 4];
        }
        goto LABEL_52;
      }
      if ( (int)v15 > v20 )
      {
        v23 = v15 - v20;
        v24 = *((_BYTE *)v12 + 3) == 0;
        *(v11 - 1) = v19;
        v12 = (_DWORD *)v18;
        goto LABEL_41;
      }
      v17 = v19;
      goto LABEL_45;
    }
    if ( v18 && *((_BYTE *)v12 + 3) )
    {
      v25 = *(v11 - 2);
      v26 = (void **)(v19 <= v25 + 16 ? v25 + 8 : v19 - 8);
      if ( **(_DWORD **)(a1 + 16) != -1 )
        NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v26);
    }
    v27 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
            a1,
            a2,
            v18,
            v17);
    if ( v27 )
    {
      v11 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v28 = (unsigned __int16)*v12;
      v17 = *(v11 - 1);
      if ( (int)v15 > v28 )
      {
        v29 = *((_BYTE *)v12 + 3);
        v23 = v15 - v28;
        v12 = (_DWORD *)v27;
        *(v11 - 1) = v17 + 16;
        v24 = v29 == 0;
LABEL_41:
        v22 = v23 - 1;
        if ( !v24 )
          v22 = v23;
        goto LABEL_46;
      }
      v17 += 16LL;
LABEL_45:
      v22 = v15;
      goto LABEL_46;
    }
    return (unsigned int)-1073741670;
  }
LABEL_52:
  v32 = (_QWORD *)v11[1];
  v33 = *v12;
  if ( *((_BYTE *)v12 + 3) )
  {
    memmove(v32 + 1, v32, (size_t)v12 + 8LL * (unsigned __int16)v33 + 16 - (_QWORD)v32);
    *v32 = *a3;
    ++*(_QWORD *)(a1 + 8);
  }
  else
  {
    memmove(v32 + 2, v32, (size_t)v12 + 16 * ((unsigned __int16)v33 + 1LL) - (_QWORD)v32);
    *(_OWORD *)v32 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v12;
  return v4;
}
