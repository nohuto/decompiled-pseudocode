/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1800A6410
 * Callers:
 *     sub_180003CFC @ 0x180003CFC (sub_180003CFC.c)
 *     sub_180082E68 @ 0x180082E68 (sub_180082E68.c)
 *     RtlSendMsgToSm @ 0x18008E6C0 (RtlSendMsgToSm.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlpcSendWaitReceivePort()
{
  __int64 result; // rax

  result = 137LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
