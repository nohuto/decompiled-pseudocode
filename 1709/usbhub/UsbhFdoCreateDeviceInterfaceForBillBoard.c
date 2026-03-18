/*
 * XREFs of UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C003B4D0
 * Callers:
 *     UsbhPublishBillboardDetails @ 0x1C005637C (UsbhPublishBillboardDetails.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     memset @ 0x1C0029840 (memset.c)
 */

__int64 __fastcall UsbhFdoCreateDeviceInterfaceForBillBoard(
        __int64 a1,
        unsigned __int16 a2,
        struct _UNICODE_STRING *a3,
        _BYTE *a4,
        int a5,
        __int64 a6)
{
  ULONG v7; // ebx
  NTSTATUS v10; // eax
  __int64 v11; // r10
  __int64 v12; // rcx
  int v13; // r8d
  PDEVICE_OBJECT *v14; // rax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  int v17; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-98h] BYREF
  WCHAR SourceString[32]; // [rsp+50h] [rbp-88h] BYREF

  v7 = a2;
  memset(SourceString, 0, sizeof(SourceString));
  RtlInitUnicodeString(&DestinationString, SourceString);
  DestinationString.MaximumLength = 64;
  v10 = RtlIntegerToUnicodeString(v7, 0xAu, &DestinationString);
  v11 = v10;
  v12 = a1;
  if ( v10 < 0 )
  {
    v13 = 1668441137;
LABEL_10:
    Log(v12, 8, v13, v11, 0LL);
    return (unsigned int)v11;
  }
  v14 = (PDEVICE_OBJECT *)FdoExt(a1);
  v15 = IoRegisterDeviceInterface(v14[149], &GUID_DEVINTERFACE_USB_BILLBOARD, &DestinationString, a3);
  v11 = v15;
  if ( v15 < 0 )
  {
    v13 = 1668441138;
LABEL_9:
    v12 = a1;
    goto LABEL_10;
  }
  *a4 = 1;
  v16 = IoSetDeviceInterfaceState(a3, 1u);
  v11 = v16;
  if ( v16 < 0 )
  {
    v13 = 1668441139;
    goto LABEL_9;
  }
  v17 = IoSetDeviceInterfacePropertyData(a3, &DEVPKEY_Device_UsbBillboardInfo, 0LL, 0LL, 4099, a5, a6);
  v11 = v17;
  if ( v17 < 0 )
  {
    v13 = 1668441140;
    goto LABEL_9;
  }
  return (unsigned int)v11;
}
