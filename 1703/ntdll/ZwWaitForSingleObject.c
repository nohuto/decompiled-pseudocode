/*
 * XREFs of ZwWaitForSingleObject @ 0x1800A5380
 * Callers:
 *     sub_180004004 @ 0x180004004 (sub_180004004.c)
 *     sub_18000BC3C @ 0x18000BC3C (sub_18000BC3C.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     sub_180050DC4 @ 0x180050DC4 (sub_180050DC4.c)
 *     sub_180051190 @ 0x180051190 (sub_180051190.c)
 *     sub_180051300 @ 0x180051300 (sub_180051300.c)
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 *     RtlReportSilentProcessExit @ 0x180070200 (RtlReportSilentProcessExit.c)
 *     RtlAcquireResourceShared @ 0x1800738A0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180073980 (RtlAcquireResourceExclusive.c)
 *     RtlWaitForWnfMetaNotification @ 0x180087110 (RtlWaitForWnfMetaNotification.c)
 *     sub_1800D5D50 @ 0x1800D5D50 (sub_1800D5D50.c)
 *     RtlCreateProcessReflection @ 0x1800D7DD0 (RtlCreateProcessReflection.c)
 *     sub_1800D8360 @ 0x1800D8360 (sub_1800D8360.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9A60 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendThreadEx @ 0x1800DCF70 (RtlWow64SuspendThreadEx.c)
 *     RtlReportSqmEscalation @ 0x1800DDE90 (RtlReportSqmEscalation.c)
 *     sub_1800E2D04 @ 0x1800E2D04 (sub_1800E2D04.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 *     RtlDequeueUmsCompletionListItems @ 0x1800F26D0 (RtlDequeueUmsCompletionListItems.c)
 *     sub_18010D57C @ 0x18010D57C (sub_18010D57C.c)
 *     sub_18010D69C @ 0x18010D69C (sub_18010D69C.c)
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
