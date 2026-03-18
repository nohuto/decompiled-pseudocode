/*
 * XREFs of CmpValueEnumStackGetCurrentValueHive @ 0x1401E0528
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x140661DD4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14041CB78 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackGetCurrentValueHive(__int64 a1)
{
  return *(_QWORD *)CmpValueEnumStackGetEntryAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 6));
}
