/*
 * XREFs of NtClose_0 @ 0x18003EE6A
 * Callers:
 *     RtlpTestHookInitialize @ 0x18003E070 (RtlpTestHookInitialize.c)
 *     RtlpDiskSpeedInitialize @ 0x18006D600 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18006D78C (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18006D9FC (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
