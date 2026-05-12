/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C0007CD0
 * Callers:
 *     StorpLogPerAdapterStatistics @ 0x1C0004868 (StorpLogPerAdapterStatistics.c)
 *     StorpLogStatistics @ 0x1C00054D8 (StorpLogStatistics.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0007A30 (RaidAdapterDeviceControlIrp.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0007BE0 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterPowerIrp @ 0x1C000DC58 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000E1DC (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000E4AC (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C000F014 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C000F0C0 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPnpIrp @ 0x1C00125A4 (RaidAdapterPnpIrp.c)
 *     RaSqmLogAdapterStatistics @ 0x1C002CFCC (RaSqmLogAdapterStatistics.c)
 *     StorEtwEnableCallback @ 0x1C0040714 (StorEtwEnableCallback.c)
 *     RaWmiDispatchIrp @ 0x1C0060794 (RaWmiDispatchIrp.c)
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
