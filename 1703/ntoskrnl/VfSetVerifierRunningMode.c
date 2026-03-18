/*
 * XREFs of VfSetVerifierRunningMode @ 0x140774CB8
 * Callers:
 *     VfSetVerifierInformationEx @ 0x14078818C (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x140812964 (ViInitSystemPhase0.c)
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
  dword_14034F6DC = a1;
  return result;
}
