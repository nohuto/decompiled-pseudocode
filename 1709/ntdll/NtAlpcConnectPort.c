/*
 * XREFs of NtAlpcConnectPort @ 0x1800A0F70
 * Callers:
 *     SendMessageToWERService @ 0x18000242C (SendMessageToWERService.c)
 *     RtlConnectToSm @ 0x18008BE90 (RtlConnectToSm.c)
 * Callees:
 *     <none>
 */

__int64 NtAlpcConnectPort()
{
  __int64 result; // rax

  result = 118LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
