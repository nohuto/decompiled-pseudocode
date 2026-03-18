/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x14025CB50
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopFreeWakeSource @ 0x1406C9788 (PopFreeWakeSource.c)
 * Callees:
 *     <none>
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
