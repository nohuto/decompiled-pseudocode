/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x1401570C0
 * Callers:
 *     IovpLogStackTrace @ 0x1407A57A8 (IovpLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140028AC0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal((void (__fastcall *)(__int64))Callout, (__int64)Parameter, Size, 2, 0LL);
}
