/*
 * XREFs of CmpValueEnumStackCleanup @ 0x1407011A8
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140222658 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1406EF510 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1406F09E4 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpValueEnumStackEntryCleanup @ 0x1402227F8 (CmpValueEnumStackEntryCleanup.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140700E14 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpValueEnumStackCleanup(__int64 a1)
{
  __int16 i; // di
  _QWORD *EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx

  for ( i = 0; i <= *(__int16 *)(a1 + 12); ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpValueEnumStackGetEntryAtLayerHeight(a1, i);
    CmpValueEnumStackEntryCleanup(EntryAtLayerHeight);
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 80);
  if ( v4 )
    CmSiFreeMemory(v4);
}
