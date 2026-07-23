/*
 * XREFs of ZwUnmapViewOfSection @ 0x1800A5840
 * Callers:
 *     sub_180001E74 @ 0x180001E74 (sub_180001E74.c)
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     sub_180002898 @ 0x180002898 (sub_180002898.c)
 *     sub_180005870 @ 0x180005870 (sub_180005870.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180010CF0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_1800382D4 @ 0x1800382D4 (sub_1800382D4.c)
 *     sub_180038D24 @ 0x180038D24 (sub_180038D24.c)
 *     sub_1800546DC @ 0x1800546DC (sub_1800546DC.c)
 *     RtlCreateQueryDebugBuffer @ 0x180056140 (RtlCreateQueryDebugBuffer.c)
 *     sub_18005CB40 @ 0x18005CB40 (sub_18005CB40.c)
 *     RtlDestroyQueryDebugBuffer @ 0x1800686C0 (RtlDestroyQueryDebugBuffer.c)
 *     sub_1800686F4 @ 0x1800686F4 (sub_1800686F4.c)
 *     sub_180079080 @ 0x180079080 (sub_180079080.c)
 *     sub_18007FB7C @ 0x18007FB7C (sub_18007FB7C.c)
 *     RtlGetLocaleFileMappingAddress @ 0x180080A60 (RtlGetLocaleFileMappingAddress.c)
 *     LdrResRelease @ 0x18008C450 (LdrResRelease.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0E0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrFlushAlternateResourceModules @ 0x18008E170 (LdrFlushAlternateResourceModules.c)
 *     RtlCreateProcessReflection @ 0x1800D7DD0 (RtlCreateProcessReflection.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D9EB0 (RtlpQueryProcessDebugInformationRemote.c)
 *     sub_1800D9FA0 @ 0x1800D9FA0 (sub_1800D9FA0.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 *     RtlReportExceptionEx @ 0x1800DD4D0 (RtlReportExceptionEx.c)
 *     sub_1800DD9C0 @ 0x1800DD9C0 (sub_1800DD9C0.c)
 *     RtlReportSqmEscalation @ 0x1800DDE90 (RtlReportSqmEscalation.c)
 *     sub_1800DE334 @ 0x1800DE334 (sub_1800DE334.c)
 *     RtlComputeImportTableHash @ 0x1800E0F80 (RtlComputeImportTableHash.c)
 *     sub_1800E1F0C @ 0x1800E1F0C (sub_1800E1F0C.c)
 *     sub_1800F0530 @ 0x1800F0530 (sub_1800F0530.c)
 *     sub_1800F0640 @ 0x1800F0640 (sub_1800F0640.c)
 *     sub_1800F0B70 @ 0x1800F0B70 (sub_1800F0B70.c)
 *     sub_1800F5104 @ 0x1800F5104 (sub_1800F5104.c)
 *     RtlHeapTrkInitialize @ 0x1800F5D20 (RtlHeapTrkInitialize.c)
 *     sub_1800FF018 @ 0x1800FF018 (sub_1800FF018.c)
 *     sub_180100A00 @ 0x180100A00 (sub_180100A00.c)
 *     PssNtFreeWalkMarker @ 0x180106A20 (PssNtFreeWalkMarker.c)
 *     sub_180106D98 @ 0x180106D98 (sub_180106D98.c)
 *     sub_1801077AC @ 0x1801077AC (sub_1801077AC.c)
 *     sub_18010D634 @ 0x18010D634 (sub_18010D634.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  NTSTATUS result; // eax

  result = 42;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
