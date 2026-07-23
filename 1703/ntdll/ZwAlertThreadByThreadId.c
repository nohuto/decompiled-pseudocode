/*
 * XREFs of ZwAlertThreadByThreadId @ 0x1800A60D0
 * Callers:
 *     sub_18000A978 @ 0x18000A978 (sub_18000A978.c)
 *     sub_18000AB78 @ 0x18000AB78 (sub_18000AB78.c)
 *     RtlWakeAllConditionVariable @ 0x180051860 (RtlWakeAllConditionVariable.c)
 *     sub_180071630 @ 0x180071630 (sub_180071630.c)
 *     sub_180073700 @ 0x180073700 (sub_180073700.c)
 *     sub_180077520 @ 0x180077520 (sub_180077520.c)
 *     sub_180086CA4 @ 0x180086CA4 (sub_180086CA4.c)
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
