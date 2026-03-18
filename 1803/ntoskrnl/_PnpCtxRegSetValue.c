/*
 * XREFs of _PnpCtxRegSetValue @ 0x1407E6DC0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140179180 (PipUpdateDeviceProducts.c)
 *     PipMigratePnpState @ 0x1408B3338 (PipMigratePnpState.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 * Callees:
 *     _RegRtlSetValue @ 0x1405E2DB0 (_RegRtlSetValue.c)
 */

int __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, const WCHAR *a3, ULONG a4, void *a5, ULONG a6)
{
  return RegRtlSetValue(a2, a3, a4, a5, a6);
}
