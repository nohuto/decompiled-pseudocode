/*
 * XREFs of NtWriteVirtualMemory @ 0x1800A0800
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18005D2A4 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18005E2A4 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlpProcessReflectionStartup @ 0x1800D7260 (RtlpProcessReflectionStartup.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F06C8 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800F8110 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteVirtualMemory()
{
  __int64 result; // rax

  result = 58LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
