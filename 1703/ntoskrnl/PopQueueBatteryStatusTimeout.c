/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x140577C0C
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_14034B488);
  _InterlockedExchange(&dword_14034B400, 1);
  return KiSetTimerEx((__int64)&stru_14034B408, -300000000LL, 0, 0, (__int64)&dword_14034B448);
}
