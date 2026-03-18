/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x140697F18
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401E5608 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x14069A94C (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14069B2EC (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14069C1C0 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
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
