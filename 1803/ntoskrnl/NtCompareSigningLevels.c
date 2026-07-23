/*
 * XREFs of NtCompareSigningLevels @ 0x1405829D0
 * Callers:
 *     <none>
 * Callees:
 *     SeCompareSigningLevels @ 0x1404F1880 (SeCompareSigningLevels.c)
 */

NTSTATUS __cdecl NtCompareSigningLevels(SE_SIGNING_LEVEL FirstSigningLevel, SE_SIGNING_LEVEL SecondSigningLevel)
{
  return (unsigned int)SeCompareSigningLevels() == 0 ? 0xC0000428 : 0;
}
