/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406FB104
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140222658 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14022286C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14022310C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1406EEF30 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1406EF510 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1406EFBBC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpCleanupKeyNodeStack @ 0x1406FAB20 (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1406FB4DC (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1406FF458 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x1406FF528 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x1406FF598 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x1406FFED4 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140700E78 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
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
