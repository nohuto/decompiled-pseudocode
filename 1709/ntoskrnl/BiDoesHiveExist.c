/*
 * XREFs of BiDoesHiveExist @ 0x1405B19AC
 * Callers:
 *     BiLoadHive @ 0x1405B1528 (BiLoadHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x14017E060 (ZwQueryAttributesFile.c)
 */

bool __fastcall BiDoesHiveExist(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-68h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+60h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 12));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwQueryAttributesFile(&ObjectAttributes, &FileInformation) >= 0 && (FileInformation.FileAttributes & 0x10) == 0;
}
