/*
 * XREFs of NtCompareSigningLevels @ 0x1406F01A0
 * Callers:
 *     <none>
 * Callees:
 *     SeCompareSigningLevels @ 0x140545CB0 (SeCompareSigningLevels.c)
 */

__int64 NtCompareSigningLevels()
{
  return (unsigned int)SeCompareSigningLevels() == 0 ? 0xC0000428 : 0;
}
