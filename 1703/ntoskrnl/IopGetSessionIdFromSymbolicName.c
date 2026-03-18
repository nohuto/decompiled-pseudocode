/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x140581E44
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x140464A2C (PiUEventProcessBroadcastNotifications.c)
 *     PnpNotifyDeviceClassChange @ 0x1404A6D00 (PnpNotifyDeviceClassChange.c)
 *     IoRegisterPlugPlayNotification @ 0x140571300 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     IopGetSessionIdFromPDO @ 0x1404A6410 (IopGetSessionIdFromPDO.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140581EA0 (IopDeviceObjectFromSymbolicName.c)
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
