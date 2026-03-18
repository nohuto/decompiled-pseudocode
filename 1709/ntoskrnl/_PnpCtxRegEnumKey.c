/*
 * XREFs of _PnpCtxRegEnumKey @ 0x1405C4668
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140145D10 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x14086A5F8 (PipHardwareConfigExists.c)
 *     PipCommitPendingOsExtensionResource @ 0x14086ABB0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x14086ADC0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x14086B150 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x14057E9B4 (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2, ULONG a3, unsigned int *a4, unsigned int *a5)
{
  return RegRtlEnumKey(a2, a3, a4, a5);
}
