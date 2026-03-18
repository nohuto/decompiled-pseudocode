/*
 * XREFs of CmpKeyEnumStackAdvanceInternal @ 0x1406FF598
 * Callers:
 *     CmpKeyEnumStackAdvance @ 0x1406FF528 (CmpKeyEnumStackAdvance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpCompareKeysByName @ 0x1406FA870 (CmpCompareKeysByName.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406FB104 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x1406FF918 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1406FFDC8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvanceInternal(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int16 v5; // bp
  __int64 v6; // r14
  __int64 v7; // rdx
  _QWORD *EntryAtLayerHeight; // rbx
  __int64 v9; // rax
  __int16 v10; // bx
  __int64 v11; // rbp
  __int16 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx

  v3 = 0;
  if ( *(_BYTE *)(a1 + 2) )
  {
    v5 = 0;
    if ( *(__int16 *)a1 >= 0 )
    {
      v6 = a1 + 8;
      do
      {
        EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(v6, v5);
        if ( EntryAtLayerHeight[2] )
        {
          v9 = CmpKeyEnumStackGetEntryAtLayerHeight(a1, v7, a3);
          CmpKeyEnumStackEntryAdvance(v9);
          if ( EntryAtLayerHeight[2] )
            (*(void (__fastcall **)(_QWORD, _QWORD *))(*EntryAtLayerHeight + 16LL))(
              *EntryAtLayerHeight,
              EntryAtLayerHeight + 3);
          memset(EntryAtLayerHeight, 0, 0x20uLL);
          *((_DWORD *)EntryAtLayerHeight + 2) = -1;
          EntryAtLayerHeight[3] = 0LL;
          *((_DWORD *)EntryAtLayerHeight + 6) = -1;
          *((_WORD *)EntryAtLayerHeight + 14) = 0;
        }
        ++v5;
      }
      while ( v5 <= *(__int16 *)a1 );
    }
  }
  v10 = *(_WORD *)a1;
  *(_BYTE *)(a1 + 2) = 1;
  v11 = 0LL;
  v12 = -1;
  if ( v10 < 0 )
    return (unsigned int)-2147483622;
  do
  {
    v13 = CmpKeyEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v10, a3);
    v14 = *(_QWORD *)(v13 + 120);
    if ( v14 && (!v11 || (int)CmpCompareKeysByName(*(_QWORD *)(v13 + 120), v11) < 0) )
    {
      v11 = v14;
      v12 = v10;
    }
    --v10;
  }
  while ( v10 >= 0 );
  if ( v11 )
  {
    for ( ; v12 >= 0; --v12 )
    {
      v15 = CmpKeyEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v12, a3);
      v16 = *(_QWORD *)(v15 + 120);
      if ( v16 && (v16 == v11 || !(unsigned int)CmpCompareKeysByName(v16, v11)) )
      {
        v17 = CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 8, v12);
        v18 = *(_QWORD *)v15;
        v19 = *(unsigned int *)(v15 + 112);
        *(_QWORD *)v17 = *(_QWORD *)v15;
        *(_DWORD *)(v17 + 8) = v19;
        *(_QWORD *)(v17 + 16) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v18 + 8))(v18, v19, v17 + 24);
      }
    }
  }
  else
  {
    return (unsigned int)-2147483622;
  }
  return v3;
}
