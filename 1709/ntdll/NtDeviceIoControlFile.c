/*
 * XREFs of NtDeviceIoControlFile @ 0x1800A01A0
 * Callers:
 *     GetProcessIptTraceSize @ 0x18005D1E4 (GetProcessIptTraceSize.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18008A314 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x18010CCBC (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
 *     GetProcessIptTrace @ 0x18010E404 (GetProcessIptTrace.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS result; // eax

  result = 7;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
