/*
 * XREFs of RtlRandom @ 0x14057F540
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x14015C0D8 (CcUnmapInactiveViewsInternal.c)
 *     CcGetRandomVacbArrayWithReference @ 0x14015C528 (CcGetRandomVacbArrayWithReference.c)
 *     PspInitPhase2 @ 0x1408C12D4 (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
