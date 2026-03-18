/*
 * XREFs of PopBatteryInitPhaseTwo @ 0x1408C57D4
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     PopReadUlongPowerKey @ 0x1401847AC (PopReadUlongPowerKey.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
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
