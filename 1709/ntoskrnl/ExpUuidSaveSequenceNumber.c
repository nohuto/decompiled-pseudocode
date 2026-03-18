/*
 * XREFs of ExpUuidSaveSequenceNumber @ 0x1405F1644
 * Callers:
 *     ExpUuidSaveSequenceNumberIf @ 0x14059D77C (ExpUuidSaveSequenceNumberIf.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 */

__int64 ExpUuidSaveSequenceNumber()
{
  NTSTATUS v0; // ebx
  int Data; // [rsp+30h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-1h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp+Fh] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+1Fh] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+6Fh] BYREF

  Data = ExpUuidSequenceNumber;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Executive");
  RtlInitUnicodeString(&ValueName, L"UuidSequenceNumber");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0xC0000000, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    v0 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v0;
}
