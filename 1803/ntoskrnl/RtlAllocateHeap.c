/*
 * XREFs of RtlAllocateHeap @ 0x1400AB580
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x1400AB5EC (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x140287094 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 */

PVOID __stdcall RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  void *v3; // rbx

  v3 = 0LL;
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, 0, 0, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return (PVOID)RtlpHpAllocWithExceptionProtection(HeapHandle, Size, Flags);
  if ( (RtlpHpHeapFeatures & 2) == 0 )
    return (PVOID)RtlpAllocateHeapInternal((int)HeapHandle);
  return v3;
}
