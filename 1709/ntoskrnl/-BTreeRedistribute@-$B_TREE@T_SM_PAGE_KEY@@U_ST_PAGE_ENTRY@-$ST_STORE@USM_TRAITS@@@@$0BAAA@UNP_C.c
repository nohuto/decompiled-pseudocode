/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140263374
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140260AC8 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140261ADC (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x140264698 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

void *__fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r8
  unsigned int v4; // ebp
  __int64 v5; // r11
  _DWORD *v6; // r14
  unsigned int v7; // edi
  void **v8; // r9
  _QWORD *v9; // rbx
  struct NP_CONTEXT::NP_CTX *v10; // rcx
  void *result; // rax
  _DWORD *v12; // r13
  _DWORD *v13; // r12
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v19; // ebx
  _DWORD *v20; // rdi
  _DWORD *v21; // rsi
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rcx
  char *v25; // r9
  char *v26; // r15
  size_t v27; // r8
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  _DWORD *v31; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v32; // [rsp+78h] [rbp+10h] BYREF
  void *v33; // [rsp+80h] [rbp+18h]
  char *v34; // [rsp+88h] [rbp+20h]

  v2 = 1LL;
  v3 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v4 = 16;
  v5 = *(_QWORD *)(v3 - 16);
  v6 = *(_DWORD **)(v3 - 8);
  v7 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v3 + 3LL) != 0) + 255;
  if ( v6 == (_DWORD *)(v5 + 16 * ((unsigned __int16)*(_DWORD *)v5 + 1LL)) )
  {
    v6 -= 4;
    v8 = (void **)(v6 - 2);
    if ( (unsigned __int64)v6 <= v5 + 16 )
      v8 = (void **)(v5 + 8);
    v9 = &v32;
    v31 = *(_DWORD **)v3;
  }
  else
  {
    v32 = *(_DWORD **)v3;
    v8 = (void **)(v6 + 2);
    v9 = &v31;
    v2 = 0LL;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || *(_BYTE *)(v5 + 2) != 2 )
  {
    *v9 = *v8;
  }
  else
  {
    v10 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v10 == -1 )
      result = *v8;
    else
      result = NP_CONTEXT::NpLeafRefInternal(v10, v8, 0);
    *v9 = result;
    if ( !result )
      return result;
  }
  v12 = v32;
  v33 = (void *)(*v9 | v2);
  v13 = v31;
  v14 = (unsigned __int16)*v32;
  v15 = (unsigned __int16)*v31;
  v16 = v14 + v15;
  if ( v14 + v15 < v7 || v16 >= 2 * v7 - 1 )
    return v33;
  if ( v14 <= v15 )
  {
    v17 = (unsigned __int16)*v32;
    v18 = 0;
    LODWORD(v31) = 0;
    v20 = v13;
    v19 = (v16 >> 1) - v14;
    v21 = v32;
  }
  else
  {
    v17 = 0;
    v18 = v16 >> 1;
    LODWORD(v31) = v16 >> 1;
    v19 = v14 - (v16 >> 1);
    v20 = v32;
    v21 = v13;
  }
  v22 = *((_BYTE *)v20 + 3) == 0;
  LODWORD(v32) = v17;
  if ( v22 )
  {
    v23 = 4LL * v18;
    v24 = 4LL * v17;
  }
  else
  {
    v23 = 2LL * v18;
    v4 = 8;
    v24 = 2LL * v17;
  }
  v25 = (char *)&v21[v24 + 4];
  v26 = (char *)&v20[v23 + 4];
  v34 = v25;
  if ( v20 == v12 )
  {
    memmove(&v25[v19 * v4], v25, v4 * (unsigned __int16)*v21);
    v18 = (unsigned int)v31;
    v17 = (unsigned int)v32;
    v25 = v34;
  }
  if ( *((_BYTE *)v20 + 3) )
  {
    v27 = v19 * v4;
  }
  else
  {
    v28 = *v6;
    if ( v20 == v12 )
    {
      v29 = 2LL * (v19 - 1);
      v21[2 * v29 + 4] = v28;
      *(_QWORD *)&v21[2 * v29 + 6] = *((_QWORD *)v21 + 1);
    }
    else
    {
      v30 = 2LL * v17;
      v21[2 * v30 + 4] = v28;
      *(_QWORD *)&v21[2 * v30 + 6] = *((_QWORD *)v20 + 1);
      v25 += v4;
    }
    if ( v20 == v12 )
    {
      *v6 = v20[4 * v18 + 4];
      *((_QWORD *)v21 + 1) = *(_QWORD *)&v20[4 * v18 + 6];
      v26 += v4;
    }
    else
    {
      *v6 = v20[4 * v19];
      *((_QWORD *)v20 + 1) = *(_QWORD *)&v20[4 * v19 + 2];
    }
    v27 = v4 * (v19 - 1);
  }
  memmove(v25, v26, v27);
  *(_WORD *)v21 += v19;
  *(_WORD *)v20 -= v19;
  if ( v20 == v13 )
    memmove(v26, &v26[v19 * v4], v4 * (unsigned __int16)*v20);
  result = v33;
  if ( *((_BYTE *)v13 + 3) )
    *v6 = v13[4];
  return result;
}
