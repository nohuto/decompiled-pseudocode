/*
 * XREFs of SmpLoadPnPSerializeSettings @ 0x140003090
 * Callers:
 *     SmscMain @ 0x140002044 (SmscMain.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C6C0 (__security_check_cookie.c)
 */

__int64 SmpLoadPnPSerializeSettings()
{
  NTSTATUS v0; // ebx
  int v2; // eax
  void *KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  int v5; // [rsp+40h] [rbp-19h] BYREF
  const wchar_t *v6; // [rsp+48h] [rbp-11h]
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v10; // [rsp+94h] [rbp+3Bh]
  int v11; // [rsp+9Ch] [rbp+43h]

  ObjectAttributes.RootDirectory = 0LL;
  KeyHandle = 0LL;
  v6 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v5 = 7209068;
  ValueName.Buffer = L"BootOptions";
  *(_DWORD *)&ValueName.Length = 1572886;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v5;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    v0 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    if ( v0 >= 0 )
    {
      v2 = SmpSerializeBoot;
      if ( v10 == 4 )
        v2 = v11;
      SmpSerializeBoot = v2;
    }
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v0;
}
