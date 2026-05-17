/*
 * XREFs of ZwCreateDebugObject @ 0x18009BEB0
 * Callers:
 *     DbgUiConnectToDbg @ 0x1800C9170 (DbgUiConnectToDbg.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateDebugObject()
{
  __int64 result; // rax

  result = 160LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
