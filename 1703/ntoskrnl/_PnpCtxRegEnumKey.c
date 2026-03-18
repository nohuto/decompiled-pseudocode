/*
 * XREFs of _PnpCtxRegEnumKey @ 0x140739C78
 * Callers:
 *     PipHardwareConfigExists @ 0x1408334D8 (PipHardwareConfigExists.c)
 *     PipCommitPendingOsExtensionResource @ 0x140833A90 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140833CA0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140834030 (PipProcessPendingObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2, ULONG a3, unsigned int *a4, unsigned int *a5)
{
  return RegRtlEnumKey(a2, a3, a4, a5);
}
