/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x14012F840
 * Callers:
 *     sub_14056889C @ 0x14056889C (sub_14056889C.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140721E04 (IopIssueSystemEnvironmentRequest.c)
 *     ViPoolLogStackTrace @ 0x140824B48 (ViPoolLogStackTrace.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14012F870 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCalloutEx(
        PEXPAND_STACK_CALLOUT Callout,
        PVOID Parameter,
        SIZE_T Size,
        BOOLEAN Wait,
        PVOID Context)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, (__int64)Context);
}
