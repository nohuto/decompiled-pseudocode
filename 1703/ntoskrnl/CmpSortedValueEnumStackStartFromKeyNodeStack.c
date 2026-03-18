/*
 * XREFs of CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14041CBDC
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1401E032C (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x14041CA38 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14041CB78 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14066D9F8 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14066DAA4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpSortedValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2, __int64 a3, __int64 a4)
{
  __int16 v4; // di
  __int64 v7; // rbx
  PVOID TransientPoolWithTag; // rax
  __int64 result; // rax
  __int64 v10; // rsi
  _QWORD *EntryAtLayerHeight; // rbx
  __int16 v12; // dx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9

  v4 = *a2;
  if ( (__int16)(*a2 + 1) > 2 )
  {
    LOWORD(v7) = v4 - 1;
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(a1, 32LL * (__int16)(v4 - 1), 0x39374D43u);
    *(_QWORD *)(a1 + 80) = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    if ( (__int16)v7 > 0 )
    {
      v10 = 0LL;
      v7 = (unsigned __int16)v7;
      do
      {
        memset((void *)(v10 + *(_QWORD *)(a1 + 80)), 0, 0x20uLL);
        v10 += 32LL;
        --v7;
      }
      while ( v7 );
    }
  }
  for ( *(_WORD *)(a1 + 8) = v4; v4 >= 0; --v4 )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a2, (unsigned __int16)v4, a3, a4);
    a4 = CmpValueEnumStackGetEntryAtLayerHeight(a1, v12);
    if ( EntryAtLayerHeight[2] )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight) == 1 )
        return 0LL;
      result = CmpSortedValueEnumStackEntryStart(v15, v14, v13);
      if ( (int)result < 0 )
        return result;
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight) )
        return 0LL;
    }
  }
  return 0LL;
}
