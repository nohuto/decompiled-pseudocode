/*
 * XREFs of NtTestAlert @ 0x140425F44
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x1400089E0 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
