/*
 * XREFs of NtCompareSigningLevels @ 0x1404521D0
 * Callers:
 *     <none>
 * Callees:
 *     SeCompareSigningLevels @ 0x1405040A0 (SeCompareSigningLevels.c)
 */

NTSTATUS __cdecl NtCompareSigningLevels(SE_SIGNING_LEVEL FirstSigningLevel, SE_SIGNING_LEVEL SecondSigningLevel)
{
  return (unsigned int)SeCompareSigningLevels(FirstSigningLevel, SecondSigningLevel) == 0 ? 0xC0000428 : 0;
}
