/*
 * XREFs of ZwQuerySystemInformation @ 0x1800A59C0
 * Callers:
 *     sub_180003CFC @ 0x180003CFC (sub_180003CFC.c)
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     sub_180052EDC @ 0x180052EDC (sub_180052EDC.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     sub_180061354 @ 0x180061354 (sub_180061354.c)
 *     sub_180081774 @ 0x180081774 (sub_180081774.c)
 *     RtlSystemTimeToLocalTime @ 0x180086DE0 (RtlSystemTimeToLocalTime.c)
 *     sub_18008E2C4 @ 0x18008E2C4 (sub_18008E2C4.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_180095AC4 @ 0x180095AC4 (sub_180095AC4.c)
 *     sub_1800D39E4 @ 0x1800D39E4 (sub_1800D39E4.c)
 *     sub_1800D65C8 @ 0x1800D65C8 (sub_1800D65C8.c)
 *     sub_1800DF0F4 @ 0x1800DF0F4 (sub_1800DF0F4.c)
 *     RtlQueryModuleInformation @ 0x1800E2540 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800E4B20 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F3160 (RtlRegisterSecureMemoryCacheCallback.c)
 *     sub_1800F60C0 @ 0x1800F60C0 (sub_1800F60C0.c)
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
