/*
 * XREFs of ZwAlpcConnectPort @ 0x18009B990
 * Callers:
 *     RtlConnectToSm @ 0x180087B10 (RtlConnectToSm.c)
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlpcConnectPort()
{
  __int64 result; // rax

  result = 119LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
