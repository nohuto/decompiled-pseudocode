/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x1406FEEFC
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_140365A08);
  _InterlockedExchange(&dword_140365980, 1);
  return KiSetTimerEx((__int64)&stru_140365988, -300000000LL, 0, 0, (__int64)&dword_1403659C8);
}
