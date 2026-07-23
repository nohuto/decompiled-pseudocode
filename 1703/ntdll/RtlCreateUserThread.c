/*
 * XREFs of RtlCreateUserThread @ 0x180052D00
 * Callers:
 *     EtwpCreateEtwThread @ 0x180052C90 (EtwpCreateEtwThread.c)
 * Callees:
 *     sub_180052D68 @ 0x180052D68 (sub_180052D68.c)
 */

NTSTATUS __cdecl RtlCreateUserThread(
        HANDLE ProcessHandle,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        BOOLEAN CreateSuspended,
        ULONG ZeroBits,
        SIZE_T MaximumStackSize,
        SIZE_T CommittedStackSize,
        PUSER_THREAD_START_ROUTINE StartAddress,
        PVOID Parameter,
        PHANDLE ThreadHandle,
        PCLIENT_ID ClientId)
{
  int v11; // [rsp+30h] [rbp-38h]

  return sub_180052D68(
           ProcessHandle,
           MaximumStackSize,
           CommittedStackSize,
           v11,
           StartAddress,
           Parameter,
           (__int64)ThreadHandle,
           (__int64)ClientId);
}
