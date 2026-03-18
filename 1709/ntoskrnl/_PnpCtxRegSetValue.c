/*
 * XREFs of _PnpCtxRegSetValue @ 0x14077E3A4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140145D10 (PipUpdateDeviceProducts.c)
 *     PipMigratePnpState @ 0x14083E9C4 (PipMigratePnpState.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     _RegRtlSetValue @ 0x14058E7F0 (_RegRtlSetValue.c)
 */

int __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, const WCHAR *a3, ULONG a4, void *a5, ULONG a6)
{
  return RegRtlSetValue(a2, a3, a4, a5, a6);
}
