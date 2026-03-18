/*
 * XREFs of ?InitTimerPowerSaving@@YAXXZ @ 0x1C011BC60
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 * Callees:
 *     <none>
 */

void InitTimerPowerSaving(void)
{
  FastGetProfileDwordW(0LL, 2LL, L"RITdemonTimerPowerSaveElapse", 43200000LL, &gdwRITdemonTimerPowerSaveElapse, 0);
  FastGetProfileDwordW(
    0LL,
    2LL,
    L"RITdemonTimerPowerSaveCoalescing",
    43200000LL,
    &gdwRITdemonTimerPowerSaveCoalescing,
    0);
}
