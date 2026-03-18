/*
 * XREFs of ?BTreeNodeFindKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x140092E00
 * Callers:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x140092CBC (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 * Callees:
 *     ?Compare@ST_HASH_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x1400B0800 (-Compare@ST_HASH_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeNodeFindKey(
        _DWORD *a1,
        _DWORD *a2,
        unsigned int a3)
{
  _DWORD *v3; // r14
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 v7; // rbp
  int v8; // r12d
  unsigned int v9; // r13d
  _DWORD *v10; // r15
  unsigned int v11; // esi
  unsigned int v12; // r10d
  __int64 v13; // r9
  unsigned int v14; // r11d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v21; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+70h] [rbp+18h]
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v22 = a3;
  v3 = a2 + 4;
  v4 = (unsigned __int16)*a2;
  v5 = -1;
  if ( HIBYTE(*a2) )
  {
    if ( (unsigned __int16)*a2 )
    {
      v7 = (unsigned int)a1[86];
      v8 = a1[82];
      v9 = a1[83];
      v10 = a1 - 32;
      v21 = a1[84];
      v11 = a3 >> v8;
      v23 = v21 * (a3 & v9);
      do
      {
        v12 = (v4 + v5) >> 1;
        _BitScanReverse((unsigned int *)&v13, v11);
        v14 = v3[v12];
        v15 = v14 >> v8;
        _BitScanReverse((unsigned int *)&v16, v15);
        v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v10[2 * v16 + 48] + 16 * (v15 ^ (unsigned int)(1 << v16)))
                        + v21 * (v14 & v9)
                        + v7
                        + 8);
        v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v10[2 * v13 + 48]
                                    + 16 * (v11 ^ (unsigned __int64)(unsigned int)(1 << v13)))
                        + v23
                        + v7
                        + 8);
        if ( v17 >= v18 )
        {
          if ( v17 <= v18 )
          {
            if ( v14 < v22 )
              v19 = -1;
            else
              v19 = v14 > v22;
          }
          else
          {
            v19 = 1;
          }
        }
        else
        {
          v19 = -1;
        }
        if ( v19 >= 0 )
        {
          v4 = (v4 + v5) >> 1;
          v12 = v5;
        }
        v5 = v12;
      }
      while ( v12 + 1 != v4 );
    }
  }
  else if ( (unsigned __int16)*a2 )
  {
    v21 = a3;
    do
    {
      LODWORD(v23) = v3[4 * ((v4 + v5) >> 1)];
      if ( (int)ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR::Compare(a1, &v23, &v21) > 0 )
        v4 = (v4 + v5) >> 1;
      else
        v5 = (v4 + v5) >> 1;
    }
    while ( v5 + 1 != v4 );
  }
  return v4;
}
