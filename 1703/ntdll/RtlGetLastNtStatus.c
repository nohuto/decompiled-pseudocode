/*
 * XREFs of RtlGetLastNtStatus @ 0x180089690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlGetLastNtStatus(void)
{
  return NtCurrentTeb()->LastStatusValue;
}
