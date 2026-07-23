/*
 * XREFs of ZwMapViewOfSection @ 0x18009AFC0
 * Callers:
 *     sub_18002BDB8 @ 0x18002BDB8 (sub_18002BDB8.c)
 *     sub_18002CD64 @ 0x18002CD64 (sub_18002CD64.c)
 *     RtlCreateQueryDebugBuffer @ 0x18004C9A0 (RtlCreateQueryDebugBuffer.c)
 *     sub_18004EC98 @ 0x18004EC98 (sub_18004EC98.c)
 *     sub_18005996C @ 0x18005996C (sub_18005996C.c)
 *     sub_18005FD84 @ 0x18005FD84 (sub_18005FD84.c)
 *     sub_180077F84 @ 0x180077F84 (sub_180077F84.c)
 *     sub_18007AFDC @ 0x18007AFDC (sub_18007AFDC.c)
 *     PssNtWalkSnapshot @ 0x180084C60 (PssNtWalkSnapshot.c)
 *     sub_180084FA4 @ 0x180084FA4 (sub_180084FA4.c)
 *     sub_1800850C4 @ 0x1800850C4 (sub_1800850C4.c)
 *     sub_180085234 @ 0x180085234 (sub_180085234.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089CD0 (LdrVerifyImageMatchesChecksumEx.c)
 *     sub_1800D08FC @ 0x1800D08FC (sub_1800D08FC.c)
 *     RtlCreateProcessReflection @ 0x1800D0D60 (RtlCreateProcessReflection.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 *     RtlReportSqmEscalation @ 0x1800D7320 (RtlReportSqmEscalation.c)
 *     sub_1800D7BF4 @ 0x1800D7BF4 (sub_1800D7BF4.c)
 *     RtlComputeImportTableHash @ 0x1800DA800 (RtlComputeImportTableHash.c)
 *     sub_1800DDDE4 @ 0x1800DDDE4 (sub_1800DDDE4.c)
 *     sub_1800EC590 @ 0x1800EC590 (sub_1800EC590.c)
 *     sub_1800EC6A0 @ 0x1800EC6A0 (sub_1800EC6A0.c)
 *     sub_1800ECE90 @ 0x1800ECE90 (sub_1800ECE90.c)
 *     sub_1800F2B6C @ 0x1800F2B6C (sub_1800F2B6C.c)
 *     RtlHeapTrkInitialize @ 0x1800F3000 (RtlHeapTrkInitialize.c)
 *     sub_1800F3B70 @ 0x1800F3B70 (sub_1800F3B70.c)
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

NTSTATUS __cdecl ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  NTSTATUS result; // eax

  result = 40;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
