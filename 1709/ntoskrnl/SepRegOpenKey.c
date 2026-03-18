/*
 * XREFs of SepRegOpenKey @ 0x140513824
 * Callers:
 *     SepBuildCapPolicyTable @ 0x140159584 (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x1405136D4 (SepRegQueryDwordValue.c)
 *     SepRmFetchGlobalSacl @ 0x1405A8050 (SepRmFetchGlobalSacl.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1405D0870 (SepAdtOpenRegAndSetupNotification.c)
 *     SepReadAndPopulateCapes @ 0x1405EB5EC (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x140731814 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     memset @ 0x140192F40 (memset.c)
 */

NTSTATUS __fastcall SepRegOpenKey(PCWSTR SourceString, ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  *KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
}
