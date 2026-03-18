/*
 * XREFs of ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0013F4C
 * Callers:
 *     IsMouseDeviceOnIgnoreList @ 0x1C0013C90 (IsMouseDeviceOnIgnoreList.c)
 *     IsLegacyTouchPadDevice @ 0x1C011BD90 (IsLegacyTouchPadDevice.c)
 * Callees:
 *     GetPointerDevicePDO @ 0x1C001405C (GetPointerDevicePDO.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GetDeviceParent @ 0x1C01B3554 (GetDeviceParent.c)
 */

__int64 __fastcall IsHIDMouse(struct DEVICEINFO *a1, struct _DEVICE_OBJECT *a2)
{
  unsigned int v3; // ebx
  __int128 *v4; // rsi
  __int64 v5; // rcx
  ULONG BufferLength; // [rsp+30h] [rbp-48h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-40h]
  __int128 v9; // [rsp+40h] [rbp-38h]
  GUID v10; // [rsp+50h] [rbp-28h]

  v3 = 0;
  if ( (int)GetPointerDevicePDO(a2) >= 0 )
  {
    BufferLength = 0;
    if ( IoGetDeviceProperty(DeviceObject, DevicePropertyBusTypeGuid, 0, 0LL, &BufferLength) == -1073741789 )
    {
      v4 = (__int128 *)Win32AllocPool(BufferLength, 1886417749LL);
      if ( v4 )
      {
        if ( IoGetDeviceProperty(DeviceObject, DevicePropertyBusTypeGuid, BufferLength, v4, &BufferLength) >= 0 )
        {
          v9 = *v4;
          v10 = GUID_BUS_TYPE_HID;
          v5 = v9 - *(_QWORD *)&GUID_BUS_TYPE_HID.Data1;
          if ( (_QWORD)v9 == *(_QWORD *)&GUID_BUS_TYPE_HID.Data1 )
            v5 = *((_QWORD *)&v9 + 1) - *(_QWORD *)v10.Data4;
          if ( !v5 )
          {
            GetDeviceParent(DeviceObject, a1);
            v3 = 1;
          }
        }
        Win32FreePool(v4);
      }
    }
    ObfDereferenceObject(DeviceObject);
  }
  return v3;
}
