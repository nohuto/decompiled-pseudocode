/*
 * XREFs of NtRevertContainerImpersonation @ 0x140284768
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x1400F1810 (PspRevertContainerImpersonation.c)
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
