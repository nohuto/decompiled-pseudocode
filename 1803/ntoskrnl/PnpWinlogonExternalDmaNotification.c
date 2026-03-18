/*
 * XREFs of PnpWinlogonExternalDmaNotification @ 0x140489874
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     ExNotifyCallback @ 0x140072E00 (ExNotifyCallback.c)
 */

void __fastcall PnpWinlogonExternalDmaNotification(PVOID Argument1)
{
  ExNotifyCallback(PipCslCallbackObject, Argument1, 0LL);
}
