/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x140170804
 * Callers:
 *     RtlHpGlobalsInitialize @ 0x1401707CC (RtlHpGlobalsInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x14029A594 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x14029CC10 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlCreateHeap @ 0x1405E2E10 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned int v0; // ebx
  __int64 v1; // rax

  v0 = ExGenRandom(1) & 0x7FFFFFFF;
  v1 = ExGenRandom(1);
  LODWORD(v1) = v1 & 0x7FFFFFFF;
  return ((unsigned __int64)v0 << 32) | v1;
}
