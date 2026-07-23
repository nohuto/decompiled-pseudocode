/*
 * XREFs of ZwAllocateReserveObject @ 0x18009B8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateReserveObject(
        PHANDLE MemoryReserveHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        MEMORY_RESERVE_TYPE Type)
{
  NTSTATUS result; // eax

  result = 113;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
