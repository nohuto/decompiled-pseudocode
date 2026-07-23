/*
 * XREFs of NtRevertContainerImpersonation @ 0x14024E3D8
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x1400A0A50 (PspRevertContainerImpersonation.c)
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  return PspRevertContainerImpersonation((__int64)KeGetCurrentThread());
}
