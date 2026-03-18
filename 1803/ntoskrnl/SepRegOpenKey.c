/*
 * XREFs of SepRegOpenKey @ 0x140631A00
 * Callers:
 *     SepBuildCapPolicyTable @ 0x1401784E0 (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x14051C738 (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140631664 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x1406318E0 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x140631A88 (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x140795114 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

NTSTATUS __fastcall SepRegOpenKey(PCWSTR SourceString, ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  *KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
