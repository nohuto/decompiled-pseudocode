/*
 * XREFs of VfSetVerifierRunningMode @ 0x1407B6A74
 * Callers:
 *     VfSetVerifierInformationEx @ 0x1407CA600 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x140848008 (ViInitSystemPhase0.c)
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
  dword_14036A13C = a1;
  return result;
}
