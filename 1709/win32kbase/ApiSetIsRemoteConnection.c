/*
 * XREFs of ApiSetIsRemoteConnection @ 0x1C0018FD4
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C0009818 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDeviceClassNotify @ 0x1C0018980 (RIMDeviceClassNotify.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0018DA0 (RIMDirectStartStopDeviceRead.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0019610 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
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
