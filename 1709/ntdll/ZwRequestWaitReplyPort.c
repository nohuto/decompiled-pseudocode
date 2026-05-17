/*
 * XREFs of ZwRequestWaitReplyPort @ 0x1800A0500
 * Callers:
 *     CsrClientCallServer @ 0x1800047B0 (CsrClientCallServer.c)
 * Callees:
 *     <none>
 */

__int64 ZwRequestWaitReplyPort()
{
  __int64 result; // rax

  result = 34LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
