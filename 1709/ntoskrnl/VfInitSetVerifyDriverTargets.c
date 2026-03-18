/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x14086C870
 * Callers:
 *     ViInitSystemPhase0 @ 0x140848008 (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x14086CAD8 (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, unsigned int a2)
{
  int v2; // ebx
  void *result; // rax

  if ( a2 > 0x1800 )
  {
    word_14087EB6E = 0;
    a2 = 6142;
  }
  v2 = a2;
  result = memmove(MmVerifyDriverBuffer, Src, a2);
  VfOptionFlags &= ~1u;
  MmVerifyDriverBufferLength = v2;
  return result;
}
