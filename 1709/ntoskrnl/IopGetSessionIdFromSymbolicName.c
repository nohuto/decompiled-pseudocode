/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x140586638
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x14054B05C (PiUEventProcessBroadcastNotifications.c)
 *     PnpNotifyDeviceClassChange @ 0x140585D88 (PnpNotifyDeviceClassChange.c)
 *     IoRegisterPlugPlayNotification @ 0x140585FB0 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IopGetSessionIdFromPDO @ 0x14055203C (IopGetSessionIdFromPDO.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140586694 (IopDeviceObjectFromSymbolicName.c)
 */

__int64 IopGetSessionIdFromSymbolicName()
{
  unsigned int SessionIdFromPDO; // edi
  struct _DEVICE_OBJECT *v1; // rax
  struct _DEVICE_OBJECT *v2; // rbx
  _DWORD *DeviceNode; // rcx

  SessionIdFromPDO = -1;
  v1 = (struct _DEVICE_OBJECT *)IopDeviceObjectFromSymbolicName();
  v2 = v1;
  if ( v1 )
  {
    DeviceNode = v1->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      if ( (DeviceNode[99] & 0x20000) == 0 )
      {
        SessionIdFromPDO = IopGetSessionIdFromPDO(v1);
        ObfDereferenceObject(v2);
      }
    }
  }
  return SessionIdFromPDO;
}
