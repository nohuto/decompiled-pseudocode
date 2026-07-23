/*
 * XREFs of ZwFlushVirtualMemory @ 0x1800A1D10
 * Callers:
 *     _ResCFlushMappedView @ 0x18010F194 (_ResCFlushMappedView.c)
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

  result = 227;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
