/*
 * XREFs of RaidAdapterGetSystemPowerResumeLatency @ 0x1C002C424
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0012174 (RaidAdapterStartDeviceIrp.c)
 *     RaidPowerSettingCallback @ 0x1C001C2D0 (RaidPowerSettingCallback.c)
 *     RaidCoalescingCallback @ 0x1C002EA20 (RaidCoalescingCallback.c)
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
