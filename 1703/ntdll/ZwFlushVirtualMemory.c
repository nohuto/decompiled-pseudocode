/*
 * XREFs of ZwFlushVirtualMemory @ 0x1800A6F30
 * Callers:
 *     sub_18010C198 @ 0x18010C198 (sub_18010C198.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        PIO_STATUS_BLOCK IoStatus)
{
  NTSTATUS result; // eax

  result = 226;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
