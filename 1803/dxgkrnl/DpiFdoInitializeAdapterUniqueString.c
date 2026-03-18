/*
 * XREFs of DpiFdoInitializeAdapterUniqueString @ 0x1C01F6720
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C01F6A34 (DpiFdoInitializeFdo.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0008DC0 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C022F64C (MonitorUnifyCCDMonitorString.c)
 */

__int64 __fastcall DpiFdoInitializeAdapterUniqueString(__int64 a1)
{
  __int64 v1; // rdi
  WCHAR *PoolWithTag; // r14
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  NTSTATUS v12; // eax
  __int64 v13; // rax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  ULONG Length[2]; // [rsp+28h] [rbp-99h]
  PULONG ResultLength; // [rsp+30h] [rbp-91h]
  int v22; // [rsp+38h] [rbp-89h]
  ULONG v23; // [rsp+48h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-59h] BYREF
  UUID Uuid; // [rsp+98h] [rbp-29h] BYREF
  WCHAR SourceString[40]; // [rsp+A8h] [rbp-19h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  ObjectAttributes.Length = 48;
  KeyHandle = 0LL;
  v23 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
  PoolWithTag = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_2;
  RtlInitUnicodeString(&DestinationString, L"VideoID");
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v23) != -1073741789 )
  {
    v13 = WdLogNewEntry5_WdEvent(v8, v7);
    *(_QWORD *)(v13 + 24) = 0LL;
    WdLogEvent5_WdEvent(v13);
    v14 = ExUuidCreate(&Uuid);
    v5 = v14;
    if ( v14 >= 0 )
    {
      v15 = RtlStringFromGUID(&Uuid, (PUNICODE_STRING)(v1 + 4648));
      v5 = v15;
      if ( v15 >= 0 )
      {
        RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 4648), (PCUNICODE_STRING)(v1 + 4648), 0);
        v16 = ZwSetValueKey(
                KeyHandle,
                &DestinationString,
                0,
                1u,
                *(PVOID *)(v1 + 4656),
                *(unsigned __int16 *)(v1 + 4650));
        v5 = v16;
        if ( v16 >= 0 )
          goto LABEL_12;
      }
    }
LABEL_2:
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdError(v6);
    goto LABEL_15;
  }
  v9 = WdLogNewEntry5_WdEvent(v8, v7);
  *(_QWORD *)(v9 + 24) = -1073741789LL;
  WdLogEvent5_WdEvent(v9);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v23, 0x74727044u);
  if ( !PoolWithTag )
  {
LABEL_5:
    LODWORD(v5) = -1073741801;
    v11 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v11 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v11);
    goto LABEL_16;
  }
  v12 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, v23, &v23);
  v5 = v12;
  if ( v12 < 0 )
    goto LABEL_2;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4648), PoolWithTag + 6) )
    goto LABEL_5;
LABEL_12:
  SourceString[0] = 0;
  v22 = *(_DWORD *)(v1 + 1132);
  LODWORD(ResultLength) = *(_DWORD *)(v1 + 1128);
  Length[0] = *(_DWORD *)(v1 + 1112);
  LODWORD(v5) = RtlStringCbPrintfW(
                  SourceString,
                  0x4AuLL,
                  L"%04X_%04X_%08X_%08X",
                  *(unsigned int *)(v1 + 1108),
                  *(_QWORD *)Length,
                  ResultLength,
                  v22);
  if ( RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4664), SourceString) )
  {
    MonitorUnifyCCDMonitorString(v1 + 4664);
LABEL_15:
    if ( (int)v5 >= 0 )
      goto LABEL_20;
    goto LABEL_16;
  }
  LODWORD(v5) = -1073741801;
  v18 = WdLogNewEntry5_WdError(v17);
  *(_QWORD *)(v18 + 24) = -1073741801LL;
  WdLogEvent5_WdError(v18);
LABEL_16:
  if ( *(_QWORD *)(v1 + 4672) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4664));
    *(_QWORD *)(v1 + 4672) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 4656) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4648));
    *(_QWORD *)(v1 + 4656) = 0LL;
  }
LABEL_20:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
