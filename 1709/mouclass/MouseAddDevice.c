/*
 * XREFs of MouseAddDevice @ 0x1C000BB00
 * Callers:
 *     <none>
 * Callees:
 *     MouCreateClassObject @ 0x1C000B3D8 (MouCreateClassObject.c)
 *     MouseAddDeviceEx @ 0x1C000BC70 (MouseAddDeviceEx.c)
 */

__int64 __fastcall MouseAddDevice(struct _DRIVER_OBJECT *IoObject, PDEVICE_OBJECT PhysicalDeviceObject)
{
  __int64 result; // rax
  char *DeviceExtension; // rbx
  PDEVICE_OBJECT v6; // rax
  _DWORD *ErrorLogEntry; // rax
  NTSTATUS v8; // eax
  PVOID v9; // rdi
  unsigned int v10; // esi
  PDEVICE_OBJECT SourceDevice; // [rsp+60h] [rbp+18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  result = MouCreateClassObject(IoObject, &WPP_MAIN_CB.DeviceQueue.32, &SourceDevice, (PWSTR *)&P, 0);
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
      v8 = IoRegisterDeviceInterface(
             PhysicalDeviceObject,
             &GUID_DEVINTERFACE_MOUSE,
             0LL,
             (PUNICODE_STRING)(DeviceExtension + 88));
      v9 = P;
      v10 = v8;
      if ( v8 >= 0 )
      {
        v10 = MouseAddDeviceEx(DeviceExtension, P, 0LL);
      }
      else
      {
        IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 2));
        *((_QWORD *)DeviceExtension + 2) = 0LL;
        IoDeleteDevice(SourceDevice);
      }
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return v10;
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
