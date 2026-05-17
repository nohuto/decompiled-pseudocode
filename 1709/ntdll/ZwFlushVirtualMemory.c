/*
 * XREFs of ZwFlushVirtualMemory @ 0x1800A1D10
 * Callers:
 *     _ResCFlushMappedView @ 0x18010F194 (_ResCFlushMappedView.c)
 * Callees:
 *     <none>
 */

__int64 ZwFlushVirtualMemory()
{
  __int64 result; // rax

  result = 227LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
