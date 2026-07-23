/*
 * XREFs of ZwDelayExecution @ 0x1800A5980
 * Callers:
 *     sub_1800076D8 @ 0x1800076D8 (sub_1800076D8.c)
 *     sub_18002FBD4 @ 0x18002FBD4 (sub_18002FBD4.c)
 *     sub_180041490 @ 0x180041490 (sub_180041490.c)
 *     sub_180051828 @ 0x180051828 (sub_180051828.c)
 *     sub_18006E3A0 @ 0x18006E3A0 (sub_18006E3A0.c)
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 *     sub_18008AC70 @ 0x18008AC70 (sub_18008AC70.c)
 *     sub_1800DE6C4 @ 0x1800DE6C4 (sub_1800DE6C4.c)
 *     sub_1800EF328 @ 0x1800EF328 (sub_1800EF328.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  NTSTATUS result; // eax

  result = 52;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
