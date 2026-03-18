/*
 * XREFs of RtlRandomEx @ 0x140597790
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x1401E17A4 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1401E1B40 (CcUnmapInactiveViewsInternal.c)
 *     IopInitializeInMemoryDumpData @ 0x1401F7C84 (IopInitializeInMemoryDumpData.c)
 *     PspInitPhase2 @ 0x1408500D4 (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
