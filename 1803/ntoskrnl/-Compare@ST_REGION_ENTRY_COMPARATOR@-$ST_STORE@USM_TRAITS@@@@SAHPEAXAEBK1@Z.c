/*
 * XREFs of ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x1400B2140
 * Callers:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140093364 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeNodeFindKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x1400934B0 (-BTreeNodeFindKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_R.c)
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140148860 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r13
  int v4; // ecx
  int v5; // ebp
  __int64 v6; // r14
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // rbx
  unsigned int v11; // r9d
  unsigned int v12; // eax

  v3 = (_DWORD *)(a1 - 64);
  v4 = *(_DWORD *)(a1 - 64 + 456);
  v5 = v3[116];
  v6 = (unsigned int)v3[118];
  v7 = (unsigned int)(*a2 >> v4);
  v8 = (unsigned int)(*a3 >> v4);
  _BitScanReverse((unsigned int *)&v9, v7);
  _BitScanReverse((unsigned int *)&v10, v8);
  v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v3[2 * v9 + 48] + 16 * (v7 ^ (unsigned int)(1 << v9)))
                  + (unsigned int)(v5 * (*a2 & v3[115]))
                  + v6);
  v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v3[2 * v10 + 48] + 16 * (v8 ^ (unsigned int)(1 << v10)))
                  + (unsigned int)(v5 * (*a3 & v3[115]))
                  + v6);
  if ( v11 >= v12 )
    return v11 > v12;
  else
    return 0xFFFFFFFFLL;
}
