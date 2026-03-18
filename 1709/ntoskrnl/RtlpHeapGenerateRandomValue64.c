/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x14025BF98
 * Callers:
 *     RtlCreateHeap @ 0x1405D3930 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  return v0 | (unsigned int)ExGenRandom(1);
}
