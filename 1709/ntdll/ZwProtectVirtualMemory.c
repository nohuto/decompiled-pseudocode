/*
 * XREFs of ZwProtectVirtualMemory @ 0x1800A0AC0
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x1800145D4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x180015220 (RtlpFreeUserBlockToHeap.c)
 *     LdrpDoPostSnapWork @ 0x18001C2FC (LdrpDoPostSnapWork.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002259C (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180022944 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrInitSecurityCookie @ 0x180022E04 (LdrInitSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002B994 (LdrpCfgProcessLoadConfig.c)
 *     LdrpChangeMrdataProtection @ 0x180038980 (LdrpChangeMrdataProtection.c)
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x180049840 (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpProtectHeap @ 0x18004C67C (RtlpProtectHeap.c)
 *     LdrpSetProtection @ 0x180084A44 (LdrpSetProtection.c)
 *     LdrpCorFixupImage @ 0x18008E810 (LdrpCorFixupImage.c)
 *     AVrfpSnapDllImports @ 0x1800DB67C (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 *     RtlResetStackOverflow @ 0x1800DDA78 (RtlResetStackOverflow.c)
 *     RtlpHpHeapProtect @ 0x180102D14 (RtlpHpHeapProtect.c)
 *     RtlpSubSegmentDebugInitialize @ 0x180106484 (RtlpSubSegmentDebugInitialize.c)
 *     RtlpHpLargeAllocationProtect @ 0x18010761C (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x180108950 (RtlpHpSegProtect.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  NTSTATUS result; // eax

  result = 80;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
