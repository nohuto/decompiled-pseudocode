/*
 * XREFs of ZwGetContextThread @ 0x1800A1DF0
 * Callers:
 *     PsspDumpThread @ 0x18005CAA4 (PsspDumpThread.c)
 *     RtlRemoteCall @ 0x1800F8110 (RtlRemoteCall.c)
 *     RtlpSaveUmsDebugRegisterState @ 0x180108840 (RtlpSaveUmsDebugRegisterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 234;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
