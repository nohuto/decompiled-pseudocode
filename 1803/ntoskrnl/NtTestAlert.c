/*
 * XREFs of NtTestAlert @ 0x140571B40
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x140132520 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
