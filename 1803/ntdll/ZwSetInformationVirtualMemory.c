/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x18009DD70
 * Callers:
 *     sub_18004FBB8 @ 0x18004FBB8 (sub_18004FBB8.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationVirtualMemory()
{
  __int64 result; // rax

  result = 406LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
