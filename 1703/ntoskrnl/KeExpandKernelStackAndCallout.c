/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x14003B8C0
 * Callers:
 *     IovpLogStackTrace @ 0x140763A4C (IovpLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14010F480 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal((_DWORD)Callout, (_DWORD)Parameter, Size, 2, 0LL);
}
