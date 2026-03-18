/*
 * XREFs of ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14005A1D4
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140059EF4 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140058BF8 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140058DF0 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14005A678 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeSearchResultInit@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUSEARCH_RESULT@1@K@Z @ 0x14012F0B0 (-BTreeSearchResultInit@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@US.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     qsort_s @ 0x14016C870 (qsort_s.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140248CF4 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x140249440 (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferAddEntry(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        _DWORD *a4)
{
  _DWORD *v4; // rsi
  char *v5; // rbx
  unsigned int *v7; // r9
  unsigned __int64 v9; // r8
  char *v10; // r12
  int v12; // ecx
  __int16 v13; // ax
  unsigned __int64 v14; // rdi
  unsigned int v15; // r11d
  __int64 v16; // rcx
  _DWORD *LeafSibling; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  unsigned __int8 v21; // cl
  unsigned int v22; // edi
  __int64 *v23; // r15
  struct NP_CONTEXT::NP_CTX *v24; // r14
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  char *v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  int *v32; // rdi
  int *v33; // r9
  unsigned int v34; // r8d
  int *v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // r13d
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  void *v41; // rsp
  void *v42; // rsp
  unsigned int v43; // edx
  __int64 *v44; // rbx
  unsigned __int64 v45; // rcx
  __int64 v46; // rbx
  void **v47; // rbx
  _DWORD *v48; // [rsp+30h] [rbp+0h] BYREF
  _DWORD *v49; // [rsp+38h] [rbp+8h]
  unsigned int v50; // [rsp+40h] [rbp+10h]
  unsigned int v51; // [rsp+44h] [rbp+14h]
  unsigned int *v52; // [rsp+48h] [rbp+18h]
  _QWORD Context[2]; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v54; // [rsp+60h] [rbp+30h]
  _QWORD v55[3]; // [rsp+68h] [rbp+38h] BYREF
  int v56; // [rsp+80h] [rbp+50h]
  unsigned int v57; // [rsp+84h] [rbp+54h]

  v4 = 0LL;
  v5 = (char *)a2 + *((unsigned __int16 *)a2 + 3);
  v52 = a3;
  v48 = 0LL;
  v7 = a3;
  v49 = 0LL;
  v9 = (unsigned __int64)a2 + *((unsigned __int16 *)a2 + 2);
  v10 = v5 + 8;
  v54 = v9;
  if ( (unsigned __int64)(v5 + 8) > v9 )
  {
LABEL_58:
    v22 = -2147483643;
    goto LABEL_18;
  }
  *(_QWORD *)v5 = 0LL;
  if ( v5 )
    *(_DWORD *)v5 = *a4 & *(_DWORD *)(a1 + 808);
  *(_DWORD *)v5 *= 16;
  v12 = a4[1] & 0xFFF;
  v13 = 4096;
  if ( v12 )
    v13 = v12;
  *((_WORD *)v5 + 2) = v13;
  if ( v7[1] == a4[2] && v7[2] == (a4[1] & 0xFFF) )
  {
    v28 = *v7;
    if ( (_DWORD)v28 )
    {
      v29 = (char *)a2 + v28;
      if ( (unsigned __int64)&v5[(unsigned int)((_DWORD)v5 - ((_DWORD)a2 + v28))] <= v9 )
      {
        v30 = (unsigned __int64)(v29 + 8);
        v31 = (unsigned __int64)&v29[8 * (unsigned __int8)v29[6] + 8];
        if ( v30 < v31 )
        {
          do
          {
            if ( *(_DWORD *)(v30 + 4) != *(_DWORD *)v5 || *(_DWORD *)v30 != *a2 )
            {
              *(_QWORD *)v10 = *(_QWORD *)v30;
              v10 += 8;
              ++v5[6];
            }
            v30 += 8LL;
          }
          while ( v30 < v31 );
          v4 = v48;
        }
        if ( v5[6] )
          goto LABEL_38;
        goto LABEL_17;
      }
      goto LABEL_58;
    }
  }
  if ( (*(_BYTE *)(a1 + 184) & 1) == 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 128),
      a1 + 152);
  *(_DWORD *)(a1 + 184) |= 1u;
  *(_DWORD *)(*(_QWORD *)(a1 + 760) + 8LL) = a4[2];
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
    (_DWORD *)(a1 + 128),
    *(_DWORD *)(a1 + 768),
    a1 + 152);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
    a1 + 128,
    &v48,
    a1 + 152);
  v14 = (unsigned __int64)v49;
  v4 = v48;
  v15 = 0;
  v51 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1016) + 2LL * *a2) >> 13;
  v50 = 0;
  while ( v4 )
  {
    v14 += 4LL;
    v16 = (unsigned __int16)*v4;
    v49 = (_DWORD *)v14;
    if ( v14 >= (unsigned __int64)&v4[v16 + 4] )
    {
      if ( **(_DWORD **)((a1 + 144) & -(__int64)(a1 != -128)) == -1 )
      {
        LeafSibling = (_DWORD *)*((_QWORD *)v4 + 1);
LABEL_54:
        if ( LeafSibling )
        {
          v14 = (unsigned __int64)(LeafSibling + 4);
          v48 = LeafSibling;
          v4 = LeafSibling;
          v49 = LeafSibling + 4;
          LeafSibling += 4;
        }
      }
      else
      {
        LeafSibling = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                                  a1 + 128,
                                  v4);
        if ( LeafSibling != (_DWORD *)-1LL )
          goto LABEL_54;
      }
      v15 = v50;
      goto LABEL_13;
    }
    LeafSibling = (_DWORD *)v14;
LABEL_13:
    if ( !LeafSibling )
      break;
    v18 = (unsigned int)(*LeafSibling >> *(_DWORD *)(a1 + 456));
    _BitScanReverse((unsigned int *)&v19, v18);
    v20 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                   + (unsigned int)(*(_DWORD *)(a1 + 464) * (*LeafSibling & *(_DWORD *)(a1 + 460)))
                   + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v19 + 192) + 16 * (v18 ^ (unsigned int)(1 << v19))));
    if ( v20 != a4 )
    {
      if ( v20[2] != a4[2] )
        break;
      if ( ((a4[1] ^ v20[1]) & 0xFFF) == 0 )
      {
        v26 = (unsigned int)(*v20 >> *(_DWORD *)(a1 + 812));
        if ( *(unsigned __int16 *)(*(_QWORD *)(a1 + 1016) + 2 * v26) >> 13 >= v51 )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6520LL);
          if ( v27 && (v27 == -1 || _bittest64(*(const signed __int64 **)(v27 + 16), v26))
            || (v20[1] & 0xFFFFF000) >= 0xFFEFF000 )
          {
            v4 = v48;
          }
          else
          {
            v4 = v48;
            if ( (unsigned __int64)(v10 + 8) > v54 )
              goto LABEL_58;
            *(_QWORD *)v10 = 0LL;
            *(_DWORD *)v10 = *v20;
            *((_DWORD *)v10 + 1) = v20[1] >> 12;
            v10 += 8;
            ++v5[6];
          }
          v14 = (unsigned __int64)v49;
        }
      }
    }
    v50 = ++v15;
    if ( v15 >= 0x10 )
      break;
  }
  v21 = v5[6];
  if ( !v21 )
    goto LABEL_17;
  v32 = (int *)&v10[-8 * v21];
  if ( v21 > 1u )
  {
    Context[1] = a1;
    Context[0] = 0LL;
    LODWORD(Context[0]) = *a2;
    qsort_s(
      v32,
      (unsigned __int8)v5[6],
      8uLL,
      (int (__cdecl *)(void *, const void *, const void *))ST_STORE<SM_TRAITS>::StDmCombineTargetCompare,
      Context);
  }
  v33 = &v32[2 * (unsigned __int8)v5[6]];
  while ( v32 < v33 )
  {
    v34 = *v32;
    v35 = v32 + 1;
    *(_QWORD *)v32 = 0LL;
    if ( v32 != (int *)-4LL )
      *v35 = v34 & *(_DWORD *)(a1 + 808);
    *v32 = v34 >> *(_DWORD *)(a1 + 812);
    *v35 *= 16;
    v32 += 2;
  }
  v7 = v52;
LABEL_38:
  *v7 = *((unsigned __int16 *)a2 + 3);
  v7[1] = a4[2];
  v7[2] = a4[1] & 0xFFF;
  *((_WORD *)a2 + 3) = (_WORD)v5 + 8 * ((unsigned __int8)v5[6] + 1) - (_WORD)a2;
LABEL_17:
  v22 = 0;
LABEL_18:
  v23 = (__int64 *)(a1 + 128);
  v24 = (struct NP_CONTEXT::NP_CTX *)((a1 + 144) & -(__int64)(a1 != -128));
  if ( **(_DWORD **)v24 != -1 )
  {
    if ( v4 )
    {
      v36 = *v23;
      if ( v4 != (_DWORD *)*v23 )
      {
        if ( v36 )
          v37 = *(unsigned __int8 *)(v36 + 2);
        else
          v37 = 0;
        v38 = 16LL * v37;
        v39 = v38 + 15;
        if ( v38 + 15 < v38 )
          v39 = 0xFFFFFFFFFFFFFF0LL;
        v40 = v39 & 0xFFFFFFFFFFFFFFF0uLL;
        v41 = alloca(v40);
        v42 = alloca(v40);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultInit(
          v55,
          2LL);
        v43 = v4[4];
        v56 = 0;
        v55[0] = &v48;
        v57 = v37;
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
          v23,
          v43,
          (__int64)v55);
        v44 = (__int64 *)&(&v48)[2 * v37 - 1];
        v45 = v44[1];
        v46 = *v44;
        if ( v45 <= v46 + 16 )
          v47 = (void **)(v46 + 8);
        else
          v47 = (void **)(v45 - 8);
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
          v23,
          (__int64)v55);
        if ( **(_DWORD **)v24 != -1 )
          NP_CONTEXT::NpLeafDerefInternal(v24, v47);
      }
    }
  }
  return v22;
}
