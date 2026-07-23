/*
 * XREFs of ZwGetContextThread @ 0x18009C810
 * Callers:
 *     RtlRemoteCall @ 0x1800F45B0 (RtlRemoteCall.c)
 *     sub_180104240 @ 0x180104240 (sub_180104240.c)
 *     sub_18010BAC8 @ 0x18010BAC8 (sub_18010BAC8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 235;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
