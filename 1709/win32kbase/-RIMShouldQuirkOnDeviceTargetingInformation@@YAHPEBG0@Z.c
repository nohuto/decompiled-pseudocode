/*
 * XREFs of ?RIMShouldQuirkOnDeviceTargetingInformation@@YAHPEBG0@Z @ 0x1C0115904
 * Callers:
 *     RIMUpdateMonitorQuirk @ 0x1C000B05C (RIMUpdateMonitorQuirk.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall RIMShouldQuirkOnDeviceTargetingInformation(PCWSTR SourceString, PCWSTR a2)
{
  unsigned int v4; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v12; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v13; // [rsp+90h] [rbp-70h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v16; // [rsp+D4h] [rbp-2Ch]
  WCHAR SourceStringa[506]; // [rsp+DCh] [rbp-24h] BYREF

  v4 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"PhoneManufacturer");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength) >= 0
      && v16 == 1 )
    {
      RtlInitUnicodeString(&String1, SourceStringa);
      RtlInitUnicodeString(&String2, SourceString);
      if ( !RtlCompareUnicodeString(&String1, &String2, 0) )
      {
        RtlInitUnicodeString(&ValueName, L"PhoneModelName");
        if ( ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x400u,
               &ResultLength) >= 0
          && v16 == 1 )
        {
          RtlInitUnicodeString(&v13, SourceStringa);
          RtlInitUnicodeString(&v12, a2);
          LOBYTE(v4) = RtlCompareUnicodeString(&v13, &v12, 0) == 0;
        }
      }
    }
    ZwClose(KeyHandle);
  }
  return v4;
}
