/*
 * XREFs of RaUnitStoragePowerActive @ 0x1C003D158
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005984 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidUnitPoFxActivateComponentFromIoctl @ 0x1C003ECD4 (RaidUnitPoFxActivateComponentFromIoctl.c)
 */

__int64 __fastcall RaUnitStoragePowerActive(__int64 a1, IRP *a2)
{
  unsigned int v4; // edi

  v4 = -1073741823;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    RaidUnitPoFxActivateComponentFromIoctl(a1);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
    v4 = 0;
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
