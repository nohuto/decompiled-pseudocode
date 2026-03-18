/*
 * XREFs of CheckEasPolicyChange @ 0x1C01B58F8
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 CheckEasPolicyChange()
{
  unsigned int v0; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  _QWORD KeyInformation[3]; // [rsp+80h] [rbp+37h] BYREF

  memset(KeyInformation, 0, sizeof(KeyInformation));
  v0 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\EAS\\Policies");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  KeyInformation[0] = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    ZwQueryKey(KeyHandle, KeyBasicInformation, KeyInformation, 0x18u, &ResultLength);
    ZwClose(KeyHandle);
  }
  if ( qword_1C0333FE0 != KeyInformation[0] )
  {
    qword_1C0333FE0 = KeyInformation[0];
    return 1;
  }
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  KeyInformation[0] = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    ZwQueryKey(KeyHandle, KeyBasicInformation, KeyInformation, 0x18u, &ResultLength);
    ZwClose(KeyHandle);
  }
  if ( qword_1C0333FD8 != KeyInformation[0] )
  {
    qword_1C0333FD8 = KeyInformation[0];
    return 1;
  }
  return v0;
}
