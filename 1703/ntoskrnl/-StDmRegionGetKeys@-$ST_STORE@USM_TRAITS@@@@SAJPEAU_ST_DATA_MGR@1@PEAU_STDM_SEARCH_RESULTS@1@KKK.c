/*
 * XREFs of ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x14024C278
 * Callers:
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14024C0D0 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14005919C (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005939C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14005A150 (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionGetKeys(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v8; // rdi
  _DWORD *v10; // rbx
  _DWORD *v11; // r13
  int v12; // ebp
  __int64 result; // rax
  int v14; // eax
  __int64 v15; // rax
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int *PreviousEntry; // rax
  unsigned int v20; // r9d
  __int64 v21; // r8
  __int64 v22; // rcx
  _DWORD *v23; // r8
  unsigned int v24; // r11d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // ecx
  __int64 v29; // rdx

  v8 = *(_QWORD *)(a2 + 8);
  v10 = a6;
  v11 = &a6[*a7];
  v12 = (a5 - 1) | (a3 << *(_DWORD *)(a1 + 812));
  if ( (*(_BYTE *)(v8 + 32) & 1) == 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      *(_QWORD *)(a2 + 8));
  *(_DWORD *)(v8 + 32) |= 1u;
  **(_DWORD **)(a1 + 760) = v12;
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
             (_DWORD *)(a1 + 64),
             *(_DWORD *)(a1 + 768),
             v8);
  if ( (_DWORD)result != -1073741818 )
  {
    if ( !(_DWORD)result )
    {
      v14 = *(_DWORD *)(v8 + 24);
      if ( v14 == -1 || !v14 )
        v15 = v8 + 8;
      else
        v15 = *(_QWORD *)v8 + 16LL * (unsigned int)(v14 - 1);
      v10 = a6 + 1;
      v16 = *(_DWORD **)(v15 + 8);
      v17 = (unsigned int)(*v16 >> *(_DWORD *)(a1 + 456));
      _BitScanReverse((unsigned int *)&v18, v17);
      *a6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v18 + 192) + 16 * (v17 ^ (unsigned int)(1 << v18)))
                      + (unsigned int)(*(_DWORD *)(a1 + 464) * (*v16 & *(_DWORD *)(a1 + 460)))
                      + *(unsigned int *)(a1 + 472)
                      + 8LL);
    }
    while ( 1 )
    {
      if ( v10 >= v11 )
        goto LABEL_16;
      PreviousEntry = (unsigned int *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                                        a1 + 64,
                                        v8);
      if ( PreviousEntry == (unsigned int *)-1LL )
        return 3221225478LL;
      if ( !PreviousEntry )
        goto LABEL_16;
      v20 = *PreviousEntry;
      v21 = *PreviousEntry >> *(_DWORD *)(a1 + 456);
      _BitScanReverse((unsigned int *)&v22, v21);
      v23 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                     + *(_DWORD *)(a1 + 464) * (*PreviousEntry & *(_DWORD *)(a1 + 460))
                     + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v22 + 192) + 16 * (v21 ^ (unsigned int)(1 << v22))));
      v24 = *v23 & *(_DWORD *)(a1 + 808);
      if ( *v23 >> *(_DWORD *)(a1 + 812) != a3 )
        goto LABEL_16;
      if ( v24 < a4 )
      {
        v25 = v20 >> *(_DWORD *)(a1 + 456);
        _BitScanReverse((unsigned int *)&v26, v25);
        v27 = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v26 + 192) + 16 * (v25 ^ (unsigned int)(1 << v26)));
        v28 = 4096;
        v29 = *(unsigned int *)(a1 + 472) + *(_DWORD *)(a1 + 464) * (v20 & *(_DWORD *)(a1 + 460)) + v27;
        if ( (*(_DWORD *)(v29 + 4) & 0xFFF) != 0 )
          v28 = *(_DWORD *)(v29 + 4) & 0xFFF;
        if ( v24 + ((unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v28) >> 4) > a4 )
          *v10++ = *(_DWORD *)(v29 + 8);
LABEL_16:
        *a7 = v10 - a6;
        return 0LL;
      }
      *v10++ = v23[2];
      if ( v24 == a4 )
        goto LABEL_16;
    }
  }
  return result;
}
