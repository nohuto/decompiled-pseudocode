/*
 * XREFs of ZwCreateEvent @ 0x1800A09C0
 * Callers:
 *     LdrpCreateLoaderEvents @ 0x180009F28 (LdrpCreateLoaderEvents.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180013070 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpInitLoggerContext @ 0x180065218 (EtwpInitLoggerContext.c)
 *     RtlWaitForWnfMetaNotification @ 0x18006D800 (RtlWaitForWnfMetaNotification.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18006F920 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpWnfRegisterTpNotification @ 0x180081420 (RtlpWnfRegisterTpNotification.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800D18F0 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800D6CD0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D7260 (RtlpProcessReflectionStartup.c)
 *     WerpCreateCompletionEvent @ 0x1800DD5B0 (WerpCreateCompletionEvent.c)
 *     RtlCreateUmsCompletionList @ 0x1800F3060 (RtlCreateUmsCompletionList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  NTSTATUS result; // eax

  result = 72;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
