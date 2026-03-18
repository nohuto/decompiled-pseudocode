/*
 * XREFs of ?HmgrStacksInit@@YAXXZ @ 0x1C0075EFC
 * Callers:
 *     HmgCreate @ 0x1C0075A30 (HmgCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void HmgrStacksInit(void)
{
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v5; // [rsp+84h] [rbp-7Ch]
  unsigned int v6; // [rsp+8Ch] [rbp-74h]

  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"GDIEnableStackTrace");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v5 == 4 )
    {
      gbGdiHmgrStacks = v6 != 0;
    }
    RtlInitUnicodeString(&DestinationString, L"GDIEnableAltStackTrace");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v5 == 4 )
    {
      gbGdiHmgrAltStacks = v6 != 0;
    }
    RtlInitUnicodeString(&DestinationString, L"GDIEnableReferenceStackTraces");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v5 == 4 )
    {
      gReferenceTrackedTypes = v6;
    }
    RtlInitUnicodeString(&DestinationString, L"GDICaptureStackTraceForObjectType");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v5 == 4 )
    {
      gulGdiHmgrTraceObjectType = v6;
    }
    ZwClose(KeyHandle);
  }
}
