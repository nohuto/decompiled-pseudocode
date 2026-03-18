/*
 * XREFs of CmpValueEnumStackStartFromKeyNodeStack @ 0x1401E46A4
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1401E448C (CmpGetValueCountForKeyNodeStack.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14069C654 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140697FC4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14069C510 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  unsigned int v2; // edi
  __int16 v5; // bx
  PVOID PoolWithTag; // rax
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int16 v10; // ax
  unsigned __int16 v11; // bx
  __int64 EntryAtLayerHeight; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx

  v2 = 0;
  if ( *a2 >= 2 )
  {
    v5 = *a2 - 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 32LL * v5, 0x30374D43u);
    *(_QWORD *)(a1 + 80) = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( v5 > 0 )
    {
      v7 = 0LL;
      v8 = (unsigned __int16)v5;
      do
      {
        v9 = v7 + *(_QWORD *)(a1 + 80);
        memset((void *)v9, 0, 0x20uLL);
        v7 += 32LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_DWORD *)(v9 + 16) = -1;
        *(_WORD *)(v9 + 20) = 0;
        --v8;
      }
      while ( v8 );
    }
  }
  v10 = *a2;
  v11 = 0;
  *(_WORD *)(a1 + 12) = *a2;
  if ( v10 >= 0 )
  {
    do
    {
      EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, v11);
      v16 = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight(a2, v13, v14, v15);
      v17 = v16[2];
      if ( v17 )
      {
        v18 = *v16;
        if ( *(_DWORD *)(v17 + 36) )
        {
          *(_QWORD *)EntryAtLayerHeight = v18;
          *(_DWORD *)(EntryAtLayerHeight + 24) = *(_DWORD *)(v17 + 36);
          *(_QWORD *)(EntryAtLayerHeight + 8) = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v18 + 8))(
                                                  v18,
                                                  *(unsigned int *)(v17 + 40),
                                                  EntryAtLayerHeight + 16);
        }
      }
      ++v11;
    }
    while ( v11 <= *(_WORD *)(a1 + 12) );
  }
  return v2;
}
