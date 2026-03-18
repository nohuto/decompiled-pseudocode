/*
 * XREFs of ExpIsValidUILanguage @ 0x1407BB30C
 * Callers:
 *     ExpGetCurrentUserUILanguage @ 0x14060EC80 (ExpGetCurrentUserUILanguage.c)
 *     ExpGetUILanguagePolicy @ 0x14060EDB0 (ExpGetUILanguagePolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 */

bool __fastcall ExpIsValidUILanguage(const WCHAR *a1)
{
  bool v1; // bl
  int v2; // edx
  const WCHAR *v3; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v10; // [rsp+84h] [rbp-7Ch]
  __int16 v11; // [rsp+8Ch] [rbp-74h]

  v1 = 0;
  v2 = 0;
  if ( *a1 )
  {
    v3 = a1;
    do
    {
      ++v2;
      ++v3;
    }
    while ( *v3 );
  }
  if ( v2 >= 8 )
    a1 += 4;
  RtlInitUnicodeString(&DestinationString, a1);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_140399B70;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x110u,
           &ResultLength) >= 0
      && v10 == 1 )
    {
      v1 = v11 == 49;
    }
    ZwClose(KeyHandle);
  }
  return v1;
}
