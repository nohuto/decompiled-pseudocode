/*
 * XREFs of EtwpQueryPartitionRegistryInformation @ 0x140152640
 * Callers:
 *     EtwInitializeSiloState @ 0x1405DA61C (EtwInitializeSiloState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     StringToGuidNoBrackets @ 0x14015283C (StringToGuidNoBrackets.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     RtlQueryRegistryValuesEx @ 0x140590C10 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall EtwpQueryPartitionRegistryInformation(GUID *a1, _DWORD *a2, _QWORD *a3, GUID *a4)
{
  NTSTATUS RegistryValues; // ebx
  __int16 v10; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v13; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  int v16; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v17; // [rsp+A8h] [rbp-58h]
  int v18; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+B8h] [rbp-48h]
  int v20; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING *v21; // [rsp+C8h] [rbp-38h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[4]; // [rsp+E0h] [rbp-20h] BYREF

  *a2 = 0;
  v10 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v13.Length = 0LL;
  v13.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    memset(QueryTable, 0, sizeof(QueryTable));
    v17 = a2;
    QueryTable[1].DefaultType = 1;
    QueryTable[0].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
    QueryTable[0].EntryContext = &v16;
    QueryTable[1].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
    QueryTable[0].Name = L"ContainerType";
    v18 = 1;
    QueryTable[0].DefaultType = 4;
    v16 = 4;
    QueryTable[1].EntryContext = &v18;
    QueryTable[1].Name = L"ContainerId";
    QueryTable[1].DefaultData = &v10;
    p_UnicodeString = &UnicodeString;
    QueryTable[2].EntryContext = &v20;
    QueryTable[2].Name = L"ContainerCorrelationId";
    QueryTable[2].DefaultData = &v10;
    QueryTable[2].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
    QueryTable[2].DefaultType = 1;
    v20 = 1;
    v21 = &v13;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      *a3 = 0LL;
      if ( (unsigned int)StringToGuidNoBrackets(&UnicodeString, a1) )
        *a1 = NullGuid;
      RegistryValues = StringToGuidNoBrackets(&v13, a4);
      if ( RegistryValues )
      {
        RegistryValues = 0;
        *a4 = NullGuid;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v13);
  return (unsigned int)RegistryValues;
}
