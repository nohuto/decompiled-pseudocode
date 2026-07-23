/*
 * XREFs of NtSuspendThread @ 0x1800A36F0
 * Callers:
 *     RtlWow64SuspendThread @ 0x18008F2D0 (RtlWow64SuspendThread.c)
 *     RtlpProcessReflectionStartup @ 0x1800D7260 (RtlpProcessReflectionStartup.c)
 *     RtlRemoteCall @ 0x1800F8110 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  NTSTATUS result; // eax

  result = 434;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
