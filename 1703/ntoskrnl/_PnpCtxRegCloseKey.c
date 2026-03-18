/*
 * XREFs of _PnpCtxRegCloseKey @ 0x140739BD0
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140268090 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140822604 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x1408226E8 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140822774 (PipProcessPendingOsExtensionResources.c)
 *     PipMigrateServiceCallback @ 0x140833750 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140833A90 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140833CA0 (PipCommitPendingService.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
