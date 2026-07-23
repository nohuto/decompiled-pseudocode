/*
 * XREFs of ZwWaitForKeyedEvent @ 0x18009E3F0
 * Callers:
 *     sub_180082E7C @ 0x180082E7C (sub_180082E7C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWaitForKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 458;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
