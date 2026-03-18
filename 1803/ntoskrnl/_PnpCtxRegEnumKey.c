/*
 * XREFs of _PnpCtxRegEnumKey @ 0x140634300
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140179180 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x1408DEDE8 (PipHardwareConfigExists.c)
 *     PipCommitPendingOsExtensionResource @ 0x1408DF5A0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1408DF7B0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x1408DFB40 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x1405E0774 (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2, ULONG a3, unsigned int *a4, unsigned int *a5)
{
  return RegRtlEnumKey(a2, a3, a4, a5);
}
