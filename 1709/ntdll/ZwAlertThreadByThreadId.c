/*
 * XREFs of ZwAlertThreadByThreadId @ 0x1800A0E90
 * Callers:
 *     TppIteWakeWaiters @ 0x18000A5B0 (TppIteWakeWaiters.c)
 *     RtlpTpTimerQueueRundown @ 0x180015460 (RtlpTpTimerQueueRundown.c)
 *     RtlWakeAllConditionVariable @ 0x180062FF0 (RtlWakeAllConditionVariable.c)
 *     RtlpWakeByAddress @ 0x18006F6E8 (RtlpWakeByAddress.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x18006F8EC (RtlpWaitOnAddressWakeEntireList.c)
 *     RtlpWakeConditionVariable @ 0x180075CE0 (RtlpWakeConditionVariable.c)
 *     RtlpWakeSRWLock @ 0x180075F18 (RtlpWakeSRWLock.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlertThreadByThreadId(HANDLE ThreadId)
{
  NTSTATUS result; // eax

  result = 111;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
