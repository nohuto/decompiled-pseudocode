/*
 * XREFs of RtlRandomEx @ 0x140459080
 * Callers:
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1401DE70C (CcGetRandomVacbArrayWithReference.c)
 *     IopInitializeInMemoryDumpData @ 0x1401F232C (IopInitializeInMemoryDumpData.c)
 *     PspInitPhase2 @ 0x14081F848 (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
