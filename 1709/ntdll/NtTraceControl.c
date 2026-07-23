/*
 * XREFs of NtTraceControl @ 0x1800A37D0
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x180013070 (EtwpRegisterTpNotificationOnce.c)
 *     EtwSendNotification @ 0x1800192A0 (EtwSendNotification.c)
 *     EtwpRegisterProvider @ 0x18003652C (EtwpRegisterProvider.c)
 *     EtwpNotificationThread @ 0x180063910 (EtwpNotificationThread.c)
 *     EtwEventWriteEndScenario @ 0x180068080 (EtwEventWriteEndScenario.c)
 *     EtwEventActivityIdControl @ 0x18006E6E0 (EtwEventActivityIdControl.c)
 *     EtwpSetProviderTraits @ 0x1800755AC (EtwpSetProviderTraits.c)
 *     EtwpTrackProviderBinary @ 0x180075754 (EtwpTrackProviderBinary.c)
 *     EtwpGetMaxLogger @ 0x180085EB8 (EtwpGetMaxLogger.c)
 *     EtwEventWriteStartScenario @ 0x18008CC90 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x18008CE50 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x1801095E8 (EtwpUseDescriptorType.c)
 *     EtwpDemuxUmTraceHandle @ 0x180109AB0 (EtwpDemuxUmTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x180109CA0 (EtwpRegisterPrivateSession.c)
 *     EtwReplyNotification @ 0x180109EF0 (EtwReplyNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x180109F34 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 441;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
