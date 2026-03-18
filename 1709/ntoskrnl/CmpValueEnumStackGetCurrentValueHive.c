/*
 * XREFs of CmpValueEnumStackGetCurrentValueHive @ 0x1401E4688
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14069C510 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackGetCurrentValueHive(__int64 a1)
{
  return *(_QWORD *)CmpValueEnumStackGetEntryAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 6));
}
