/*
 * XREFs of SddlBaseInitialize @ 0x140151168
 * Callers:
 *     SepInitializationPhase1 @ 0x1405D7CD4 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x1405D7F68 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
