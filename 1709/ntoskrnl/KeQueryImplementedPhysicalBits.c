/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x14017B428
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x14043C7EC (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
