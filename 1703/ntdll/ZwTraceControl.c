/*
 * XREFs of ZwTraceControl @ 0x1800A8990
 * Callers:
 *     sub_18000359C @ 0x18000359C (sub_18000359C.c)
 *     EtwReplyNotification @ 0x180004150 (EtwReplyNotification.c)
 *     sub_180010150 @ 0x180010150 (sub_180010150.c)
 *     sub_180019E6C @ 0x180019E6C (sub_180019E6C.c)
 *     sub_18001B270 @ 0x18001B270 (sub_18001B270.c)
 *     sub_180052270 @ 0x180052270 (sub_180052270.c)
 *     EtwSendNotification @ 0x18005F750 (EtwSendNotification.c)
 *     EtwEventWriteEndScenario @ 0x180060F20 (EtwEventWriteEndScenario.c)
 *     EtwEventActivityIdControl @ 0x180070C40 (EtwEventActivityIdControl.c)
 *     sub_18008354C @ 0x18008354C (sub_18008354C.c)
 *     EtwEventWriteStartScenario @ 0x18008F240 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x18008F730 (EtwRegisterSecurityProvider.c)
 *     sub_180104668 @ 0x180104668 (sub_180104668.c)
 *     sub_180104B00 @ 0x180104B00 (sub_180104B00.c)
 *     sub_180104D24 @ 0x180104D24 (sub_180104D24.c)
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

  result = 437;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
