/*
 * XREFs of ZwDelayExecution @ 0x18009B140
 * Callers:
 *     sub_180003970 @ 0x180003970 (sub_180003970.c)
 *     sub_18001F8B0 @ 0x18001F8B0 (sub_18001F8B0.c)
 *     sub_180031FD4 @ 0x180031FD4 (sub_180031FD4.c)
 *     sub_180038ED4 @ 0x180038ED4 (sub_180038ED4.c)
 *     sub_1800735B4 @ 0x1800735B4 (sub_1800735B4.c)
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 *     sub_1800CC6AC @ 0x1800CC6AC (sub_1800CC6AC.c)
 *     sub_1800D7F24 @ 0x1800D7F24 (sub_1800D7F24.c)
 *     sub_1800EB360 @ 0x1800EB360 (sub_1800EB360.c)
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
