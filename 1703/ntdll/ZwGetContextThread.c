/*
 * XREFs of ZwGetContextThread @ 0x1800A7010
 * Callers:
 *     RtlRemoteCall @ 0x1800F6C40 (RtlRemoteCall.c)
 *     sub_1801038E0 @ 0x1801038E0 (sub_1801038E0.c)
 *     sub_180107AEC @ 0x180107AEC (sub_180107AEC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 233;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
