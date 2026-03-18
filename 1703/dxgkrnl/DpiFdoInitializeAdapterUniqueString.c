/*
 * XREFs of DpiFdoInitializeAdapterUniqueString @ 0x1C010FE8C
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C010F458 (DpiFdoInitializeFdo.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C00044B8 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C0110090 (MonitorUnifyCCDMonitorString.c)
 */

__int64 __fastcall DpiFdoInitializeAdapterUniqueString(__int64 a1)
{
  __int64 v1; // rdi
  WCHAR *PoolWithTag; // r14
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  __int64 v20; // rax
  ULONG Length[2]; // [rsp+28h] [rbp-99h]
  PULONG ResultLength; // [rsp+30h] [rbp-91h]
  int v23; // [rsp+38h] [rbp-89h]
  ULONG v24; // [rsp+48h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-59h] BYREF
  UUID Uuid; // [rsp+98h] [rbp-29h] BYREF
  wchar_t pszDest[40]; // [rsp+A8h] [rbp-19h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  ObjectAttributes.Length = 48;
  KeyHandle = 0LL;
  v24 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
  PoolWithTag = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v6 = v3;
  if ( v3 < 0 )
    goto LABEL_14;
  RtlInitUnicodeString(&DestinationString, L"VideoID");
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v24) != -1073741789 )
  {
    v16 = WdLogNewEntry5_WdEvent(v7);
    *(_QWORD *)(v16 + 24) = 0LL;
    WdLogEvent5_WdEvent(v16);
    v17 = ExUuidCreate(&Uuid);
    v6 = v17;
    if ( v17 >= 0 )
    {
      v18 = RtlStringFromGUID(&Uuid, (PUNICODE_STRING)(v1 + 4480));
      v6 = v18;
      if ( v18 >= 0 )
      {
        RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 4480), (PCUNICODE_STRING)(v1 + 4480), 0);
        v19 = ZwSetValueKey(
                KeyHandle,
                &DestinationString,
                0,
                1u,
                *(PVOID *)(v1 + 4488),
                *(unsigned __int16 *)(v1 + 4482));
        v6 = v19;
        if ( v19 >= 0 )
          goto LABEL_6;
      }
    }
    goto LABEL_14;
  }
  v8 = WdLogNewEntry5_WdEvent(v7);
  *(_QWORD *)(v8 + 24) = -1073741789LL;
  WdLogEvent5_WdEvent(v8);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v24, 0x74727044u);
  if ( !PoolWithTag )
  {
LABEL_15:
    LODWORD(v6) = -1073741801;
    v15 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v15 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v15);
    goto LABEL_21;
  }
  v10 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, v24, &v24);
  v6 = v10;
  if ( v10 < 0 )
  {
LABEL_14:
    v14 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v14 + 24) = v6;
    WdLogEvent5_WdError(v14);
LABEL_8:
    if ( (int)v6 >= 0 )
      goto LABEL_9;
    goto LABEL_21;
  }
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4480), PoolWithTag + 6) )
    goto LABEL_15;
LABEL_6:
  pszDest[0] = 0;
  v23 = *(_DWORD *)(v1 + 1132);
  LODWORD(ResultLength) = *(_DWORD *)(v1 + 1128);
  Length[0] = *(_DWORD *)(v1 + 1112);
  LODWORD(v6) = RtlStringCbPrintfW(
                  pszDest,
                  0x4AuLL,
                  L"%04X_%04X_%08X_%08X",
                  *(unsigned int *)(v1 + 1108),
                  *(_QWORD *)Length,
                  ResultLength,
                  v23);
  if ( RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4496), pszDest) )
  {
    MonitorUnifyCCDMonitorString(v1 + 4496);
    goto LABEL_8;
  }
  LODWORD(v6) = -1073741801;
  v20 = WdLogNewEntry5_WdError(v12, v11);
  *(_QWORD *)(v20 + 24) = -1073741801LL;
  WdLogEvent5_WdError(v20);
LABEL_21:
  if ( *(_QWORD *)(v1 + 4504) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4496));
    *(_QWORD *)(v1 + 4504) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 4488) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4480));
    *(_QWORD *)(v1 + 4488) = 0LL;
  }
LABEL_9:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v6;
}
