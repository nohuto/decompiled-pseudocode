/*
 * XREFs of RtlGetLastNtStatus @ 0x1800833B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetLastNtStatus()
{
  return NtCurrentTeb()->LastStatusValue;
}
