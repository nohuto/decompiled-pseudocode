/*
 * XREFs of MouseAddDevice @ 0x1C000C350
 * Callers:
 *     <none>
 * Callees:
 *     MouseAddDeviceEx @ 0x1C000C480 (MouseAddDeviceEx.c)
 *     MouCreateClassObject @ 0x1C000C990 (MouCreateClassObject.c)
 */

__int64 __fastcall MouseAddDevice(struct _DRIVER_OBJECT *IoObject, PDEVICE_OBJECT PhysicalDeviceObject)
{
  __int64 result; // rax
  char *DeviceExtension; // rbx
  PDEVICE_OBJECT v6; // rax
  NTSTATUS v7; // esi
  _DWORD *ErrorLogEntry; // rax
  PDEVICE_OBJECT SourceDevice; // [rsp+60h] [rbp+18h]

  result = MouCreateClassObject(IoObject, 0);
  if ( (int)result >= 0 )
  {
    DeviceExtension = (char *)SourceDevice->DeviceExtension;
    v6 = IoAttachDeviceToDeviceStack(SourceDevice, PhysicalDeviceObject);
    *((_QWORD *)DeviceExtension + 2) = v6;
    if ( v6 )
    {
      *((_QWORD *)DeviceExtension + 3) = PhysicalDeviceObject;
      *((_WORD *)DeviceExtension + 32) = 1;
      *((_DWORD *)DeviceExtension + 43) = 1;
      *((_DWORD *)DeviceExtension + 44) = 1;
      PoSetPowerState(SourceDevice, DevicePowerState, (POWER_STATE)1);
      *(_QWORD *)(DeviceExtension + 268) = 0LL;
      DeviceExtension[345] = 0;
      *((_QWORD *)DeviceExtension + 35) = 0LL;
      DeviceExtension[288] = 0;
      *((_QWORD *)DeviceExtension + 37) = 0LL;
      *((_DWORD *)DeviceExtension + 76) = 0;
      SourceDevice->Flags |= 0x2000u;
      SourceDevice->Flags &= ~0x80u;
      v7 = IoRegisterDeviceInterface(
             PhysicalDeviceObject,
             &GUID_DEVINTERFACE_MOUSE,
             0LL,
             (PUNICODE_STRING)(DeviceExtension + 88));
      if ( v7 < 0 )
      {
        IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 2));
        *((_QWORD *)DeviceExtension + 2) = 0LL;
        IoDeleteDevice(SourceDevice);
      }
      else
      {
        return (unsigned int)MouseAddDeviceEx(DeviceExtension, 0LL, 0LL);
      }
      return (unsigned int)v7;
    }
    else
    {
      ErrorLogEntry = IoAllocateErrorLogEntry(IoObject, 0x30u);
      if ( ErrorLogEntry )
      {
        ErrorLogEntry[3] = -1073414129;
        *ErrorLogEntry = 0;
        *((_QWORD *)ErrorLogEntry + 3) = 0LL;
        ErrorLogEntry[4] = 0;
        ErrorLogEntry[5] = -1073741667;
        IoWriteErrorLogEntry(ErrorLogEntry);
      }
      IoDeleteDevice(SourceDevice);
      return 3221225629LL;
    }
  }
  return result;
}
