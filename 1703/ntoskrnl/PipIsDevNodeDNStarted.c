/*
 * XREFs of PipIsDevNodeDNStarted @ 0x14004FB44
 * Callers:
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x140131B50 (PipRestoreDevNodeState.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14048B07C (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpCheckForActiveDependencies @ 0x14048BE70 (PnpCheckForActiveDependencies.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14056DC54 (PnpRequestDeviceRemovalWorker.c)
 *     PnpProcessDependencyRelations @ 0x14056F7E0 (PnpProcessDependencyRelations.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceStarted @ 0x140591B34 (PiDevCfgLogDeviceStarted.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1405D38F8 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x1406A7FB4 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
