/*
 * XREFs of NtCompareSigningLevels @ 0x1405829D0
 * Callers:
 *     <none>
 * Callees:
 *     SeCompareSigningLevels @ 0x1404F1880 (SeCompareSigningLevels.c)
 */

__int64 NtCompareSigningLevels()
{
  return (unsigned int)SeCompareSigningLevels() == 0 ? 0xC0000428 : 0;
}
