/*
 * XREFs of RaidAdapterGetSystemPowerHint @ 0x1C002C404
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0012174 (RaidAdapterStartDeviceIrp.c)
 *     RaidPowerSettingCallback @ 0x1C001C2D0 (RaidPowerSettingCallback.c)
 *     RaidCoalescingCallback @ 0x1C002EA20 (RaidCoalescingCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetSystemPowerHint(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 108) < 0x80u )
    return 3LL;
  else
    return 2 - (unsigned int)((*(_BYTE *)(a1 + 109) & 1) != 0);
}
