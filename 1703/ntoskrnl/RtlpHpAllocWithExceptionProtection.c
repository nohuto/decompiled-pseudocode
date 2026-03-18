/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x14023BD44
 * Callers:
 *     RtlAllocateHeap @ 0x14000F6C0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x14000F72C (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x14023E0B8 (RtlpHeapExceptionFilter.c)
 */

char *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, int a3, __int16 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return 0LL;
  else
    return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
