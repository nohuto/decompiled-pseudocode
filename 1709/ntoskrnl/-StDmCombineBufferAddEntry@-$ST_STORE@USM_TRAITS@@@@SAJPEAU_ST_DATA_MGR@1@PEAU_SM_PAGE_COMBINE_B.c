/*
 * XREFs of ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14026B8D8
 * Callers:
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14026C364 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140006B18 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     qsort_s @ 0x140161150 (qsort_s.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140260E60 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x140261E34 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1402621D0 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140263624 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCombineBufferAddEntry(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        _DWORD *a4)
{
  char *v4; // rdi
  _DWORD *v5; // rsi
  unsigned int *v6; // r9
  unsigned __int64 v9; // r8
  char *v10; // r13
  unsigned int v11; // ebx
  int v12; // ecx
  __int16 v13; // ax
  __int64 v14; // rax
  char *v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned int v19; // r11d
  unsigned __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rcx
  _DWORD *LeafSibling; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // rdx
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  unsigned __int8 v29; // cl
  unsigned int *v30; // rsi
  unsigned int *v31; // r9
  unsigned int v32; // r8d
  int *v33; // rdx
  __int16 v34; // cx
  unsigned __int64 v36; // [rsp+30h] [rbp-38h]
  _DWORD *v37; // [rsp+38h] [rbp-30h] BYREF
  _DWORD *v38; // [rsp+40h] [rbp-28h]
  _QWORD Context[4]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v40; // [rsp+B0h] [rbp+48h]
  unsigned int v41; // [rsp+B8h] [rbp+50h]

  v4 = (char *)a2 + *((unsigned __int16 *)a2 + 3);
  v37 = 0LL;
  v5 = a4;
  v38 = 0LL;
  v6 = a3;
  v9 = (unsigned __int64)a2 + *((unsigned __int16 *)a2 + 2);
  v10 = v4 + 8;
  v36 = v9;
  if ( (unsigned __int64)(v4 + 8) > v9 )
    goto LABEL_2;
  v11 = 0;
  *(_QWORD *)v4 = 0LL;
  if ( v4 )
    *(_DWORD *)v4 = *v5 & *(_DWORD *)(a1 + 808);
  *(_DWORD *)v4 *= 16;
  v12 = v5[1] & 0xFFF;
  v13 = 4096;
  if ( v12 )
    v13 = v12;
  *((_WORD *)v4 + 2) = v13;
  if ( v6[1] == v5[2] && v6[2] == (v5[1] & 0xFFF) )
  {
    v14 = *v6;
    if ( (_DWORD)v14 )
    {
      v15 = (char *)a2 + v14;
      if ( (unsigned __int64)&v4[(unsigned int)((_DWORD)v4 - ((_DWORD)a2 + v14))] <= v9 )
      {
        v16 = (unsigned __int64)(v15 + 8);
        v17 = (unsigned __int64)&v15[8 * (unsigned __int8)v15[6] + 8];
        while ( v16 < v17 )
        {
          if ( *(_DWORD *)(v16 + 4) != *(_DWORD *)v4 || *(_DWORD *)v16 != *a2 )
          {
            *(_QWORD *)v10 = *(_QWORD *)v16;
            v10 += 8;
            ++v4[6];
          }
          v16 += 8LL;
        }
        if ( v4[6] )
          goto LABEL_55;
        goto LABEL_56;
      }
LABEL_2:
      v11 = -2147483643;
      goto LABEL_56;
    }
  }
  v18 = a1 + 152;
  if ( (*(_DWORD *)(a1 + 184) & 1) == 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 128),
      v18);
    v18 = a1 + 152;
  }
  *(_DWORD *)(v18 + 32) |= 1u;
  *(_DWORD *)(*(_QWORD *)(a1 + 760) + 8LL) = v5[2];
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
    a1 + 128,
    *(_DWORD *)(a1 + 768),
    v18);
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeIteratorFromSearchResult(
    (unsigned __int8 **)(a1 + 128),
    &v37,
    a1 + 152);
  v19 = 0;
  v20 = (unsigned __int64)v38;
  v21 = (__int64)v37;
  v40 = 0;
  v41 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2LL * *a2) >> 13;
  while ( v21 )
  {
    v20 += 4LL;
    v22 = (unsigned __int16)*(_DWORD *)v21;
    v38 = (_DWORD *)v20;
    if ( v20 >= v21 + 4 * (v22 + 4) )
    {
      if ( **(_DWORD **)((a1 + 144) & -(__int64)(a1 != -128)) == -1 )
      {
        LeafSibling = *(_DWORD **)(v21 + 8);
LABEL_27:
        if ( LeafSibling )
        {
          v20 = (unsigned __int64)(LeafSibling + 4);
          v37 = LeafSibling;
          v21 = (__int64)LeafSibling;
          v38 = LeafSibling + 4;
          LeafSibling += 4;
        }
        else
        {
          LeafSibling = 0LL;
        }
      }
      else
      {
        LeafSibling = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeFindLeafSibling(
                                  a1 + 128,
                                  v21);
        if ( LeafSibling != (_DWORD *)-1LL )
          goto LABEL_27;
      }
      v19 = v40;
      goto LABEL_33;
    }
    LeafSibling = (_DWORD *)v20;
LABEL_33:
    if ( !LeafSibling )
      break;
    v24 = (unsigned int)(*LeafSibling >> *(_DWORD *)(a1 + 456));
    _BitScanReverse((unsigned int *)&v25, v24);
    v26 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                   + (unsigned int)(*(_DWORD *)(a1 + 464) * (*LeafSibling & *(_DWORD *)(a1 + 460)))
                   + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v25 + 192) + 16 * (v24 ^ (unsigned int)(1 << v25))));
    if ( v26 != a4 )
    {
      if ( v26[2] != a4[2] )
        break;
      if ( ((a4[1] ^ v26[1]) & 0xFFF) == 0 )
      {
        v27 = (unsigned int)(*v26 >> *(_DWORD *)(a1 + 812));
        if ( *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v27) >> 13 >= v41 )
        {
          v28 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6552LL);
          if ( (!v28 || v28 != -1 && !_bittest64(*(const signed __int64 **)(v28 + 16), v27))
            && (v26[1] & 0xFFFFF000) < 0xFFEFF000 )
          {
            if ( (unsigned __int64)(v10 + 8) > v36 )
              goto LABEL_2;
            *(_QWORD *)v10 = 0LL;
            *(_DWORD *)v10 = *v26;
            *((_DWORD *)v10 + 1) = v26[1] >> 12;
            v10 += 8;
            ++v4[6];
          }
          v21 = (__int64)v37;
          v20 = (unsigned __int64)v38;
        }
      }
    }
    v40 = ++v19;
    if ( v19 >= 0x10 )
      break;
  }
  v29 = v4[6];
  if ( v29 )
  {
    v30 = (unsigned int *)&v10[-8 * v29];
    if ( v29 > 1u )
    {
      Context[1] = a1;
      Context[0] = 0LL;
      LODWORD(Context[0]) = *a2;
      qsort_s(&v10[-8 * v29], (unsigned __int8)v4[6], 8uLL, ST_STORE<SM_TRAITS>::StDmCombineTargetCompare, Context);
    }
    v31 = &v30[2 * (unsigned __int8)v4[6]];
    while ( v30 < v31 )
    {
      v32 = *v30;
      v33 = (int *)(v30 + 1);
      *(_QWORD *)v30 = 0LL;
      if ( v30 != (unsigned int *)-4LL )
        *v33 = v32 & *(_DWORD *)(a1 + 808);
      *v30 = v32 >> *(_DWORD *)(a1 + 812);
      *v33 *= 16;
      v30 += 2;
    }
    v6 = a3;
    v5 = a4;
LABEL_55:
    v34 = (unsigned __int8)v4[6];
    *v6 = *((unsigned __int16 *)a2 + 3);
    v6[1] = v5[2];
    v6[2] = v5[1] & 0xFFF;
    *((_WORD *)a2 + 3) = (_WORD)v4 + 8 * (v34 + 1) - (_WORD)a2;
  }
LABEL_56:
  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeIteratorCleanup(
    (__int64 *)&v37,
    (__int64 *)(a1 + 128));
  return v11;
}
