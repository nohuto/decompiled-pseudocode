/*
 * XREFs of ZwSetWnfProcessNotificationEvent @ 0x18009E010
 * Callers:
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetWnfProcessNotificationEvent(HANDLE NotificationEvent)
{
  NTSTATUS result; // eax

  result = 427;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
