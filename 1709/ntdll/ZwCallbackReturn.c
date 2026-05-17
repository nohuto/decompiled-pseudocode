/*
 * XREFs of ZwCallbackReturn @ 0x1800A0160
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x1800A3D10 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800A3DA0 (KiUserCallbackDispatcher.c)
 * Callees:
 *     <none>
 */

__int64 ZwCallbackReturn()
{
  __int64 result; // rax

  result = 5LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
