/*
 * XREFs of ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400CBE8C
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1400929AC (-BTreeInsertEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140095384 (-BTreeDeleteEx@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_E.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1402A26DC (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

unsigned __int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r8
  unsigned int v5; // ebp
  _DWORD *v6; // r9
  _DWORD *v7; // rcx
  _DWORD *v8; // r15
  int v9; // edi
  int v10; // edx
  char v11; // r8
  unsigned int v12; // edi
  void **v13; // r9
  void **v14; // rbx
  unsigned __int64 result; // rax
  _DWORD *v16; // r13
  _DWORD *v17; // rsi
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // edx
  _DWORD *v22; // rbx
  unsigned int v23; // edi
  _DWORD *v24; // r12
  char v25; // r10
  _DWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  char *v31; // r9
  char *v32; // r14
  size_t v33; // r8
  struct NP_CONTEXT::NP_CTX *v34; // rcx
  int v35; // r10d
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // [rsp+70h] [rbp+8h]
  _DWORD *v40; // [rsp+78h] [rbp+10h] BYREF
  _DWORD *v41; // [rsp+80h] [rbp+18h] BYREF
  __int64 v42; // [rsp+88h] [rbp+20h]

  v2 = 1LL;
  v4 = *(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1);
  v5 = 16;
  v6 = *(_DWORD **)(v4 - 16);
  v7 = *(_DWORD **)v4;
  v8 = *(_DWORD **)(v4 - 8);
  v9 = -(*(_BYTE *)(*(_QWORD *)v4 + 3LL) != 0);
  v10 = HIWORD(*v6);
  v11 = v10;
  v12 = (v9 & 0x2FD) + 255;
  if ( v8 == &v6[4 * (unsigned __int16)*v6 + 4] )
  {
    v8 -= 4;
    if ( v8 <= v6 + 4 )
      v13 = (void **)(v6 + 2);
    else
      v13 = (void **)(v8 - 2);
    v14 = (void **)&v41;
    v40 = v7;
  }
  else
  {
    v41 = v7;
    v13 = (void **)(v8 + 2);
    v14 = (void **)&v40;
    v2 = 0LL;
    v11 = v10;
  }
  if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 || v11 != 2 )
  {
    result = (unsigned __int64)*v13;
    *v14 = *v13;
  }
  else
  {
    v34 = (struct NP_CONTEXT::NP_CTX *)((a1 + 16) & -(__int64)(a1 != 0));
    if ( **(_DWORD **)v34 == -1 )
      result = (unsigned __int64)*v13;
    else
      result = (unsigned __int64)NP_CONTEXT::NpLeafRefInternal(v34, v13, 0);
    *v14 = (void *)result;
    if ( !result )
      return result;
  }
  v16 = v40;
  v39 = result | v2;
  v17 = v41;
  v18 = (unsigned __int16)*v40;
  v19 = (unsigned __int16)*v41;
  v20 = v19 + v18;
  if ( v19 + v18 < v12 || v20 >= 2 * v12 - 1 )
    return v39;
  v21 = v20 >> 1;
  if ( v19 <= v18 )
  {
    v22 = v40;
    v23 = v21 - v19;
    v24 = v41;
  }
  else
  {
    v22 = v41;
    v23 = v19 - v21;
    v24 = v41;
    v17 = v40;
  }
  v25 = *((_BYTE *)v22 + 3);
  v26 = v18 < v19 ? (_DWORD *)v21 : 0LL;
  v27 = 0;
  v40 = v26;
  if ( v19 <= v18 )
    v27 = v19;
  v28 = v27;
  v42 = v27;
  if ( v25 )
  {
    v29 = (unsigned int)v26;
    v5 = 4;
    v30 = (unsigned int)v28;
  }
  else
  {
    v29 = 4LL * (unsigned int)v26;
    v30 = 4LL * (unsigned int)v28;
  }
  v31 = (char *)&v17[v30 + 4];
  v32 = (char *)&v22[v29 + 4];
  v41 = v31;
  if ( v22 == v24 )
  {
    memmove(&v31[v23 * v5], &v17[v30 + 4], v5 * (unsigned __int16)*v17);
    v25 = *((_BYTE *)v22 + 3);
    v26 = v40;
    v31 = (char *)v41;
    v28 = v42;
  }
  if ( v25 )
  {
    v33 = v23 * v5;
  }
  else
  {
    v35 = *v8;
    if ( v22 == v24 )
    {
      v36 = 2LL * (v23 - 1);
      v17[4 * v23] = v35;
      v37 = *((_QWORD *)v17 + 1);
    }
    else
    {
      v36 = 2 * v28;
      v31 += v5;
      v17[2 * v36 + 4] = v35;
      v37 = *((_QWORD *)v22 + 1);
    }
    *(_QWORD *)&v17[2 * v36 + 6] = v37;
    if ( v22 == v24 )
    {
      v38 = 2LL * (_QWORD)v26;
      v32 += v5;
      *v8 = v22[2 * v38 + 4];
      *((_QWORD *)v17 + 1) = *(_QWORD *)&v22[2 * v38 + 6];
    }
    else
    {
      *v8 = v22[4 * v23];
      *((_QWORD *)v22 + 1) = *(_QWORD *)&v22[4 * v23 + 2];
    }
    v33 = v5 * (v23 - 1);
  }
  memmove(v31, v32, v33);
  *(_WORD *)v17 += v23;
  *(_WORD *)v22 -= v23;
  if ( v22 == v16 )
    memmove(v32, &v32[v23 * v5], v5 * (unsigned __int16)*v22);
  result = v39;
  if ( *((_BYTE *)v16 + 3) )
    *v8 = v16[4];
  return result;
}
