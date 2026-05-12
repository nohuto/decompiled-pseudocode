/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C0005EC4
 * Callers:
 *     StorpLogPerAdapterStatistics @ 0x1C00029EC (StorpLogPerAdapterStatistics.c)
 *     StorpLogStatistics @ 0x1C0004218 (StorpLogStatistics.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0005D18 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000F4E4 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000F714 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C000FD80 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerIrp @ 0x1C0010B68 (RaidAdapterPowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0010E6C (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPnpIrp @ 0x1C0012070 (RaidAdapterPnpIrp.c)
 *     McGenControlCallbackV2 @ 0x1C001B5D0 (McGenControlCallbackV2.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C001D1F0 (RaidpAdapterTimerDpcRoutine.c)
 *     RaSqmLogAdapterStatistics @ 0x1C00313CC (RaSqmLogAdapterStatistics.c)
 *     RaWmiDispatchIrp @ 0x1C0063BE4 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAcquireAdapterRemoveLock(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 256)) )
    return (unsigned int)-1073741738;
  return v1;
}
