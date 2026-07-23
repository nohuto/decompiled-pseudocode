/*
 * XREFs of ZwAlertThreadByThreadId @ 0x18009B890
 * Callers:
 *     sub_18004A8A8 @ 0x18004A8A8 (sub_18004A8A8.c)
 *     sub_18004ADC0 @ 0x18004ADC0 (sub_18004ADC0.c)
 *     sub_180055078 @ 0x180055078 (sub_180055078.c)
 *     sub_1800556F8 @ 0x1800556F8 (sub_1800556F8.c)
 *     sub_180070AAC @ 0x180070AAC (sub_180070AAC.c)
 *     RtlWakeAllConditionVariable @ 0x1800735E0 (RtlWakeAllConditionVariable.c)
 *     sub_18007C880 @ 0x18007C880 (sub_18007C880.c)
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
