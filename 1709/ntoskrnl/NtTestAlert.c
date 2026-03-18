/*
 * XREFs of NtTestAlert @ 0x140514FAC
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x1400DA9D0 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
