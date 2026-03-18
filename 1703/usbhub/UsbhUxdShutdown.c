/*
 * XREFs of UsbhUxdShutdown @ 0x1C0058DB8
 * Callers:
 *     UsbhDeviceShutdown @ 0x1C004AE80 (UsbhDeviceShutdown.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C001C3D0 (UsbhGetGlobalUxdSettings.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0058428 (UsbhDeleteUxdSubKeys.c)
 *     UsbhOpenUxdPortHandle @ 0x1C00589F0 (UsbhOpenUxdPortHandle.c)
 */

__int64 __fastcall UsbhUxdShutdown(__int64 a1)
{
  _DWORD *v2; // rdi
  PDEVICE_OBJECT v3; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  v2 = FdoExt(a1);
  v3 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x23u,
      (__int64)&WPP_1cdb57e5893f3fa3501d1b39a728e5a6_Traceguids);
  UsbhGetGlobalUxdSettings((__int64)v3, (_QWORD *)v2 + 647);
  RtlInitUnicodeString(
    &DestinationString,
    L"\\registry\\machine\\system\\currentcontrolset\\services\\usbhub\\uxd_control\\devices\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    UsbhDeleteUxdSubKeys(a1, (WCHAR *)KeyHandle);
    ZwClose(KeyHandle);
  }
  KeyHandle = 0LL;
  if ( (int)UsbhOpenUxdPortHandle(a1, &KeyHandle) >= 0 )
  {
    UsbhDeleteUxdSubKeys(a1, (WCHAR *)KeyHandle);
    ZwClose(KeyHandle);
  }
  return 0LL;
}
