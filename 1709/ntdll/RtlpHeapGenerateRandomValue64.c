/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x18004944C
 * Callers:
 *     RtlpHpHeapAllocate @ 0x180003B70 (RtlpHpHeapAllocate.c)
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x18004AE8C (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpCreateHeapEncoding @ 0x18004D170 (RtlpCreateHeapEncoding.c)
 *     RtlInitializeHeapManager @ 0x1800EEF80 (RtlInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18010635C (RtlpInitializeLowFragHeapManager.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x180046DE0 (RtlpHeapGenerateRandomValue32.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32() << 32;
  return v0 | (unsigned int)RtlpHeapGenerateRandomValue32();
}
