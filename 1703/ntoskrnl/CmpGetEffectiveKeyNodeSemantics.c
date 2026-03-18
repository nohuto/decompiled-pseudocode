/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x14066D9F8
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401E14EC (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14041CBDC (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140670278 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140670878 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKeyNodeSemantics(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 144) & 0x80000) != 0 )
    return *(_BYTE *)(a2 + 13) & 3;
  else
    return 0LL;
}
