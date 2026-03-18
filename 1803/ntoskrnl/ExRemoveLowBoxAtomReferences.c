/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x1400A122C
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x140547090 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x1400A1240 (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
