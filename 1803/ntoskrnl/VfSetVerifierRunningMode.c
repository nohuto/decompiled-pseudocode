/*
 * XREFs of VfSetVerifierRunningMode @ 0x140824760
 * Callers:
 *     VfSetVerifierInformationEx @ 0x140837B68 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x1408C58B4 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfSetVerifierRunningMode(int a1)
{
  __int64 result; // rax

  if ( (unsigned int)(a1 - 1) > 3 )
    return 3221225485LL;
  VfVerifyMode = a1;
  result = 0LL;
  dword_1403AD1DC = a1;
  return result;
}
