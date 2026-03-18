/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x1404DE504
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x1404462B0 (PiQueryRemovableDeviceOverride.c)
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PiCreateDriverSwDevices @ 0x1404A7468 (PiCreateDriverSwDevices.c)
 *     PnpSaveDeviceCapabilities @ 0x1404DE1F4 (PnpSaveDeviceCapabilities.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x1406938D8 (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PnpDeviceObjectToDeviceInstance(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( v4 && (v5 = *(_QWORD *)(v4 + 48)) != 0 )
    return CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v5, 0x10u, 0, a3, 0, a2, 0LL);
  else
    return 3221225488LL;
}
