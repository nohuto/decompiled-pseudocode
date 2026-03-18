/*
 * XREFs of MigrateOOBELanguageToInstallationLanguage @ 0x140288AD0
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1404F25F8 (NtGetMUIRegistryInfo.c)
 *     NtFlushInstallUILanguage @ 0x1405F0254 (NtFlushInstallUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 MigrateOOBELanguageToInstallationLanguage()
{
  NTSTATUS v0; // ebx
  unsigned __int16 v1; // dx
  __int64 i; // rcx
  unsigned __int16 v3; // ax
  __int16 v4; // ax
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+98h] [rbp-70h] BYREF
  __int16 v12; // [rsp+A0h] [rbp-68h]
  ULONG KeyValueInformation[132]; // [rsp+A8h] [rbp-60h] BYREF

  v11 = 0LL;
  KeyHandle = 0LL;
  v12 = 0;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\NLS\\Language");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"InstallLanguage");
    v1 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
    for ( i = 3LL; i >= 0; --i )
    {
      v3 = v1 & 0xF;
      if ( v3 <= 9u )
        v4 = v3 + 48;
      else
        v4 = v3 + 55;
      v1 >>= 4;
      *((_WORD *)&v11 + i) = v4;
    }
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x210u,
           &ResultLength) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"PreviousInstallLanguage");
      ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, &KeyValueInformation[3], KeyValueInformation[2]);
    }
    v0 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, &v11, 0xAu);
    if ( v0 >= 0 )
      v0 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v0;
}
