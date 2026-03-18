/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x14017EB00
 * Callers:
 *     AdtpPackageParameters @ 0x14017E5D8 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
