/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140038EF0
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x14005890C (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005BACC (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1402494FC (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

void *__fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
        struct NP_CONTEXT::NP_CTX *a1,
        __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r8
  unsigned int v5; // r15d
  __int64 v6; // rdx
  _DWORD *v7; // r14
  unsigned int v8; // edi
  void **v9; // rcx
  _QWORD *v10; // rbx
  _DWORD **v11; // rax
  _DWORD *v12; // r13
  _DWORD *v13; // r12
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  unsigned int v19; // ebx
  _DWORD *v20; // rdi
  _DWORD *v21; // rsi
  bool v22; // zf
  char *v23; // rbp
  char *v24; // rdx
  void *v25; // rcx
  size_t v26; // r8
  void *result; // rax
  int v28; // eax
  char *v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rcx
  char *v32; // r9
  _DWORD *v33; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v34; // [rsp+78h] [rbp+10h] BYREF
  void *v35; // [rsp+80h] [rbp+18h]
  void *v36; // [rsp+88h] [rbp+20h]

  v3 = 1LL;
  v4 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v5 = 16;
  v6 = *(_QWORD *)(v4 - 16);
  v7 = *(_DWORD **)(v4 - 8);
  v8 = *(_BYTE *)(*(_QWORD *)v4 + 3LL) != 0 ? 1020 : 255;
  if ( v7 == (_DWORD *)(v6 + 16 * ((unsigned __int16)*(_DWORD *)v6 + 1LL)) )
  {
    v7 -= 4;
    v9 = (void **)(v7 - 2);
    if ( (unsigned __int64)v7 <= v6 + 16 )
      v9 = (void **)(v6 + 8);
    v10 = &v34;
    v33 = *(_DWORD **)v4;
  }
  else
  {
    v34 = *(_DWORD **)v4;
    v9 = (void **)(v7 + 2);
    v10 = &v33;
    v3 = 0LL;
  }
  if ( a1 )
    v11 = (_DWORD **)((char *)a1 + 16);
  else
    v11 = 0LL;
  if ( **v11 == -1 || *(_BYTE *)(v6 + 2) != 2 )
  {
    *v10 = *v9;
LABEL_7:
    v12 = v34;
    v36 = (void *)(*v10 | v3);
    v13 = v33;
    v14 = (unsigned __int16)*v34;
    v15 = (unsigned __int16)*v33;
    v16 = v14 + v15;
    if ( v14 + v15 < v8 || v16 >= 2 * v8 - 1 )
      return v36;
    if ( v14 <= v15 )
    {
      v17 = (unsigned __int16)*v34;
      v18 = 0;
      LODWORD(v33) = 0;
      v20 = v13;
      v19 = (v16 >> 1) - v14;
      v21 = v34;
    }
    else
    {
      v17 = 0;
      v18 = v16 >> 1;
      LODWORD(v33) = v16 >> 1;
      v19 = v14 - (v16 >> 1);
      v20 = v34;
      v21 = v13;
    }
    v22 = *((_BYTE *)v20 + 3) == 0;
    LODWORD(v34) = v17;
    if ( v22 )
    {
      v23 = (char *)&v20[4 * v18 + 4];
      v24 = (char *)&v21[4 * v17 + 4];
    }
    else
    {
      v5 = 4;
      v23 = (char *)&v20[v18 + 4];
      v24 = (char *)&v21[v17 + 4];
    }
    v35 = v24;
    if ( v20 == v12 )
    {
      memmove(&v24[v19 * v5], v24, v5 * (unsigned __int16)*v21);
      v18 = (unsigned int)v33;
      v17 = (unsigned int)v34;
    }
    if ( *((_BYTE *)v20 + 3) )
    {
      v25 = v35;
      v26 = v19 * v5;
    }
    else
    {
      v28 = *v7;
      if ( v20 == v12 )
      {
        v29 = (char *)v35;
        v30 = 2LL * (v19 - 1);
        v21[2 * v30 + 4] = v28;
        *(_QWORD *)&v21[2 * v30 + 6] = *((_QWORD *)v21 + 1);
      }
      else
      {
        v31 = v17;
        v32 = (char *)v35;
        v31 *= 2LL;
        v21[2 * v31 + 4] = v28;
        *(_QWORD *)&v21[2 * v31 + 6] = *((_QWORD *)v20 + 1);
        v29 = &v32[v5];
      }
      if ( v20 == v12 )
      {
        *v7 = v20[4 * v18 + 4];
        *((_QWORD *)v21 + 1) = *(_QWORD *)&v20[4 * v18 + 6];
        v23 += v5;
      }
      else
      {
        *v7 = v20[4 * v19];
        *((_QWORD *)v20 + 1) = *(_QWORD *)&v20[4 * v19 + 2];
      }
      v25 = v29;
      v26 = v5 * (v19 - 1);
    }
    memmove(v25, v23, v26);
    *(_WORD *)v21 += v19;
    *(_WORD *)v20 -= v19;
    if ( v20 == v13 )
      memmove(v23, &v23[v19 * v5], v5 * (unsigned __int16)*v20);
    result = v36;
    if ( *((_BYTE *)v13 + 3) )
      *v7 = v13[4];
    return result;
  }
  if ( a1 )
    a1 = (struct NP_CONTEXT::NP_CTX *)((char *)a1 + 16);
  if ( **(_DWORD **)a1 == -1 )
    result = *v9;
  else
    result = NP_CONTEXT::NpLeafRefInternal(a1, v9, 0);
  *v10 = result;
  if ( result )
    goto LABEL_7;
  return result;
}
