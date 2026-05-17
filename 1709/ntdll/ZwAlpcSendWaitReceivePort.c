/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1800A11D0
 * Callers:
 *     SendMessageToWERService @ 0x18000242C (SendMessageToWERService.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18008662C (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlSendMsgToSm @ 0x18008C060 (RtlSendMsgToSm.c)
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
