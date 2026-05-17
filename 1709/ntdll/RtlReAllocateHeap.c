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

__int64 __fastcall RtlReAllocateHeap(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( !a1 )
    RtlpLogHeapFailure(18, 0, a3, 0, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return RtlpHpReAllocWithExceptionProtection(a1, a2, a3, a4);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  return RtlpReAllocateHeapInternal(a1, a2, a3, a4, 0LL, 0LL);
}
