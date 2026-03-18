/*
 * XREFs of PnpSynchronizeDeviceEventQueue @ 0x140605ABC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     PnpCreateDeviceEventEntry @ 0x14051E77C (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14051E7CC (PnpInsertEventInQueue.c)
 */

NTSTATUS PnpSynchronizeDeviceEventQueue()
{
  _DWORD *DeviceEventEntry; // rbx
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  char v3; // [rsp+60h] [rbp+8h] BYREF

  DeviceEventEntry = PnpCreateDeviceEventEntry(0xC0uLL);
  if ( !DeviceEventEntry )
    return -1073741801;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *((_QWORD *)DeviceEventEntry + 3) = &Event;
  DeviceEventEntry[32] = 1;
  *((_QWORD *)DeviceEventEntry + 17) = &v3;
  *((GUID *)DeviceEventEntry + 7) = GUID_DEVICE_NOOP;
  DeviceEventEntry[37] = 80;
  result = PnpInsertEventInQueue((__int64)DeviceEventEntry);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return result;
}
