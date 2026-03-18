/*
 * XREFs of RtlAllocateHeap @ 0x14010DB70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x14010DBDC (RtlpAllocateHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x1402515C4 (RtlpHpAllocWithExceptionProtection.c)
 */

PVOID __stdcall RtlAllocateHeap(PVOID HeapHandle, ULONG Flags, SIZE_T Size)
{
  void *v3; // rbx

  v3 = 0LL;
  if ( !HeapHandle )
    RtlpLogHeapFailure(18, 0, 0, 0, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return (PVOID)RtlpHpAllocWithExceptionProtection(HeapHandle, Size, Flags);
  if ( (RtlpHpHeapFeatures & 2) == 0 )
    return (PVOID)RtlpAllocateHeapInternal(HeapHandle);
  return v3;
}
