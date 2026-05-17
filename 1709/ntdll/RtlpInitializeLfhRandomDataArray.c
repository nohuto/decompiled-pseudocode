/*
 * XREFs of RtlpInitializeLfhRandomDataArray @ 0x18004AE8C
 * Callers:
 *     RtlpHpLfhContextInitialize @ 0x180004254 (RtlpHpLfhContextInitialize.c)
 *     RtlpCreateLowFragHeap @ 0x180006FD8 (RtlpCreateLowFragHeap.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x18004944C (RtlpHeapGenerateRandomValue64.c)
 */

unsigned __int64 RtlpInitializeLfhRandomDataArray()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  unsigned __int64 result; // rax

  v0 = RtlpLowFragHeapRandomData;
  v1 = 32LL;
  do
  {
    result = RtlpHeapGenerateRandomValue64() & 0x7F7F7F7F7F7F7F7FLL;
    *v0++ = result;
    --v1;
  }
  while ( v1 );
  return result;
}
