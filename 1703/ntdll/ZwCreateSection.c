/*
 * XREFs of ZwCreateSection @ 0x1800A5C40
 * Callers:
 *     sub_180001E74 @ 0x180001E74 (sub_180001E74.c)
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     sub_180002898 @ 0x180002898 (sub_180002898.c)
 *     sub_180005870 @ 0x180005870 (sub_180005870.c)
 *     sub_18000B7EC @ 0x18000B7EC (sub_18000B7EC.c)
 *     sub_1800382D4 @ 0x1800382D4 (sub_1800382D4.c)
 *     sub_18004C7E0 @ 0x18004C7E0 (sub_18004C7E0.c)
 *     sub_1800546DC @ 0x1800546DC (sub_1800546DC.c)
 *     RtlCreateQueryDebugBuffer @ 0x180056140 (RtlCreateQueryDebugBuffer.c)
 *     sub_18007FB7C @ 0x18007FB7C (sub_18007FB7C.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0E0 (LdrVerifyImageMatchesChecksumEx.c)
 *     RtlCreateProcessReflection @ 0x1800D7DD0 (RtlCreateProcessReflection.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 *     RtlReportSqmEscalation @ 0x1800DDE90 (RtlReportSqmEscalation.c)
 *     sub_1800DE334 @ 0x1800DE334 (sub_1800DE334.c)
 *     RtlComputeImportTableHash @ 0x1800E0F80 (RtlComputeImportTableHash.c)
 *     sub_1800E2994 @ 0x1800E2994 (sub_1800E2994.c)
 *     sub_1800F56C8 @ 0x1800F56C8 (sub_1800F56C8.c)
 *     sub_1800FF018 @ 0x1800FF018 (sub_1800FF018.c)
 *     sub_180100A00 @ 0x180100A00 (sub_180100A00.c)
 *     sub_180106D98 @ 0x180106D98 (sub_180106D98.c)
 *     sub_1801077AC @ 0x1801077AC (sub_1801077AC.c)
 *     sub_18010C634 @ 0x18010C634 (sub_18010C634.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  NTSTATUS result; // eax

  result = 74;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
