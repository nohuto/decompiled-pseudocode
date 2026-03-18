/*
 * XREFs of _PnpCtxRegOpenKey @ 0x1405C4630
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140145D10 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1402923F0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipMigratePnpState @ 0x14083E9C4 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x14083EAA8 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x14083EB34 (PipProcessPendingOsExtensionResources.c)
 *     PpDevCfgInit @ 0x14083EBC0 (PpDevCfgInit.c)
 *     PipHardwareConfigExists @ 0x14086A5F8 (PipHardwareConfigExists.c)
 *     PipMigrateServiceCallback @ 0x14086A870 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x14086ABB0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x14086ADC0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x14086B150 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *a1;
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
