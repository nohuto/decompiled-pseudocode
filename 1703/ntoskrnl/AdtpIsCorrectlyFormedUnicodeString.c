/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x1401563E8
 * Callers:
 *     AdtpPackageParameters @ 0x140155F00 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
