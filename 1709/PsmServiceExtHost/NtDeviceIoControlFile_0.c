/*
 * XREFs of NtDeviceIoControlFile_0 @ 0x18002646C
 * Callers:
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18004CAC0 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x18004CFDC (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtDeviceIoControlFile_0(
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
  return NtDeviceIoControlFile(
           FileHandle,
           Event,
           ApcRoutine,
           ApcContext,
           IoStatusBlock,
           IoControlCode,
           InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength);
}
