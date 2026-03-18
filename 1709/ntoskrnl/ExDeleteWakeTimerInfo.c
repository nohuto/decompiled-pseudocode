/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x140286480
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopFreeWakeSource @ 0x1406FA5E8 (PopFreeWakeSource.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
