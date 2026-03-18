/*
 * XREFs of SddlBaseInitialize @ 0x140180398
 * Callers:
 *     SepInitializationPhase1 @ 0x140641CF0 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x140641F84 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
