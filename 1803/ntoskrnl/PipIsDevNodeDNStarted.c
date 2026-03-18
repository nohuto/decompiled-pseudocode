/*
 * XREFs of PipIsDevNodeDNStarted @ 0x14006EB18
 * Callers:
 *     PipRestoreDevNodeState @ 0x140145284 (PipRestoreDevNodeState.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14050CD04 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1405C9BB4 (PnpRequestDeviceRemovalWorker.c)
 *     PnpProcessDependencyRelations @ 0x1405CA0BC (PnpProcessDependencyRelations.c)
 *     PnpCheckForActiveDependencies @ 0x1405CE34C (PnpCheckForActiveDependencies.c)
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceStarted @ 0x1405D5DE4 (PiDevCfgLogDeviceStarted.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140653954 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x14073A808 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
