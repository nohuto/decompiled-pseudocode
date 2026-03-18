/*
 * XREFs of CmpRecordShutdownStopTime @ 0x140662D78
 * Callers:
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 */

__int64 CmpRecordShutdownStopTime()
{
  NTSTATUS v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+10h] BYREF
  LARGE_INTEGER Data; // [rsp+88h] [rbp+18h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    Data = KeQueryPerformanceCounter(&PerformanceFrequency);
    RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounter");
    v0 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &Data, 8u);
    if ( v0 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"LastBootPerfCounterFrequency");
      v0 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &PerformanceFrequency, 8u);
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v0;
}
