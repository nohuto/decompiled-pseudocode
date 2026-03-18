/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x14069C510
 * Callers:
 *     CmpValueEnumStackGetCurrentValueHive @ 0x1401E4688 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401E46A4 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x14069BE80 (CmpSortedValueEnumStackAdvanceInternal.c)
 *     CmpSortedValueEnumStackCleanup @ 0x14069BF90 (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14069C1C0 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackAdvance @ 0x14069C39C (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14069C4B0 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14069C584 (CmpValueEnumStackMatchingValueInUpperLayer.c)
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
