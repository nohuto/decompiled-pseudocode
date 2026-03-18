/*
 * XREFs of _PnpCtxRegCloseKey @ 0x1405C4618
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140145D10 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1402923F0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipMigratePnpState @ 0x14083E9C4 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x14083EAA8 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x14083EB34 (PipProcessPendingOsExtensionResources.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 *     PipMigrateServiceCallback @ 0x14086A870 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x14086ABB0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x14086ADC0 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
