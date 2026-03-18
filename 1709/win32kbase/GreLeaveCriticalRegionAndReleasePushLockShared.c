/*
 * XREFs of GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C0016CE0
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C000CB48 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     <none>
 */

void __fastcall GreLeaveCriticalRegionAndReleasePushLockShared(__int64 a1)
{
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
