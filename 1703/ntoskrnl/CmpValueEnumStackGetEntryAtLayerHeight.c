/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x14041CB78
 * Callers:
 *     CmpValueEnumStackGetCurrentValueHive @ 0x1401E0528 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401E0544 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x14041C86C (CmpSortedValueEnumStackAdvanceInternal.c)
 *     CmpSortedValueEnumStackCleanup @ 0x14041C980 (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14041CBDC (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackAdvance @ 0x140671354 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14067146C (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x140671514 (CmpValueEnumStackMatchingValueInUpperLayer.c)
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
