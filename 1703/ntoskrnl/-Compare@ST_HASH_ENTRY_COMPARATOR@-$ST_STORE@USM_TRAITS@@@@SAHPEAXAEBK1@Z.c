/*
 * XREFs of ?Compare@ST_HASH_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x140013D40
 * Callers:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140058BF8 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?BTreeNodeFindKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x140058D30 (-BTreeNodeFindKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HAS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR::Compare(
        _DWORD *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int v3; // r10d
  _DWORD *v4; // r11
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // ecx

  v3 = *a3;
  v4 = a1 + 16;
  v5 = *a2;
  v6 = *a2 >> a1[82];
  v7 = a1[84] * (v5 & a1[83]);
  _BitScanReverse((unsigned int *)&v8, v6);
  v9 = *(_QWORD *)(*(_QWORD *)&v4[2 * v8] + 16 * (v6 ^ (unsigned int)(1 << v8)));
  v10 = *a3 >> v4[66];
  _BitScanReverse((unsigned int *)&v8, v10);
  v11 = *(_DWORD *)((unsigned int)v4[70] + v7 + v9 + 8);
  v12 = *(_DWORD *)((unsigned int)v4[70]
                  + v4[68] * (*a3 & v4[67])
                  + *(_QWORD *)(*(_QWORD *)&v4[2 * v8] + 16 * (v10 ^ (unsigned int)(1 << v8)))
                  + 8LL);
  if ( v11 < v12 )
    return 0xFFFFFFFFLL;
  if ( v11 > v12 )
    return 1LL;
  if ( v5 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v5 > v3;
}
