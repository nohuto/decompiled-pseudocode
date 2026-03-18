/*
 * XREFs of NtRevertContainerImpersonation @ 0x14024E3D8
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x1400A0A50 (PspRevertContainerImpersonation.c)
 */

__int64 NtRevertContainerImpersonation()
{
  return PspRevertContainerImpersonation((__int64)KeGetCurrentThread());
}
