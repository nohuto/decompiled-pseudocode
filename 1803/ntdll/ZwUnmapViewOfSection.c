/*
 * XREFs of ZwUnmapViewOfSection @ 0x18009B000
 * Callers:
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     sub_18002B698 @ 0x18002B698 (sub_18002B698.c)
 *     sub_18002BDB8 @ 0x18002BDB8 (sub_18002BDB8.c)
 *     sub_18002CD64 @ 0x18002CD64 (sub_18002CD64.c)
 *     sub_18002E0EC @ 0x18002E0EC (sub_18002E0EC.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180047210 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlCreateQueryDebugBuffer @ 0x18004C9A0 (RtlCreateQueryDebugBuffer.c)
 *     sub_18004EC98 @ 0x18004EC98 (sub_18004EC98.c)
 *     sub_18005FD84 @ 0x18005FD84 (sub_18005FD84.c)
 *     sub_180074114 @ 0x180074114 (sub_180074114.c)
 *     RtlDestroyQueryDebugBuffer @ 0x180077F50 (RtlDestroyQueryDebugBuffer.c)
 *     sub_180077F84 @ 0x180077F84 (sub_180077F84.c)
 *     sub_18007AFDC @ 0x18007AFDC (sub_18007AFDC.c)
 *     RtlGetLocaleFileMappingAddress @ 0x18007C4C0 (RtlGetLocaleFileMappingAddress.c)
 *     PssNtFreeWalkMarker @ 0x180086280 (PssNtFreeWalkMarker.c)
 *     LdrFlushAlternateResourceModules @ 0x1800876B0 (LdrFlushAlternateResourceModules.c)
 *     LdrResRelease @ 0x180088510 (LdrResRelease.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089CD0 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800D0D60 (RtlCreateProcessReflection.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D32A0 (RtlpQueryProcessDebugInformationRemote.c)
 *     sub_1800D3490 @ 0x1800D3490 (sub_1800D3490.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 *     sub_1800D6EB8 @ 0x1800D6EB8 (sub_1800D6EB8.c)
 *     RtlReportSqmEscalation @ 0x1800D7320 (RtlReportSqmEscalation.c)
 *     sub_1800D7BF4 @ 0x1800D7BF4 (sub_1800D7BF4.c)
 *     RtlComputeImportTableHash @ 0x1800DA800 (RtlComputeImportTableHash.c)
 *     sub_1800DBBCC @ 0x1800DBBCC (sub_1800DBBCC.c)
 *     sub_1800EC590 @ 0x1800EC590 (sub_1800EC590.c)
 *     sub_1800EC6A0 @ 0x1800EC6A0 (sub_1800EC6A0.c)
 *     sub_1800ECE90 @ 0x1800ECE90 (sub_1800ECE90.c)
 *     sub_1800F2694 @ 0x1800F2694 (sub_1800F2694.c)
 *     RtlHeapTrkInitialize @ 0x1800F3000 (RtlHeapTrkInitialize.c)
 *     sub_1800FD868 @ 0x1800FD868 (sub_1800FD868.c)
 *     sub_1800FF4A0 @ 0x1800FF4A0 (sub_1800FF4A0.c)
 *     sub_180109F60 @ 0x180109F60 (sub_180109F60.c)
 *     sub_18010A158 @ 0x18010A158 (sub_18010A158.c)
 *     sub_18010A448 @ 0x18010A448 (sub_18010A448.c)
 *     sub_18010A810 @ 0x18010A810 (sub_18010A810.c)
 *     sub_18010AD6C @ 0x18010AD6C (sub_18010AD6C.c)
 *     sub_18010B78C @ 0x18010B78C (sub_18010B78C.c)
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
