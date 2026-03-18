/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x140287094
 * Callers:
 *     RtlAllocateHeap @ 0x1400AB580 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x1400AB5EC (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1402931AC (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlpHpAllocWithExceptionProtection(__int64 a1, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return 0LL;
  else
    return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
