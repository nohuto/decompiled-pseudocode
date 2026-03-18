/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x1405CDBC8
 * Callers:
 *     PiCreateDriverSwDevices @ 0x1405CAA60 (PiCreateDriverSwDevices.c)
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x1405CB3B0 (PiUpdateDevicePanel.c)
 *     PnpSaveDeviceCapabilities @ 0x1405CF414 (PnpSaveDeviceCapabilities.c)
 *     PiQueryRemovableDeviceOverride @ 0x1405DE074 (PiQueryRemovableDeviceOverride.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x140724398 (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
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
