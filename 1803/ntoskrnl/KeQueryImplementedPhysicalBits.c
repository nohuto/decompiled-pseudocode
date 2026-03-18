/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x1401A5BBC
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x1407426C4 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
