/*
 * XREFs of UsbhPortResumeTimeout @ 0x1C0043A7C
 * Callers:
 *     UsbhWaitForPortResume @ 0x1C004452C (UsbhWaitForPortResume.c)
 * Callees:
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x1C000152C (UsbhSendSynchronousUsbIoctlRequest.c)
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C001A5DC (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00410DC (UsbhQueueSoftConnectChange.c)
 *     UsbhGetPortStatusBits @ 0x1C004342C (UsbhGetPortStatusBits.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhPortResumeTimeout(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // r15
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // r10d
  unsigned int v10; // r10d
  struct _DEVICE_OBJECT *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 PortStatusBits; // al
  char v16; // r11
  int v17; // eax
  int v18; // ebp
  _DWORD *v19; // rax
  _DWORD *v20; // rax
  int v21; // [rsp+48h] [rbp-30h]
  int v22; // [rsp+48h] [rbp-30h]
  int v23; // [rsp+90h] [rbp+18h] BYREF
  __int16 v24; // [rsp+98h] [rbp+20h] BYREF

  v3 = *(_WORD *)(a3 + 4);
  FdoExt((__int64)DeviceObject);
  v7 = UsbhQueryPortState((__int64)DeviceObject, *(_WORD *)(a3 + 4), (__int64)&v24, &v23);
  v8 = 0;
  Log((__int64)DeviceObject, 16, 1920233265, v7, 0LL);
  if ( Usb_Disconnected(v9) )
    return v10;
  LOBYTE(v21) = 0;
  UsbhException((int)DeviceObject, *(unsigned __int16 *)(a3 + 4), 124, 0, 0, v10, v23, usbfile_bus_c, 7402, v21);
  v12 = (struct _DEVICE_OBJECT *)UsbhLatchPdo((__int64)DeviceObject, v3, 0LL, 0x7761726Du);
  Log((__int64)DeviceObject, 16, 1920233266, v3, (__int64)v12);
  if ( v12 )
  {
    PortStatusBits = UsbhGetPortStatusBits(v14, v13, &v24, (__int64)v12);
    Log((__int64)DeviceObject, 16, 1347899987, PortStatusBits, v3);
    if ( v16 == 25 )
    {
      Log((__int64)DeviceObject, 16, 1920233267, 25LL, 0LL);
    }
    else if ( v16 == 31 )
    {
      v8 = -1073741810;
      Log((__int64)DeviceObject, 16, 1920233268, 31LL, -1073741810LL);
    }
    else
    {
      v17 = UsbhSyncResetDeviceInternal(DeviceObject, a2, (__int64)v12);
      v18 = v17;
      if ( (v17 & 0xC0000000) == 0xC0000000 )
      {
        Log((__int64)DeviceObject, 16, 1920233269, 0LL, v17);
        UsbhQueueSoftConnectChange((__int64)DeviceObject, v3, a2, 1);
        v19 = PdoExt((__int64)v12);
        LOBYTE(v22) = 0;
        v19[353] &= ~0x4000u;
        UsbhException((int)DeviceObject, 0, 125, 0, 0, v18, 0, usbfile_bus_c, 7462, v22);
      }
      else
      {
        v20 = PdoExt((__int64)v12);
        v20[353] &= ~0x4000u;
        if ( (PdoExt((__int64)v12)[353] & 4) != 0 )
          UsbhSendSynchronousUsbIoctlRequest((int)DeviceObject, v12, 0x220FA7u);
      }
    }
    UsbhUnlatchPdo((__int64)DeviceObject, (__int64)v12, 0LL, 0x7761726Du);
  }
  return v8;
}
