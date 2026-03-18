/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x140700E14
 * Callers:
 *     CmpValueEnumStackGetCurrentValueHive @ 0x140222850 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14022286C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x140700AD8 (CmpSortedValueEnumStackAdvanceInternal.c)
 *     CmpSortedValueEnumStackCleanup @ 0x140700BE8 (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140700E78 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackAdvance @ 0x14070104C (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x1407011A8 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x140701250 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpValueEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 < 2 )
    return a1 + 32LL * a2 + 16;
  else
    return *(_QWORD *)(a1 + 80) + 32LL * (__int16)(a2 - 2);
}
