/*
 * XREFs of NtCompareSigningLevels @ 0x1404521D0
 * Callers:
 *     <none>
 * Callees:
 *     SeCompareSigningLevels @ 0x1405040A0 (SeCompareSigningLevels.c)
 */

__int64 NtCompareSigningLevels()
{
  return (unsigned int)SeCompareSigningLevels() == 0 ? 0xC0000428 : 0;
}
