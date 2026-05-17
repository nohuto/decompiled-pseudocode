/*
 * XREFs of ZwConnectPort @ 0x1800A6670
 * Callers:
 *     sub_18000B7EC @ 0x18000B7EC (sub_18000B7EC.c)
 * Callees:
 *     <none>
 */

__int64 ZwConnectPort()
{
  __int64 result; // rax

  result = 156LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
