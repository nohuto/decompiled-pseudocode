/*
 * XREFs of ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x140013ED0
 * Callers:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14005919C (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeNodeFindKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x1400592DC (-BTreeNodeFindKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_R.c)
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14005B108 (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(_DWORD *a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  _DWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int *v8; // r11
  __int64 v9; // rdx
  unsigned int v10; // eax

  v3 = *a2;
  v4 = a1 + 32;
  v5 = *a2 >> a1[98];
  v6 = a1[100] * (v3 & a1[99]);
  _BitScanReverse((unsigned int *)&v7, v5);
  v8 = (unsigned int *)((unsigned int)v4[70]
                      + v6
                      + *(_QWORD *)(*(_QWORD *)&v4[2 * v7] + 16 * (v5 ^ (unsigned int)(1 << v7))));
  v9 = (unsigned int)(*a3 >> v4[66]);
  _BitScanReverse((unsigned int *)&v7, v9);
  v10 = *(_DWORD *)((unsigned int)(v4[68] * (*a3 & v4[67]))
                  + *(_QWORD *)(*(_QWORD *)&v4[2 * v7] + 16 * (v9 ^ (unsigned int)(1 << v7)))
                  + (unsigned int)v4[70]);
  if ( *v8 >= v10 )
    return *v8 > v10;
  else
    return 0xFFFFFFFFLL;
}
