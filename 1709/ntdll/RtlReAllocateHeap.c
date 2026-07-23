/*
 * XREFs of RtlReAllocateHeap @ 0x18003C6F0
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180011F70 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x180049840 (RtlpAllocateUserBlockFromHeap.c)
 *     RtlAllocateHandle @ 0x180070CB0 (RtlAllocateHandle.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074F58 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrAddLoadAsDataTable @ 0x180079E20 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x18007AFB0 (LdrRemoveLoadAsDataTable.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D6828 (NtdllpReallocateStringRoutine.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED098 (RtlpMUIEnumerateFolder.c)
 *     _SafeReallocBlob @ 0x1800FF4B4 (_SafeReallocBlob.c)
 *     RtlDebugReAllocateHeap @ 0x180104040 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x18003C770 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180049470 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpTagReAllocateHeap @ 0x1800494B8 (RtlpHpTagReAllocateHeap.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 */

PVOID __cdecl RtlReAllocateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, SIZE_T Size)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(18, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return (PVOID)RtlpHpReAllocWithExceptionProtection(HeapHandle, Flags, BaseAddress, Size);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return (PVOID)RtlpHpTagReAllocateHeap(HeapHandle, BaseAddress, Size, Flags);
  return (PVOID)RtlpReAllocateHeapInternal((int)HeapHandle, 0LL, 0LL);
}
