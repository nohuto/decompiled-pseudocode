/*
 * XREFs of WheapIsSqmLoggerRunning @ 0x140764410
 * Callers:
 *     WheapSqmWaitWorkerRoutine @ 0x140764810 (WheapSqmWaitWorkerRoutine.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

bool WheapIsSqmLoggerRunning()
{
  int v0; // edi
  _DWORD *PoolWithTag; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+18h] BYREF

  v0 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\SQMClient\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"SqmLoggerRunning");
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x61656857u);
    if ( PoolWithTag )
    {
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, 0x10u, &ResultLength) >= 0
        && ResultLength == 16 )
      {
        v0 = PoolWithTag[3];
      }
      ExFreePoolWithTag(PoolWithTag, 0x61656857u);
    }
    ZwClose(KeyHandle);
  }
  return v0 != 0;
}
