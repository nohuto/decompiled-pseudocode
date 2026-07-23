/*
 * XREFs of ZwWaitForAlertByThreadId @ 0x1800A8B30
 * Callers:
 *     sub_18000BF34 @ 0x18000BF34 (sub_18000BF34.c)
 *     sub_18000C058 @ 0x18000C058 (sub_18000C058.c)
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     RtlSleepConditionVariableSRW @ 0x180071060 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x180071240 (RtlSleepConditionVariableCS.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     RtlDeleteTimerQueueEx @ 0x180086B40 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 450;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
