/*
 * XREFs of _PnpCtxRegQueryValue @ 0x1405C45E0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140145D10 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1402923F0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipMigratePnpState @ 0x14083E9C4 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x14083EBC0 (PpDevCfgInit.c)
 *     PipHardwareConfigExists @ 0x14086A5F8 (PipHardwareConfigExists.c)
 *     PipProcessPendingObjects @ 0x14086B150 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x140521C44 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
