/*
 * XREFs of ZwTraceControl @ 0x18009E210
 * Callers:
 *     EtwEventWriteEndScenario @ 0x1800048C0 (EtwEventWriteEndScenario.c)
 *     sub_180005610 @ 0x180005610 (sub_180005610.c)
 *     EtwSendNotification @ 0x1800081C0 (EtwSendNotification.c)
 *     sub_180029538 @ 0x180029538 (sub_180029538.c)
 *     InitFn @ 0x1800571C0 (InitFn.c)
 *     EtwEventActivityIdControl @ 0x18006B380 (EtwEventActivityIdControl.c)
 *     sub_18007278C @ 0x18007278C (sub_18007278C.c)
 *     sub_1800728E0 @ 0x1800728E0 (sub_1800728E0.c)
 *     sub_1800812F0 @ 0x1800812F0 (sub_1800812F0.c)
 *     EtwEventWriteStartScenario @ 0x180088410 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x18008AC60 (EtwRegisterSecurityProvider.c)
 *     sub_1801068A8 @ 0x1801068A8 (sub_1801068A8.c)
 *     sub_180106D70 @ 0x180106D70 (sub_180106D70.c)
 *     sub_180107084 @ 0x180107084 (sub_180107084.c)
 *     EtwReplyNotification @ 0x180107660 (EtwReplyNotification.c)
 *     sub_1801076A4 @ 0x1801076A4 (sub_1801076A4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTraceControl(
        ETWTRACECONTROLCODE TraceControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 443;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
