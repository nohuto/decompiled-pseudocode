/*
 * XREFs of ?BTreeNodeFindKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x1400934B0
 * Callers:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140093364 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 * Callees:
 *     ?Compare@ST_REGION_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x1400B2140 (-Compare@ST_REGION_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeNodeFindKey(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3)
{
  _DWORD *v3; // r14
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 v7; // r15
  int v8; // r12d
  unsigned int v9; // r13d
  __int64 v10; // rbp
  unsigned int v11; // esi
  __int64 v12; // rax
  unsigned int v13; // r11d
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v21; // [rsp+68h] [rbp+10h] BYREF
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2 + 4;
  v4 = (unsigned __int16)*a2;
  v5 = -1;
  if ( HIBYTE(*a2) )
  {
    if ( (unsigned __int16)*a2 )
    {
      v7 = a1 - 64;
      v8 = *(_DWORD *)(a1 - 64 + 456);
      v9 = *(_DWORD *)(a1 - 64 + 460);
      v10 = *(unsigned int *)(a1 - 64 + 472);
      v11 = a3 >> v8;
      v12 = *(_DWORD *)(a1 - 64 + 464) * (a3 & v9);
      v21 = *(_DWORD *)(a1 - 64 + 464);
      v22 = v12;
      do
      {
        v13 = (v4 + v5) >> 1;
        _BitScanReverse((unsigned int *)&v14, v11);
        v15 = (unsigned int)(v3[v13] >> v8);
        _BitScanReverse((unsigned int *)&v16, v15);
        v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8 * v16 + 192) + 16 * (v15 ^ (unsigned int)(1 << v16)))
                        + v21 * (v3[v13] & v9)
                        + v10);
        v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8 * v14 + 192)
                                    + 16 * (v11 ^ (unsigned __int64)(unsigned int)(1 << v14)))
                        + v22
                        + v10);
        if ( v17 >= v18 )
          v19 = v17 > v18;
        else
          v19 = -1;
        if ( v19 >= 0 )
        {
          v4 = (v4 + v5) >> 1;
          v13 = v5;
        }
        v5 = v13;
      }
      while ( v13 + 1 != v4 );
    }
  }
  else if ( (unsigned __int16)*a2 )
  {
    v21 = a3;
    do
    {
      LODWORD(v22) = v3[4 * ((v4 + v5) >> 1)];
      if ( (int)ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(a1, &v22, &v21) > 0 )
        v4 = (v4 + v5) >> 1;
      else
        v5 = (v4 + v5) >> 1;
    }
    while ( v5 + 1 != v4 );
  }
  return v4;
}
