/*
 * XREFs of RtlFreeHeap @ 0x14010D190
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x14010DBDC (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x14010D208 (RtlpFreeHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x14025163C (RtlpHpFreeWithExceptionProtection.c)
 */

BOOLEAN __stdcall RtlFreeHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  BOOLEAN v3; // bl

  v3 = 0;
  if ( BaseAddress )
  {
    if ( !HeapHandle )
      RtlpLogHeapFailure(18, 0, (_DWORD)BaseAddress, 0, 0LL);
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      return RtlpHpFreeWithExceptionProtection(HeapHandle, BaseAddress, Flags);
    if ( (RtlpHpHeapFeatures & 2) != 0 )
      return v3;
    return RtlpFreeHeapInternal(HeapHandle, BaseAddress, Flags);
  }
  return 1;
}
