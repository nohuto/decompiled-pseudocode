/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1800A8510
 * Callers:
 *     sub_180001600 @ 0x180001600 (sub_180001600.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationVirtualMemory()
{
  __int64 result; // rax

  result = 401LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
