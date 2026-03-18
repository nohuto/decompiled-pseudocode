/*
 * XREFs of MiCheckForConflictingVadExistence @ 0x14003E8F0
 * Callers:
 *     MiIsVaRangeAvailable @ 0x1404B5D80 (MiIsVaRangeAvailable.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x14003E910 (MiCheckForConflictingVad.c)
 */

_BOOL8 MiCheckForConflictingVadExistence()
{
  return MiCheckForConflictingVad() != 0;
}
