/*
 * XREFs of ApiSetIsRemoteConnection @ 0x1C0051DB0
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C004ED10 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0050100 (RIMDirectStartStopDeviceRead.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0093588 (RIMDiscoverDevicesOfInputType.c)
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C0107870 (RIMComputeVirtualDesktopPhysicalSize.c)
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 * Callees:
 *     <none>
 */

__int64 ApiSetIsRemoteConnection()
{
  if ( (int)IsIsRemoteConnectionSupported() < 0 )
    return 0LL;
  else
    return IsRemoteConnection();
}
