/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x1402515C4
 * Callers:
 *     RtlAllocateHeap @ 0x14010DB70 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x14010DBDC (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x140253ED0 (RtlpHeapExceptionFilter.c)
 */

char *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, int a3, __int16 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return 0LL;
  else
    return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
