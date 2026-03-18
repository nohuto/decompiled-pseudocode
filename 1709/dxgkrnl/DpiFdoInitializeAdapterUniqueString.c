/*
 * XREFs of DpiFdoInitializeAdapterUniqueString @ 0x1C01163C4
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C0115904 (DpiFdoInitializeFdo.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000C794 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C01165C8 (MonitorUnifyCCDMonitorString.c)
 */

__int64 __fastcall DpiFdoInitializeAdapterUniqueString(__int64 a1)
{
  __int64 v1; // rdi
  WCHAR *PoolWithTag; // r14
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  __int64 v21; // rax
  ULONG Length[2]; // [rsp+28h] [rbp-99h]
  PULONG ResultLength; // [rsp+30h] [rbp-91h]
  int v24; // [rsp+38h] [rbp-89h]
  ULONG v25; // [rsp+48h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-59h] BYREF
  UUID Uuid; // [rsp+98h] [rbp-29h] BYREF
  wchar_t pszDest[40]; // [rsp+A8h] [rbp-19h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  ObjectAttributes.Length = 48;
  KeyHandle = 0LL;
  v25 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
  PoolWithTag = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_14;
  RtlInitUnicodeString(&DestinationString, L"VideoID");
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v25) != -1073741789 )
  {
    v17 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdEvent(v17);
    v18 = ExUuidCreate(&Uuid);
    v5 = v18;
    if ( v18 >= 0 )
    {
      v19 = RtlStringFromGUID(&Uuid, (PUNICODE_STRING)(v1 + 4576));
      v5 = v19;
      if ( v19 >= 0 )
      {
        RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 4576), (PCUNICODE_STRING)(v1 + 4576), 0);
        v20 = ZwSetValueKey(
                KeyHandle,
                &DestinationString,
                0,
                1u,
                *(PVOID *)(v1 + 4584),
                *(unsigned __int16 *)(v1 + 4578));
        v5 = v20;
        if ( v20 >= 0 )
          goto LABEL_6;
      }
    }
    goto LABEL_14;
  }
  v10 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = -1073741789LL;
  WdLogEvent5_WdEvent(v10);
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v25, 0x74727044u);
  if ( !PoolWithTag )
  {
LABEL_15:
    LODWORD(v5) = -1073741801;
    v16 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v16 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v16);
    goto LABEL_21;
  }
  v12 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, v25, &v25);
  v5 = v12;
  if ( v12 < 0 )
  {
LABEL_14:
    v15 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v15 + 24) = v5;
    WdLogEvent5_WdError(v15);
LABEL_8:
    if ( (int)v5 >= 0 )
      goto LABEL_9;
    goto LABEL_21;
  }
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4576), PoolWithTag + 6) )
    goto LABEL_15;
LABEL_6:
  pszDest[0] = 0;
  v24 = *(_DWORD *)(v1 + 1132);
  LODWORD(ResultLength) = *(_DWORD *)(v1 + 1128);
  Length[0] = *(_DWORD *)(v1 + 1112);
  LODWORD(v5) = RtlStringCbPrintfW(
                  pszDest,
                  0x4AuLL,
                  L"%04X_%04X_%08X_%08X",
                  *(unsigned int *)(v1 + 1108),
                  *(_QWORD *)Length,
                  ResultLength,
                  v24);
  if ( RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4592), pszDest) )
  {
    MonitorUnifyCCDMonitorString(v1 + 4592);
    goto LABEL_8;
  }
  LODWORD(v5) = -1073741801;
  v21 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v21 + 24) = -1073741801LL;
  WdLogEvent5_WdError(v21);
LABEL_21:
  if ( *(_QWORD *)(v1 + 4600) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4592));
    *(_QWORD *)(v1 + 4600) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 4584) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4576));
    *(_QWORD *)(v1 + 4584) = 0LL;
  }
LABEL_9:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
