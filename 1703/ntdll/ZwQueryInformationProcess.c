/*
 * XREFs of ZwQueryInformationProcess @ 0x1800A5620
 * Callers:
 *     sub_1800026FC @ 0x1800026FC (sub_1800026FC.c)
 *     sub_180002898 @ 0x180002898 (sub_180002898.c)
 *     sub_180028C10 @ 0x180028C10 (sub_180028C10.c)
 *     sub_18002F120 @ 0x18002F120 (sub_18002F120.c)
 *     RtlDecodePointer @ 0x1800508D0 (RtlDecodePointer.c)
 *     sub_18006161C @ 0x18006161C (sub_18006161C.c)
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 *     sub_1800688A0 @ 0x1800688A0 (sub_1800688A0.c)
 *     sub_18006EC1C @ 0x18006EC1C (sub_18006EC1C.c)
 *     sub_1800704C0 @ 0x1800704C0 (sub_1800704C0.c)
 *     sub_180070674 @ 0x180070674 (sub_180070674.c)
 *     RtlEncodePointer @ 0x180077840 (RtlEncodePointer.c)
 *     sub_180081F44 @ 0x180081F44 (sub_180081F44.c)
 *     RtlSetProcessIsCritical @ 0x18008ED40 (RtlSetProcessIsCritical.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_180095680 @ 0x180095680 (sub_180095680.c)
 *     RtlCreateProcessReflection @ 0x1800D7DD0 (RtlCreateProcessReflection.c)
 *     RtlWow64SuspendThreadEx @ 0x1800DCF70 (RtlWow64SuspendThreadEx.c)
 *     RtlDecodeRemotePointer @ 0x1800DD320 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800DD390 (RtlEncodeRemotePointer.c)
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 *     sub_1800DE4A0 @ 0x1800DE4A0 (sub_1800DE4A0.c)
 *     sub_1800DE538 @ 0x1800DE538 (sub_1800DE538.c)
 *     sub_1800DE7C0 @ 0x1800DE7C0 (sub_1800DE7C0.c)
 *     sub_18010072C @ 0x18010072C (sub_18010072C.c)
 *     sub_180106D98 @ 0x180106D98 (sub_180106D98.c)
 *     sub_180107120 @ 0x180107120 (sub_180107120.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 25;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
