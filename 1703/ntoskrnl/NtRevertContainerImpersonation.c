/*
 * XREFs of NtRevertContainerImpersonation @ 0x140239448
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtRevertContainerImpersonation()
{
  return PspRevertContainerImpersonation((__int64)KeGetCurrentThread());
}
