/*
 * XREFs of ZwUnsubscribeWnfStateChange @ 0x18009E350
 * Callers:
 *     sub_18004A750 @ 0x18004A750 (sub_18004A750.c)
 * Callees:
 *     <none>
 */

__int64 ZwUnsubscribeWnfStateChange()
{
  __int64 result; // rax

  result = 453LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
