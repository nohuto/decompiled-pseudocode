/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x14017BCA4
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x14041CDB0 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
