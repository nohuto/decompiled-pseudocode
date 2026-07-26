/*
 * XREFs of InitializeTelemetryAssertsKM @ 0x1C0021ED8
 * Callers:
 *     DriverEntry @ 0x1C011A0D0 (DriverEntry.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00220E8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     TraceLoggingRegisterEx @ 0x1C00C927C (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKM(const void **a1)
{
  TLG_PENABLECALLBACK v2; // rdx
  PVOID v3; // r8
  TLG_PENABLECALLBACK v4; // rdx
  PVOID v5; // r8
  TLG_PENABLECALLBACK v6; // rdx
  PVOID v7; // r8
  NTSTATUS RegistryValues; // esi
  PVOID PoolWithTag; // rax
  void *v10; // r14
  __int64 Length; // rdx
  char *Buffer; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  CHAR *v16; // rbx
  _STRING v18; // [rsp+38h] [rbp-49h] BYREF
  _STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  _UNICODE_STRING SourceString; // [rsp+58h] [rbp-29h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+68h] [rbp-19h] BYREF

  KeInitializeSpinLock(&g_AssertSpinLock);
  qword_1C0097E38 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
  g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
  TraceLoggingRegisterEx(&stru_1C0097470, v2, v3);
  TraceLoggingRegisterEx(&stru_1C00973F0, v4, v5);
  TraceLoggingRegisterEx(&stru_1C0097430, v6, v7);
  RtlInitAnsiString(&DestinationString, 0LL);
  RegistryValues = -1073741801;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)*(unsigned __int16 *)a1 + 2, 0x74727341u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)*(unsigned __int16 *)a1 + 2);
    memmove(v10, a1[1], *(unsigned __int16 *)a1);
    RtlInitUnicodeString(&SourceString, 0LL);
    memset(QueryTable, 0, sizeof(QueryTable));
    QueryTable[0].Name = L"ImagePath";
    QueryTable[0].Flags = 32;
    QueryTable[0].EntryContext = &SourceString;
    QueryTable[0].DefaultType = 2;
    RegistryValues = RtlQueryRegistryValuesEx(0, (PCWSTR)v10, QueryTable, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      RegistryValues = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
      RtlFreeUnicodeString(&SourceString);
      if ( RegistryValues >= 0 )
      {
        Length = DestinationString.Length;
        Buffer = DestinationString.Buffer;
        v13 = DestinationString.Length;
        v14 = (unsigned int)DestinationString.Length - 1;
        if ( DestinationString.Length != 1 )
        {
          while ( DestinationString.Buffer[v14] != 92 )
          {
            v15 = (_DWORD)v14 == 1;
            v14 = (unsigned int)(v14 - 1);
            if ( v15 )
              goto LABEL_9;
          }
          v13 = (unsigned int)v14;
        }
LABEL_9:
        if ( (_DWORD)v13 != DestinationString.Length )
        {
          RtlInitAnsiString(&v18, &DestinationString.Buffer[(unsigned int)(v13 + 1)]);
          g_ModuleName = (LPCSTR)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v18.Length + 1, 0x74727341u);
          v16 = (CHAR *)g_ModuleName;
          memset((void *)g_ModuleName, 0, (unsigned int)v18.Length + 1);
          memmove(v16, v18.Buffer, v18.Length);
        }
        _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, Length, v13, Buffer);
      }
    }
    ExFreePoolWithTag(v10, 0x74727341u);
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)RegistryValues;
}
