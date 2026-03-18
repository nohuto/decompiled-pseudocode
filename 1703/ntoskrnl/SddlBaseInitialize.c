/*
 * XREFs of SddlBaseInitialize @ 0x140162768
 * Callers:
 *     SepInitializationPhase1 @ 0x1405C48E0 (SepInitializationPhase1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
