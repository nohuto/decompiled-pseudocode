/*
 * XREFs of ZwWorkerFactoryWorkerReady @ 0x18009AAE0
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     <none>
 */

__int64 ZwWorkerFactoryWorkerReady()
{
  __int64 result; // rax

  result = 1LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
