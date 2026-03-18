/*
 * XREFs of ?DeviceHasAQuickLaunchPen@@YAHXZ @ 0x1C01C6A2C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00F9E80 (xxxDoHotKeyStuff.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

_BOOL8 DeviceHasAQuickLaunchPen(void)
{
  BOOL v0; // ebx
  NTSTATUS v1; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-19h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  _BYTE KeyInformation[24]; // [rsp+80h] [rbp+37h] BYREF

  v0 = 0;
  KeyHandle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\ControlSet001\\Control\\DeviceClasses\\{00001812-0000-1000-8000-00805f9b34fb}");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 && KeyHandle )
  {
    ResultLength = 0;
    v1 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, KeyInformation, 0x18u, &ResultLength);
    if ( v1 != -2147483622 )
      v0 = v1 != -1073741811;
    ZwClose(KeyHandle);
  }
  return v0;
}
