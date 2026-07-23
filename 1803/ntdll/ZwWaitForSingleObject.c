/*
 * XREFs of ZwWaitForSingleObject @ 0x18009AB40
 * Callers:
 *     sub_180003FA8 @ 0x180003FA8 (sub_180003FA8.c)
 *     sub_18000469C @ 0x18000469C (sub_18000469C.c)
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     RtlReportSilentProcessExit @ 0x180048200 (RtlReportSilentProcessExit.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800494E0 (RtlWaitForWnfMetaNotification.c)
 *     RtlAcquireResourceShared @ 0x18006C6A0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006C780 (RtlAcquireResourceExclusive.c)
 *     sub_1800730D0 @ 0x1800730D0 (sub_1800730D0.c)
 *     RtlQueryProcessDebugInformation @ 0x180077500 (RtlQueryProcessDebugInformation.c)
 *     RtlWow64SuspendThread @ 0x180085460 (RtlWow64SuspendThread.c)
 *     sub_1800CB510 @ 0x1800CB510 (sub_1800CB510.c)
 *     RtlCreateProcessReflection @ 0x1800D0D60 (RtlCreateProcessReflection.c)
 *     sub_1800D12F0 @ 0x1800D12F0 (sub_1800D12F0.c)
 *     RtlSetProcessDebugInformation @ 0x1800D2E30 (RtlSetProcessDebugInformation.c)
 *     RtlReportSqmEscalation @ 0x1800D7320 (RtlReportSqmEscalation.c)
 *     sub_1800D7904 @ 0x1800D7904 (sub_1800D7904.c)
 *     sub_1800DE154 @ 0x1800DE154 (sub_1800DE154.c)
 *     sub_1800ECAC0 @ 0x1800ECAC0 (sub_1800ECAC0.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800EF780 (RtlDequeueUmsCompletionListItems.c)
 *     sub_1800F7730 @ 0x1800F7730 (sub_1800F7730.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 4;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
