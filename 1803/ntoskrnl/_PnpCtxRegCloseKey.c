/*
 * XREFs of _PnpCtxRegCloseKey @ 0x1406342AC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140179180 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1402C7F20 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipMigratePnpState @ 0x1408B3338 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x1408B38F4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1408B3980 (PipProcessPendingOsExtensionResources.c)
 *     PipInitComputerIds @ 0x1408B3A10 (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1408B4D64 (PipCheckSystemFirmwareUpdated.c)
 *     PipResetDevices @ 0x1408B4E90 (PipResetDevices.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 *     PipMigrateServiceCallback @ 0x1408DF060 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x1408DF5A0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1408DF7B0 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
