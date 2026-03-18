/*
 * XREFs of ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x14026E99C
 * Callers:
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14026E7F8 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140006BE4 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140261454 (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1402637A0 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionGetKeys(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v9; // rdi
  _DWORD *v10; // rbx
  _DWORD *v11; // r15
  int v12; // ebp
  __int64 result; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *PreviousEntry; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // rdx
  int v22; // r8d

  v9 = *(_QWORD *)(a2 + 8);
  v10 = a6;
  v11 = &a6[*a7];
  v12 = (a5 - 1) | (a3 << *(_DWORD *)(a1 + 812));
  if ( (*(_DWORD *)(v9 + 32) & 1) == 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      *(_QWORD *)(a2 + 8));
  *(_DWORD *)(v9 + 32) |= 1u;
  **(_DWORD **)(a1 + 760) = v12;
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
             a1 + 64,
             *(_DWORD *)(a1 + 768),
             v9);
  if ( (_DWORD)result != -1073741818 )
  {
    if ( !(_DWORD)result )
    {
      v14 = *(_DWORD *)(v9 + 24);
      if ( v14 == -1 || !v14 )
        v15 = v9 + 8;
      else
        v15 = *(_QWORD *)v9 + 16LL * (unsigned int)(v14 - 1);
      v10 = a6 + 1;
      v16 = (unsigned int)(**(_DWORD **)(v15 + 8) >> *(_DWORD *)(a1 + 456));
      _BitScanReverse((unsigned int *)&v17, v16);
      *a6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v17 + 192) + 16 * (v16 ^ (unsigned int)(1 << v17)))
                      + (unsigned int)(*(_DWORD *)(a1 + 464) * (**(_DWORD **)(v15 + 8) & *(_DWORD *)(a1 + 460)))
                      + *(unsigned int *)(a1 + 472)
                      + 8LL);
    }
    while ( 1 )
    {
      if ( v10 >= v11 )
      {
LABEL_15:
        *a7 = v10 - a6;
        return 0LL;
      }
      PreviousEntry = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                                  a1 + 64,
                                  v9);
      if ( PreviousEntry == (_DWORD *)-1LL )
        return 3221225478LL;
      if ( PreviousEntry )
      {
        v19 = (unsigned int)(*PreviousEntry >> *(_DWORD *)(a1 + 456));
        _BitScanReverse((unsigned int *)&v20, v19);
        v21 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                       + (unsigned int)(*(_DWORD *)(a1 + 464) * (*PreviousEntry & *(_DWORD *)(a1 + 460)))
                       + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v20 + 192) + 16 * (v19 ^ (unsigned int)(1 << v20))));
        v22 = *v21 & *(_DWORD *)(a1 + 808);
        if ( *v21 >> *(_DWORD *)(a1 + 812) == a3 )
        {
          *v10++ = v21[2];
          if ( v22 )
            continue;
        }
      }
      goto LABEL_15;
    }
  }
  return result;
}
