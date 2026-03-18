/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x1408E15B8
 * Callers:
 *     ViInitSystemPhase0 @ 0x1408C58B4 (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x1408E1820 (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, unsigned int a2)
{
  int v2; // ebx
  void *result; // rax

  if ( a2 > 0x1800 )
  {
    word_1408F4B6E = 0;
    a2 = 6142;
  }
  v2 = a2;
  result = memmove(MmVerifyDriverBuffer, Src, a2);
  VfOptionFlags &= ~1u;
  MmVerifyDriverBufferLength = v2;
  return result;
}
