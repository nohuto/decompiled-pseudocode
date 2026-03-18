/*
 * XREFs of IopGetSessionIdFromSymbolicName @ 0x14060295C
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x14051ED3C (PiUEventProcessBroadcastNotifications.c)
 *     IoRegisterPlugPlayNotification @ 0x1405E22E0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1406027D0 (PnpNotifyDeviceClassChange.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IopGetSessionIdFromPDO @ 0x1405D5BE0 (IopGetSessionIdFromPDO.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1406029B8 (IopDeviceObjectFromSymbolicName.c)
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
