/*
 * XREFs of ZwContinue @ 0x1800A5B60
 * Callers:
 *     LdrInitializeThunk @ 0x180079D00 (LdrInitializeThunk.c)
 *     KiUserApcDispatcher @ 0x1800A8F00 (KiUserApcDispatcher.c)
 *     sub_1800A9270 @ 0x1800A9270 (sub_1800A9270.c)
 *     sub_1800A9590 @ 0x1800A9590 (sub_1800A9590.c)
 *     sub_180103880 @ 0x180103880 (sub_180103880.c)
 * Callees:
 *     <none>
 */

__int64 ZwContinue()
{
  __int64 result; // rax

  result = 67LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
