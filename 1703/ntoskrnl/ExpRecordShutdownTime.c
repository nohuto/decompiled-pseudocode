/*
 * XREFs of ExpRecordShutdownTime @ 0x140259E30
 * Callers:
 *     ExShutdownSystem @ 0x14041A7C8 (ExShutdownSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x14017FB40 (ZwFlushKey.c)
 */

int ExpRecordShutdownTime()
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+10h] BYREF
  __int64 Data; // [rsp+98h] [rbp+18h] BYREF

  Data = MEMORY[0xFFFFF78000000014];
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"ShutdownTime");
    ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, &Data, 8u);
    ZwFlushKey(KeyHandle);
    return ZwClose(KeyHandle);
  }
  return result;
}
