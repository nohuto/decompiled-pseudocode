/*
 * XREFs of PipAreDriversLoaded @ 0x1400DF77C
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14052747C (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x1400DF79C (PipAreDriversLoadedWorker.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1)
{
  return PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304));
}
