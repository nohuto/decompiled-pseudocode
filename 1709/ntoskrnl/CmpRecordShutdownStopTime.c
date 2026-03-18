/*
 * XREFs of CmpRecordShutdownStopTime @ 0x14068C3F0
 * Callers:
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     CmpReadBuildLab @ 0x14068C290 (CmpReadBuildLab.c)
 */

__int64 CmpRecordShutdownStopTime()
{
  struct _PRIVILEGE_SET *v0; // rdi
  int v1; // ebx
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  ULONG DataSize; // [rsp+A0h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF
  PVOID v8; // [rsp+B0h] [rbp+30h] BYREF
  LARGE_INTEGER Data; // [rsp+B8h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  v0 = 0LL;
  DataSize = 0;
  v8 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\WINDOWS");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
  if ( v1 >= 0 )
  {
    Data = KeQueryPerformanceCounter(&PerformanceFrequency);
    RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounter");
    v1 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &Data, 8u);
    if ( v1 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"LastBootPerfCounterFrequency");
      v1 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &PerformanceFrequency, 8u);
      if ( v1 >= 0 )
      {
        v1 = CmpReadBuildLab(&v8, &DataSize);
        if ( v1 < 0 )
        {
          v0 = (struct _PRIVILEGE_SET *)v8;
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"ShutdownStopTimePerfCounterBuildLab");
          v0 = (struct _PRIVILEGE_SET *)v8;
          v1 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, v8, DataSize);
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v0 )
    MiDeleteSubsection(v0);
  return (unsigned int)v1;
}
