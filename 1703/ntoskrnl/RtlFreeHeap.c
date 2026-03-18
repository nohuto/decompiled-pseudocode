/*
 * XREFs of RtlFreeHeap @ 0x14000ECC0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x14000F72C (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x14000ED38 (RtlpFreeHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x14017D77C (RtlpLogHeapFailure.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x14023BDBC (RtlpHpFreeWithExceptionProtection.c)
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
