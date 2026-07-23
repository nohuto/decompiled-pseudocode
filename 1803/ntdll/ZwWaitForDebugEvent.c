/*
 * XREFs of ZwWaitForDebugEvent @ 0x18009E3D0
 * Callers:
 *     DbgUiWaitStateChange @ 0x1800C9660 (DbgUiWaitStateChange.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForDebugEvent(
        HANDLE DebugObjectHandle,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE WaitStateChange)
{
  NTSTATUS result; // eax

  result = 457;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
