/*
 * XREFs of WheapIsSqmLoggerRunning @ 0x1407CC0F4
 * Callers:
 *     WheapSqmWaitWorkerRoutine @ 0x1407CC4F0 (WheapSqmWaitWorkerRoutine.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
