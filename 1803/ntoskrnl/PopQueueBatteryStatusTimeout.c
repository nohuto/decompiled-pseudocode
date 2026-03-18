/*
 * XREFs of PopQueueBatteryStatusTimeout @ 0x1405EA7B8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 */

__int64 PopQueueBatteryStatusTimeout()
{
  KeResetEvent(&stru_1403AA368);
  _InterlockedExchange(&dword_1403AA2E0, 1);
  return KiSetTimerEx((__int64)&stru_1403AA2E8, -300000000LL, 0, 0, (__int64)&dword_1403AA328);
}
