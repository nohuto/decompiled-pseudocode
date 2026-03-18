/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140697FC4
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1401E448C (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401E46A4 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401E5608 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x14068AB04 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14068B750 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpCleanupKeyNodeStack @ 0x140697B4C (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140698350 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14069A87C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x14069A94C (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14069A9BC (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14069B2EC (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14069C1C0 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyNodeStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 < 2 )
    return a1 + 32LL * a2 + 8;
  else
    return *(_QWORD *)(a1 + 72) + 32LL * (__int16)(a2 - 2);
}
