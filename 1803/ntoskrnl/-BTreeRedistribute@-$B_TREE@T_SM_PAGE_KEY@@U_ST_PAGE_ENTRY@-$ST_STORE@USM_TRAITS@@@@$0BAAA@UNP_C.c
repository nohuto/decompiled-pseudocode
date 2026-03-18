/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400965A4
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x1400936BC (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140095828 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1402A26DC (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

unsigned __int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r8
  unsigned int v5; // ebp
  _DWORD *v6; // r9
  _DWORD *v7; // rcx
  _DWORD *v8; // r15
  unsigned int v9; // edi
  int v10; // edx
  char v11; // r8
  void **v12; // r9
  void **v13; // rbx
  unsigned __int64 result; // rax
  _DWORD *v15; // r13
  _DWORD *v16; // rsi
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // edx
  _DWORD *v21; // rbx
  unsigned int v22; // edi
  _DWORD *v23; // r12
  char v24; // r10
  _DWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  char *v30; // r9
  char *v31; // r14
  size_t v32; // r8
  struct NP_CONTEXT::NP_CTX *v33; // rcx
  int v34; // r10d
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // [rsp+70h] [rbp+8h]
  _DWORD *v39; // [rsp+78h] [rbp+10h] BYREF
  _DWORD *v40; // [rsp+80h] [rbp+18h] BYREF
  __int64 v41; // [rsp+88h] [rbp+20h]

  v2 = 1LL;
  v4 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v5 = 16;
  v6 = *(_DWORD **)(v4 - 16);
  v7 = *(_DWORD **)v4;
  v8 = *(_DWORD **)(v4 - 8);
  v9 = (unsigned __int8)-(*(_BYTE *)(*(_QWORD *)v4 + 3LL) != 0) + 255;
  v10 = HIWORD(*v6);
  v11 = v10;
  if ( v8 == &v6[4 * (unsigned __int16)*v6 + 4] )
  {
    v8 -= 4;
    if ( v8 <= v6 + 4 )
      v12 = (void **)(v6 + 2);
    else
      v12 = (void **)(v8 - 2);
    v13 = (void **)&v40;
    v39 = v7;
  }
  else
  {
    v40 = v7;
    v12 = (void **)(v8 + 2);
    v13 = (void **)&v39;
    v2 = 0LL;
    v11 = v10;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || v11 != 2 )
  {
    result = (unsigned __int64)*v12;
    *v13 = *v12;
  }
  else
  {
    v33 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v33 == -1 )
      result = (unsigned __int64)*v12;
    else
      result = (unsigned __int64)NP_CONTEXT::NpLeafRefInternal(v33, v12, 0);
    *v13 = (void *)result;
    if ( !result )
      return result;
  }
  v15 = v39;
  v38 = result | v2;
  v16 = v40;
  v17 = (unsigned __int16)*v39;
  v18 = (unsigned __int16)*v40;
  v19 = v18 + v17;
  if ( v18 + v17 < v9 || v19 >= 2 * v9 - 1 )
    return v38;
  v20 = v19 >> 1;
  if ( v18 > v17 )
  {
    v21 = v40;
    v22 = v18 - v20;
    v23 = v40;
    v16 = v39;
  }
  else
  {
    v21 = v39;
    v22 = v20 - v18;
    v23 = v40;
  }
  v24 = *((_BYTE *)v21 + 3);
  v25 = v17 < v18 ? (_DWORD *)v20 : 0LL;
  v26 = 0;
  v39 = v25;
  if ( v18 <= v17 )
    v26 = v18;
  v27 = v26;
  v41 = v26;
  if ( v24 )
  {
    v28 = 2LL * (unsigned int)v25;
    v5 = 8;
    v29 = 2LL * (unsigned int)v27;
  }
  else
  {
    v28 = 4LL * (unsigned int)v25;
    v29 = 4LL * (unsigned int)v27;
  }
  v30 = (char *)&v16[v29 + 4];
  v31 = (char *)&v21[v28 + 4];
  v40 = v30;
  if ( v21 == v23 )
  {
    memmove(&v30[v22 * v5], &v16[v29 + 4], v5 * (unsigned __int16)*v16);
    v24 = *((_BYTE *)v21 + 3);
    v25 = v39;
    v30 = (char *)v40;
    v27 = v41;
  }
  if ( v24 )
  {
    v32 = v22 * v5;
  }
  else
  {
    v34 = *v8;
    if ( v21 == v23 )
    {
      v35 = 2LL * (v22 - 1);
      v16[4 * v22] = v34;
      v36 = *((_QWORD *)v16 + 1);
    }
    else
    {
      v35 = 2 * v27;
      v30 += v5;
      v16[2 * v35 + 4] = v34;
      v36 = *((_QWORD *)v21 + 1);
    }
    *(_QWORD *)&v16[2 * v35 + 6] = v36;
    if ( v21 == v23 )
    {
      v37 = 2LL * (_QWORD)v25;
      v31 += v5;
      *v8 = v21[2 * v37 + 4];
      *((_QWORD *)v16 + 1) = *(_QWORD *)&v21[2 * v37 + 6];
    }
    else
    {
      *v8 = v21[4 * v22];
      *((_QWORD *)v21 + 1) = *(_QWORD *)&v21[4 * v22 + 2];
    }
    v32 = v5 * (v22 - 1);
  }
  memmove(v30, v31, v32);
  *(_WORD *)v16 += v22;
  *(_WORD *)v21 -= v22;
  if ( v21 == v15 )
    memmove(v31, &v31[v22 * v5], v5 * (unsigned __int16)*v21);
  result = v38;
  if ( *((_BYTE *)v15 + 3) )
    *v8 = v15[4];
  return result;
}
