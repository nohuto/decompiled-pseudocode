/*
 * XREFs of NtClose_0 @ 0x180026466
 * Callers:
 *     RtlpTestHookInitialize @ 0x1800258C0 (RtlpTestHookInitialize.c)
 *     RtlpDiskSpeedInitialize @ 0x18004CB80 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18004CD0C (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18004CF7C (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
