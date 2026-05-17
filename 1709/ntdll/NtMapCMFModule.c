/*
 * XREFs of NtMapCMFModule @ 0x1800A21F0
 * Callers:
 *     _ResCMapCMFModule @ 0x18001B470 (_ResCMapCMFModule.c)
 * Callees:
 *     <none>
 */

__int64 NtMapCMFModule()
{
  __int64 result; // rax

  result = 266LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
