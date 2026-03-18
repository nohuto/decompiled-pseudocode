/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x14023E1CC
 * Callers:
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  return v0 | (unsigned int)ExGenRandom(1);
}
