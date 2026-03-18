/*
 * XREFs of imp_VfWdfWmiInstanceGetProvider @ 0x1C00D5860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFWMIPROVIDER__ *__fastcall imp_VfWdfWmiInstanceGetProvider(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIINSTANCE__ *WmiInstance)
{
  return WdfVersion.Functions.pfnWdfWmiInstanceGetProvider(DriverGlobals, WmiInstance);
}
