/*
 * XREFs of ZwCreateWorkerFactory @ 0x18009C370
 * Callers:
 *     sub_180057618 @ 0x180057618 (sub_180057618.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateWorkerFactory()
{
  __int64 result; // rax

  result = 198LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
