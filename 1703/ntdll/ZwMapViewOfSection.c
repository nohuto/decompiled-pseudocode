/*
 * XREFs of ZwMapViewOfSection @ 0x1800A5800
 * Callers:
 *     sub_180001E74 @ 0x180001E74 (sub_180001E74.c)
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     sub_180002898 @ 0x180002898 (sub_180002898.c)
 *     sub_180005870 @ 0x180005870 (sub_180005870.c)
 *     sub_18000B7EC @ 0x18000B7EC (sub_18000B7EC.c)
 *     sub_1800382D4 @ 0x1800382D4 (sub_1800382D4.c)
 *     sub_180038D24 @ 0x180038D24 (sub_180038D24.c)
 *     sub_1800546DC @ 0x1800546DC (sub_1800546DC.c)
 *     RtlCreateQueryDebugBuffer @ 0x180056140 (RtlCreateQueryDebugBuffer.c)
 *     sub_1800686F4 @ 0x1800686F4 (sub_1800686F4.c)
 *     sub_18007FB7C @ 0x18007FB7C (sub_18007FB7C.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0E0 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800D7DD0 (RtlCreateProcessReflection.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 *     RtlReportSqmEscalation @ 0x1800DDE90 (RtlReportSqmEscalation.c)
 *     sub_1800DE334 @ 0x1800DE334 (sub_1800DE334.c)
 *     RtlComputeImportTableHash @ 0x1800E0F80 (RtlComputeImportTableHash.c)
 *     sub_1800E2994 @ 0x1800E2994 (sub_1800E2994.c)
 *     sub_1800F0530 @ 0x1800F0530 (sub_1800F0530.c)
 *     sub_1800F0640 @ 0x1800F0640 (sub_1800F0640.c)
 *     sub_1800F0B70 @ 0x1800F0B70 (sub_1800F0B70.c)
 *     sub_1800F56C8 @ 0x1800F56C8 (sub_1800F56C8.c)
 *     RtlHeapTrkInitialize @ 0x1800F5D20 (RtlHeapTrkInitialize.c)
 *     sub_1800F65B0 @ 0x1800F65B0 (sub_1800F65B0.c)
 *     sub_1800FF018 @ 0x1800FF018 (sub_1800FF018.c)
 *     sub_180100A00 @ 0x180100A00 (sub_180100A00.c)
 *     sub_180106D98 @ 0x180106D98 (sub_180106D98.c)
 *     sub_1801077AC @ 0x1801077AC (sub_1801077AC.c)
 *     sub_180107E44 @ 0x180107E44 (sub_180107E44.c)
 *     sub_180107F68 @ 0x180107F68 (sub_180107F68.c)
 *     sub_1801080E0 @ 0x1801080E0 (sub_1801080E0.c)
 *     sub_180108260 @ 0x180108260 (sub_180108260.c)
 *     sub_18010D418 @ 0x18010D418 (sub_18010D418.c)
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
