/*
 * XREFs of rimRegQueryRegistryDWord @ 0x1C008CEA4
 * Callers:
 *     RIMReadTTMRegistrySettings @ 0x1C008CE0C (RIMReadTTMRegistrySettings.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C0107CA4 (RawInputManagerInputObserverObjectCreate.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C0112B38 (RIMCreateHidKeyboardDeviceInfo.c)
 *     rimReadHidKeyboardFlags @ 0x1C011379C (rimReadHidKeyboardFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall rimRegQueryRegistryDWord(struct _UNICODE_STRING *a1, const WCHAR *a2, unsigned int a3)
{
  void *KeyHandle; // [rsp+30h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp+37h] BYREF
  int v11; // [rsp+84h] [rbp+3Bh]
  int v12; // [rsp+88h] [rbp+3Fh]
  unsigned int v13; // [rsp+8Ch] [rbp+43h]

  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    if ( !ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            KeyValueInformation,
            0x14u,
            &ResultLength)
      && v11 == 4
      && v12 == 4 )
    {
      a3 = v13;
    }
    ZwClose(KeyHandle);
  }
  return a3;
}
