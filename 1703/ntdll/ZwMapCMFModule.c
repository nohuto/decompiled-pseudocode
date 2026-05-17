/*
 * XREFs of ZwMapCMFModule @ 0x1800A7410
 * Callers:
 *     sub_18005DC24 @ 0x18005DC24 (sub_18005DC24.c)
 * Callees:
 *     <none>
 */

__int64 ZwMapCMFModule()
{
  __int64 result; // rax

  result = 265LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
