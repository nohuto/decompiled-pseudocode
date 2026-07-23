/*
 * XREFs of ZwQueryEvent @ 0x1800A5DC0
 * Callers:
 *     sub_180107070 @ 0x180107070 (sub_180107070.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryEvent(
        HANDLE EventHandle,
        EVENT_INFORMATION_CLASS EventInformationClass,
        PVOID EventInformation,
        ULONG EventInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 86;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
