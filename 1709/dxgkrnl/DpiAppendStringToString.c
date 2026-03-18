/*
 * XREFs of DpiAppendStringToString @ 0x1C0111090
 * Callers:
 *     DpiGdoSetupGdiParameters @ 0x1C0110C48 (DpiGdoSetupGdiParameters.c)
 *     DpiPdoHandleQueryId @ 0x1C0120530 (DpiPdoHandleQueryId.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1C00123F0 (RtlStringCbLengthW.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall DpiAppendStringToString(PCWSTR Source, PCWSTR a2, PUNICODE_STRING UnicodeString)
{
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // r11d
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  unsigned __int16 v11; // bx
  wchar_t *PoolWithTag; // rax
  __int64 v13; // rcx
  NTSTATUS appended; // eax
  NTSTATUS v15; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  size_t pcbLength[5]; // [rsp+20h] [rbp-28h] BYREF
  size_t v20; // [rsp+68h] [rbp+20h] BYREF

  v6 = RtlStringCbLengthW(Source, 0x208uLL, &v20);
  v9 = v6;
  if ( v6 < 0 )
    goto LABEL_8;
  v10 = RtlStringCbLengthW(a2, v8, pcbLength);
  v9 = v10;
  if ( v10 < 0 )
    goto LABEL_8;
  v11 = LOWORD(pcbLength[0]) + v20 + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x74727044u);
  UnicodeString->Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v9) = -1073741801;
    v17 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v17 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v17);
LABEL_9:
    RtlFreeUnicodeString(UnicodeString);
    return (unsigned int)v9;
  }
  UnicodeString->Length = 0;
  UnicodeString->MaximumLength = v11;
  memset(PoolWithTag, 0, v11);
  appended = RtlAppendUnicodeToString(UnicodeString, Source);
  v9 = appended;
  if ( appended < 0 || (v15 = RtlAppendUnicodeToString(UnicodeString, a2), v9 = v15, v15 < 0) )
  {
LABEL_8:
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = v9;
    WdLogEvent5_WdError(v18);
    goto LABEL_9;
  }
  return (unsigned int)v9;
}
