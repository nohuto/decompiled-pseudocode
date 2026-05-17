/*
 * XREFs of RtlGetCurrentTransaction @ 0x180076B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *RtlGetCurrentTransaction()
{
  return NtCurrentTeb()->CurrentTransactionHandle;
}
