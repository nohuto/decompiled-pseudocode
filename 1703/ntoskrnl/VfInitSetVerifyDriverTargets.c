/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x140835640
 * Callers:
 *     ViInitSystemPhase0 @ 0x140812964 (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x1408358A0 (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, size_t Size)
{
  unsigned int v2; // ebx
  void *result; // rax

  v2 = Size;
  if ( (unsigned int)Size > 0x1800 )
  {
    v2 = 6142;
    word_1407C7ADE = 0;
  }
  result = memmove(MmVerifyDriverBuffer, Src, v2);
  VfOptionFlags &= ~1u;
  MmVerifyDriverBufferLength = v2;
  return result;
}
