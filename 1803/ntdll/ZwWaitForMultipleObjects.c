/*
 * XREFs of ZwWaitForMultipleObjects @ 0x18009B610
 * Callers:
 *     TpTrimPools @ 0x18007F020 (TpTrimPools.c)
 *     RtlCreateProcessReflection @ 0x1800D0D60 (RtlCreateProcessReflection.c)
 *     sub_1800D7E44 @ 0x1800D7E44 (sub_1800D7E44.c)
 *     sub_1800F3E58 @ 0x1800F3E58 (sub_1800F3E58.c)
 * Callees:
 *     <none>
 */

__int64 ZwWaitForMultipleObjects()
{
  __int64 result; // rax

  result = 91LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
