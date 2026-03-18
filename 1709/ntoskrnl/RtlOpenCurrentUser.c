/*
 * XREFs of RtlOpenCurrentUser @ 0x1405DDAD0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140153864 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1404E11A0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

NTSTATUS __stdcall RtlOpenCurrentUser(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  int v4; // ebx
  UNICODE_STRING KeyPath; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  v4 = RtlFormatCurrentUserKeyPath(&KeyPath);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &KeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
    RtlFreeUnicodeString(&KeyPath);
  }
  if ( v4 == -1073741772 )
  {
    RtlInitUnicodeString(&KeyPath, L"\\Registry\\User\\.Default");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &KeyPath;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
  }
  return v4;
}
