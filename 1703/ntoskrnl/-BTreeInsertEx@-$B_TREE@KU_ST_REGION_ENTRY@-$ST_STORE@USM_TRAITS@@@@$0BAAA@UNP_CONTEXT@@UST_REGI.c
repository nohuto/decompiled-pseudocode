/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x140058ED4
 * Callers:
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140037CD4 (-BTreeSplitChild@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x140058E84 (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 * Callees:
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140036E34 (-BTreeRedistribute@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140037CD4 (-BTreeSplitChild@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_RE.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14003813C (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     SmArrayGrow @ 0x14003BA3C (SmArrayGrow.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140249440 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  unsigned int v8; // ecx
  int v9; // ebx
  unsigned __int8 **v10; // rbx
  unsigned __int8 *v11; // rsi
  unsigned int v12; // r12d
  unsigned __int8 *v13; // rbx
  int v14; // eax
  __int64 v16; // rbp
  __int64 v17; // rbp
  unsigned __int8 *v18; // rax
  unsigned __int64 v19; // r8
  unsigned __int8 *v20; // rdx
  unsigned __int64 v21; // r9
  int v22; // eax
  unsigned __int8 *v23; // rdx
  __int64 v24; // rdx
  void **v25; // rdx
  __int64 v26; // rdx
  void **v27; // rdx
  int v28; // eax
  unsigned __int8 v29; // cl
  int v30; // ebp
  int v31; // eax
  unsigned __int8 *v32; // rax

  v3 = *(_QWORD *)a1;
  v4 = 0;
  v8 = 0;
  if ( v3 )
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= v8 && !(unsigned int)SmArrayGrow(v8, a2, (unsigned int *)(a2 + 28), (const void **)a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v10 = (unsigned __int8 **)(*(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1));
  }
  else
  {
    v32 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            (__int64)a1,
            1u,
            1);
    *(_QWORD *)a1 = v32;
    if ( !v32 )
      return (unsigned int)-1073741670;
    v10 = *(unsigned __int8 ***)a2;
    *v10 = v32;
    v10[1] = (unsigned __int8 *)(*(_QWORD *)a1 + 16LL);
    ++*(_DWORD *)(a2 + 24);
  }
  v11 = *v10;
  v12 = (*v10)[3] != 0 ? 1020 : 255;
  if ( (unsigned __int16)*(_DWORD *)*v10 >= v12 )
  {
    v16 = v10[1] - v11 - 16;
    if ( (*v10)[3] )
      v17 = v16 >> 2;
    else
      v17 = v16 >> 4;
    if ( v11 == *(unsigned __int8 **)a1 )
    {
      v21 = 0LL;
      v20 = 0LL;
      v19 = 0LL;
    }
    else
    {
      v18 = (unsigned __int8 *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeRedistribute(
                                 a1,
                                 a2);
      v19 = (unsigned __int64)*(v10 - 1);
      v20 = v18;
      v21 = v19 - 16;
      if ( ((unsigned __int8)v18 & 1) == 0 )
        v21 = v19 + 16;
    }
    v22 = (unsigned __int16)*(_DWORD *)v11;
    if ( v22 < v12 )
    {
      if ( ((unsigned __int8)v20 & 1) != 0 )
      {
        v23 = (unsigned __int8 *)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFEuLL);
        LODWORD(v17) = v22 - v12 + v17;
        if ( v11[3] )
        {
          if ( (int)v17 > 0 )
          {
LABEL_20:
            if ( v11 != v23 )
            {
LABEL_21:
              v19 = v21;
              goto LABEL_22;
            }
            *(v10 - 1) = (unsigned __int8 *)v21;
LABEL_22:
            *v10 = v11;
            if ( v11[3] )
            {
              v10[1] = &v11[4 * (int)v17 + 16];
              v24 = (__int64)*(v10 - 2);
              if ( v19 <= v24 + 16 )
                v25 = (void **)(v24 + 8);
              else
                v25 = (void **)(v19 - 8);
              if ( **((_DWORD **)a1 + 2) != -1 )
                NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v25);
            }
            else
            {
              v10[1] = &v11[16 * (int)v17 + 16];
            }
            goto LABEL_7;
          }
        }
        else
        {
          if ( (int)v17 >= 0 )
            goto LABEL_20;
          LODWORD(v17) = v17 + 1;
        }
        v11 = v23;
        LODWORD(v17) = (unsigned __int16)*(_DWORD *)v23 + (_DWORD)v17;
        goto LABEL_20;
      }
      if ( (int)v17 <= v22 )
        goto LABEL_21;
      v29 = v11[3];
      v30 = v17 - v22;
      *(v10 - 1) = (unsigned __int8 *)v21;
LABEL_38:
      v31 = v30 - 1;
      v11 = v20;
      if ( v29 )
        v31 = v30;
      LODWORD(v17) = v31;
      goto LABEL_22;
    }
    if ( v20 && v11[3] )
    {
      v26 = (__int64)*(v10 - 2);
      v27 = (void **)(v21 <= v26 + 16 ? v26 + 8 : v21 - 8);
      if ( **((_DWORD **)a1 + 2) != -1 )
        NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16), v27);
    }
    v20 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSplitChild(
            a1,
            a2);
    if ( v20 )
    {
      v10 = (unsigned __int8 **)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v28 = (unsigned __int16)*(_DWORD *)v11;
      v19 = (unsigned __int64)*(v10 - 1);
      if ( (int)v17 <= v28 )
      {
        v19 += 16LL;
        goto LABEL_22;
      }
      v29 = v11[3];
      v30 = v17 - v28;
      *(v10 - 1) = (unsigned __int8 *)(v19 + 16);
      goto LABEL_38;
    }
    return (unsigned int)-1073741670;
  }
LABEL_7:
  v13 = v10[1];
  v14 = *(_DWORD *)v11;
  if ( v11[3] )
  {
    memmove(v13 + 4, v13, (size_t)&v11[4LL * (unsigned __int16)v14 + 16 - (_QWORD)v13]);
    *(_DWORD *)v13 = *a3;
    ++*((_QWORD *)a1 + 1);
  }
  else
  {
    memmove(v13 + 16, v13, (size_t)&v11[16 * ((unsigned __int16)v14 + 1LL) - (_QWORD)v13]);
    *(_OWORD *)v13 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v11;
  return v4;
}
