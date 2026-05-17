/*
 * XREFs of ZwSuspendThread @ 0x1800A88D0
 * Callers:
 *     sub_1800D8360 @ 0x1800D8360 (sub_1800D8360.c)
 *     RtlWow64SuspendThreadEx @ 0x1800DCF70 (RtlWow64SuspendThreadEx.c)
 *     RtlRemoteCall @ 0x1800F6C40 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwSuspendThread()
{
  __int64 result; // rax

  result = 431LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
