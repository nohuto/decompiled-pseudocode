/*
 * XREFs of ZwQuerySystemInformation @ 0x18009B180
 * Callers:
 *     sub_1800051E4 @ 0x1800051E4 (sub_1800051E4.c)
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 *     sub_18007D0E0 @ 0x18007D0E0 (sub_18007D0E0.c)
 *     RtlSystemTimeToLocalTime @ 0x18007D950 (RtlSystemTimeToLocalTime.c)
 *     sub_18008781C @ 0x18008781C (sub_18008781C.c)
 *     sub_1800C8094 @ 0x1800C8094 (sub_1800C8094.c)
 *     sub_1800CBD88 @ 0x1800CBD88 (sub_1800CBD88.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D0C98 @ 0x1800D0C98 (sub_1800D0C98.c)
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 *     sub_1800D8968 @ 0x1800D8968 (sub_1800D8968.c)
 *     RtlQueryModuleInformation @ 0x1800DD990 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800DF5A0 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F0240 (RtlRegisterSecureMemoryCacheCallback.c)
 *     sub_1800F110C @ 0x1800F110C (sub_1800F110C.c)
 *     sub_1800F33A0 @ 0x1800F33A0 (sub_1800F33A0.c)
 *     sub_180102178 @ 0x180102178 (sub_180102178.c)
 *     sub_180102784 @ 0x180102784 (sub_180102784.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 54;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
