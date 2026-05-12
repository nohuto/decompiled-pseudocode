/*
 * XREFs of RaidAdapterGetSystemPowerHint @ 0x1C0026234
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0028C7C (RaidAdapterStartDeviceIrp.c)
 *     RaidCoalescingCallback @ 0x1C00296C0 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C002B730 (RaidPowerSettingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerHint(__int64 a1)
{
  if ( *(char *)(a1 + 108) >= 0 )
    return 3LL;
  else
    return 2 - (unsigned int)((*(_BYTE *)(a1 + 109) & 1) != 0);
}
