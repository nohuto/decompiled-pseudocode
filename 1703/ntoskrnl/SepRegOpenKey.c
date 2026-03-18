/*
 * XREFs of SepRegOpenKey @ 0x1405608EC
 * Callers:
 *     SepBuildCapPolicyTable @ 0x14016292C (SepBuildCapPolicyTable.c)
 *     SepRegQueryDwordValue @ 0x14056079C (SepRegQueryDwordValue.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1405A6E90 (SepAdtOpenRegAndSetupNotification.c)
 *     SepRmFetchGlobalSacl @ 0x1405C5920 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x1405C5FA4 (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1406F9DD4 (SepReadAndInsertCaps.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     memset @ 0x140192D80 (memset.c)
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
