/*
 * XREFs of RtlFreeHeap @ 0x1400AB340
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1400AB5EC (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x1402945C8 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x1400AB3B8 (RtlpFreeHeapInternal.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x14028710C (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 */

BOOLEAN __stdcall RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  BOOLEAN v3; // bl

  v3 = 0;
  if ( BaseAddress )
  {
    if ( !HeapHandle )
      RtlpLogHeapFailure(19, 0, (_DWORD)BaseAddress, 0, 0LL);
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      return RtlpHpFreeWithExceptionProtection(HeapHandle, BaseAddress, Flags);
    if ( (RtlpHpHeapFeatures & 2) != 0 )
      return v3;
    return RtlpFreeHeapInternal(HeapHandle, BaseAddress, Flags);
  }
  return 1;
}
