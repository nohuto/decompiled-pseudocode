/*
 * XREFs of _PnpCtxRegOpenKey @ 0x1406342C4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140179180 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1402C7F20 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipMigratePnpState @ 0x1408B3338 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x1408B341C (PpDevCfgInit.c)
 *     PipProcessPendingServices @ 0x1408B38F4 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1408B3980 (PipProcessPendingOsExtensionResources.c)
 *     PipResetDevices @ 0x1408B4E90 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x1408DEDE8 (PipHardwareConfigExists.c)
 *     PipMigrateServiceCallback @ 0x1408DF060 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x1408DF5A0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1408DF7B0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x1408DFB40 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
