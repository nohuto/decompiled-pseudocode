/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x140028A90
 * Callers:
 *     sub_140572B54 @ 0x140572B54 (sub_140572B54.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1406BCE54 (IopIssueSystemEnvironmentRequest.c)
 *     ViPoolLogStackTrace @ 0x1407B78E8 (ViPoolLogStackTrace.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140028AC0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCalloutEx(
        PEXPAND_STACK_CALLOUT Callout,
        PVOID Parameter,
        SIZE_T Size,
        BOOLEAN Wait,
        PVOID Context)
{
  return KeExpandKernelStackAndCalloutInternal(
           (_DWORD)Callout,
           (_DWORD)Parameter,
           Size,
           Wait != 0 ? 2 : 0,
           (__int64)Context);
}
