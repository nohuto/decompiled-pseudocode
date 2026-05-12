/*
 * XREFs of RaidAdapterGetSystemPowerResumeLatency @ 0x1C0026254
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0028C7C (RaidAdapterStartDeviceIrp.c)
 *     RaidCoalescingCallback @ 0x1C00296C0 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C002B730 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerResumeLatency(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 500LL;
  if ( v1 == 1 )
    return 100LL;
  return 50LL;
}
