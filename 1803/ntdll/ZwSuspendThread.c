/*
 * XREFs of ZwSuspendThread @ 0x18009E130
 * Callers:
 *     RtlWow64SuspendThread @ 0x180085460 (RtlWow64SuspendThread.c)
 *     sub_1800D12F0 @ 0x1800D12F0 (sub_1800D12F0.c)
 *     RtlRemoteCall @ 0x1800F45B0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  NTSTATUS result; // eax

  result = 436;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
