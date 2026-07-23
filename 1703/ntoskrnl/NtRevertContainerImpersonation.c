/*
 * XREFs of NtRevertContainerImpersonation @ 0x140239448
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  return PspRevertContainerImpersonation((__int64)KeGetCurrentThread());
}
