/*
 * XREFs of ZwCompareObjects @ 0x18009BDD0
 * Callers:
 *     RtlIsCurrentProcess @ 0x18007C3C0 (RtlIsCurrentProcess.c)
 *     RtlIsCurrentThread @ 0x1800860B0 (RtlIsCurrentThread.c)
 * Callees:
 *     <none>
 */

__int64 ZwCompareObjects()
{
  __int64 result; // rax

  result = 153LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
