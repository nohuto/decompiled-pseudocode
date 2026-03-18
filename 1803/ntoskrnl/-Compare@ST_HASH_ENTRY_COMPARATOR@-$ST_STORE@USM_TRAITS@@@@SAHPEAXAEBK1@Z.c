/*
 * XREFs of ?Compare@ST_HASH_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x1400B0800
 * Callers:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140092CBC (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeNodeFindKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x140092E00 (-BTreeNodeFindKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HAS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR::Compare(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int v3; // r14d
  _DWORD *v4; // rbp
  int v5; // ecx
  unsigned int v6; // r15d
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned int v13; // r9d
  unsigned int v14; // ecx

  v3 = *a2;
  v4 = (_DWORD *)(a1 - 128);
  v5 = *(_DWORD *)(a1 + 328);
  v6 = *a3;
  v7 = v4[116];
  v8 = (unsigned int)v4[118];
  v9 = *a2 >> v5;
  v10 = *a3 >> v5;
  _BitScanReverse((unsigned int *)&v11, v9);
  _BitScanReverse((unsigned int *)&v12, v10);
  v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v4[2 * v11 + 48] + 16 * (v9 ^ (unsigned int)(1 << v11)))
                  + v7 * (*a2 & v4[115])
                  + v8
                  + 8);
  v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v4[2 * v12 + 48] + 16 * (v10 ^ (unsigned int)(1 << v12)))
                  + v7 * (v6 & v4[115])
                  + v8
                  + 8);
  if ( v13 < v14 )
    return 0xFFFFFFFFLL;
  if ( v13 > v14 )
    return 1LL;
  if ( v3 < v6 )
    return 0xFFFFFFFFLL;
  else
    return v3 > v6;
}
