/*
 * XREFs of _PnpCtxRegOpenKey @ 0x1405D1A38
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140268090 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipMigratePnpState @ 0x140822604 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x1408226E8 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140822774 (PipProcessPendingOsExtensionResources.c)
 *     PipHardwareConfigExists @ 0x1408334D8 (PipHardwareConfigExists.c)
 *     PipMigrateServiceCallback @ 0x140833750 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140833A90 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140833CA0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140834030 (PipProcessPendingObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *a1;
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
