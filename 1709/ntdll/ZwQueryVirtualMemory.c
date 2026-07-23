/*
 * XREFs of ZwQueryVirtualMemory @ 0x1800A0520
 * Callers:
 *     RtlpGetTargetRvaFlag @ 0x1800016B8 (RtlpGetTargetRvaFlag.c)
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     LdrResSearchResource @ 0x18001D400 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x18001F540 (LdrpResGetMappingSize.c)
 *     RtlpWalkFrameChain @ 0x180024BB0 (RtlpWalkFrameChain.c)
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     LdrpGetImageSize @ 0x180029E30 (LdrpGetImageSize.c)
 *     RtlpHpHeapValidateProtection @ 0x180048FE8 (RtlpHpHeapValidateProtection.c)
 *     RtlpProtectHeap @ 0x18004C67C (RtlpProtectHeap.c)
 *     PsspCaptureVaSpaceInformation @ 0x180059BCC (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x18005CD24 (PsspCaptureAuxiliaryPages.c)
 *     LdrpProtectAndRelocateImage @ 0x180084964 (LdrpProtectAndRelocateImage.c)
 *     LdrpTouchThreadStack @ 0x180085424 (LdrpTouchThreadStack.c)
 *     RtlLockCurrentThread @ 0x180086FB0 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x1800870E0 (RtlUnlockCurrentThread.c)
 *     LdrpCheckPagesForTampering @ 0x180089CF4 (LdrpCheckPagesForTampering.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180089DF8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrIsEnclaveAddress @ 0x1800D01C0 (LdrIsEnclaveAddress.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D6844 (LdrpCaptureCriticalThunks.c)
 *     RtlResetStackOverflow @ 0x1800DDA78 (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800EF9F8 (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F3D60 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800F4778 (RtlpScanProcessVirtualMemory.c)
 *     RtlGetNonVolatileToken @ 0x1800F4BD0 (RtlGetNonVolatileToken.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F6A00 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpHpHeapProtect @ 0x180102D14 (RtlpHpHeapProtect.c)
 *     RtlDebugCreateHeap @ 0x180103588 (RtlDebugCreateHeap.c)
 *     RtlpHpLargeAllocationProtect @ 0x18010761C (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x180108950 (RtlpHpSegProtect.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS result; // eax

  result = 35;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
