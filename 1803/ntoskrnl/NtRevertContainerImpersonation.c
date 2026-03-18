/*
 * XREFs of NtRevertContainerImpersonation @ 0x140284768
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x1400F1810 (PspRevertContainerImpersonation.c)
 */

__int64 NtRevertContainerImpersonation()
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
