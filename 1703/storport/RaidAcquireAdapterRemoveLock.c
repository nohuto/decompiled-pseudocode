/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C00056D4
 * Callers:
 *     StorpLogPerAdapterStatistics @ 0x1C0001A10 (StorpLogPerAdapterStatistics.c)
 *     StorpLogStatistics @ 0x1C0002FDC (StorpLogStatistics.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0005500 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000EE68 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000F0A8 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C00115E0 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerIrp @ 0x1C0011B28 (RaidAdapterPowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0011E30 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPnpIrp @ 0x1C0012708 (RaidAdapterPnpIrp.c)
 *     McGenControlCallbackV2 @ 0x1C001B890 (McGenControlCallbackV2.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C002F960 (RaidpAdapterTimerDpcRoutine.c)
 *     RaSqmLogAdapterStatistics @ 0x1C0030CD4 (RaSqmLogAdapterStatistics.c)
 *     RaWmiDispatchIrp @ 0x1C0061824 (RaWmiDispatchIrp.c)
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
