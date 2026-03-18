/*
 * XREFs of PoGetFrequencyBucket @ 0x1400035F4
 * Callers:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KiEndDebugAccumulation @ 0x140209938 (KiEndDebugAccumulation.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140003620 (PpmPerfGetCurrentFrequency.c)
 */

__int64 __fastcall PoGetFrequencyBucket(__int64 a1)
{
  unsigned int CurrentFrequency; // edx

  CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0LL);
  if ( CurrentFrequency < 0x4B )
    return CurrentFrequency / 0x19;
  else
    return 3;
}
