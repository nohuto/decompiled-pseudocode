/*
 * XREFs of PipAreDriversLoaded @ 0x14004D54C
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14048B07C (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1)
{
  return PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304));
}
