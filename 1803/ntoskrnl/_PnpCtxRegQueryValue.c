/*
 * XREFs of _PnpCtxRegQueryValue @ 0x140634274
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140179180 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1402C7F20 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipMigratePnpState @ 0x1408B3338 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x1408B341C (PpDevCfgInit.c)
 *     PipResetDevices @ 0x1408B4E90 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x1408DEDE8 (PipHardwareConfigExists.c)
 *     PipProcessPendingObjects @ 0x1408DFB40 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x140505EBC (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
