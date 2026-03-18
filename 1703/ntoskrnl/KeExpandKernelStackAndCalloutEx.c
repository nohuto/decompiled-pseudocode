/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x14010F460
 * Callers:
 *     sub_140440CFC @ 0x140440CFC (sub_140440CFC.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140691114 (IopIssueSystemEnvironmentRequest.c)
 *     ViPoolLogStackTrace @ 0x140775AE8 (ViPoolLogStackTrace.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeExpandKernelStackAndCalloutEx(
        PEXPAND_STACK_CALLOUT Callout,
        PVOID Parameter,
        SIZE_T Size,
        BOOLEAN Wait,
        PVOID Context)
{
  return KeExpandKernelStackAndCalloutInternal(Callout, Parameter, Size, Wait != 0 ? 2 : 0, Context);
}
