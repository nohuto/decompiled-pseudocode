/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x1406FAFF4
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14022310C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x1406FF528 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x1406FFED4 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140700E78 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKeyNodeSemantics(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x80000) != 0 )
    return *(_BYTE *)(a2 + 13) & 3;
  else
    return 0LL;
}
