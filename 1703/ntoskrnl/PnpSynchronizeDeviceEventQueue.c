/*
 * XREFs of PnpSynchronizeDeviceEventQueue @ 0x1406A0A8C
 * Callers:
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     PnpInsertEventInQueue @ 0x1404DA210 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x1404DA388 (PnpCreateDeviceEventEntry.c)
 */

NTSTATUS PnpSynchronizeDeviceEventQueue()
{
  _DWORD *DeviceEventEntry; // rbx
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  char v3; // [rsp+60h] [rbp+8h] BYREF

  DeviceEventEntry = PnpCreateDeviceEventEntry(0xB8uLL);
  if ( !DeviceEventEntry )
    return -1073741801;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *((_QWORD *)DeviceEventEntry + 3) = &Event;
  DeviceEventEntry[30] = 1;
  *((_QWORD *)DeviceEventEntry + 16) = &v3;
  *(GUID *)(DeviceEventEntry + 26) = GUID_DEVICE_NOOP;
  DeviceEventEntry[35] = 80;
  result = PnpInsertEventInQueue((__int64)DeviceEventEntry);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return result;
}
