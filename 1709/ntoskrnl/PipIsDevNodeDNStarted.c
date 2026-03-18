/*
 * XREFs of PipIsDevNodeDNStarted @ 0x1400DF750
 * Callers:
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x140158A08 (PipRestoreDevNodeState.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14052747C (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpCheckForActiveDependencies @ 0x140527D10 (PnpCheckForActiveDependencies.c)
 *     PnpProcessDependencyRelations @ 0x14055C6B8 (PnpProcessDependencyRelations.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceStarted @ 0x1405A3B98 (PiDevCfgLogDeviceStarted.c)
 *     PnpDriverLoadingFailed @ 0x1405C8154 (PnpDriverLoadingFailed.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1405EDC78 (PnpRequestDeviceRemovalWorker.c)
 *     PiControlGetDevicePowerData @ 0x1406D2C74 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
