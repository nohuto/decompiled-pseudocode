/*
 * XREFs of PopBatteryInitPhaseTwo @ 0x140853920
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     PopReadUlongPowerKey @ 0x1401598E4 (PopReadUlongPowerKey.c)
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 */

NTSTATUS PopBatteryInitPhaseTwo()
{
  NTSTATUS result; // eax

  PopReadUlongPowerKey(L"ChargerWeakDetectionThresholdPercent", &WeakChargerChargeDropMilliPercent);
  WeakChargerChargeDropMilliPercent *= 1000;
  PopReadUlongPowerKey(L"BatteryChargeTrajectoryThresholdPercent", &BatteryChargeTrajectoryThresholdMilliPercent);
  BatteryChargeTrajectoryThresholdMilliPercent *= 1000;
  result = EtwRegister(&BATTERY_ETW_PROVIDER, (PETWENABLECALLBACK)PopBatteryEtwCallback, 0LL, &PopBatteryEtwHandle);
  if ( result >= 0 )
    PopBatteryEtwRegistered = 1;
  return result;
}
