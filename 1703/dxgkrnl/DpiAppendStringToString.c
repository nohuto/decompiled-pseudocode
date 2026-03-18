/*
 * XREFs of DpiAppendStringToString @ 0x1C011A258
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C01197F0 (DpiPdoHandleQueryId.c)
 *     DpiGdoSetupGdiParameters @ 0x1C0119E10 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1C00117CC (RtlStringCbLengthW.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall DpiAppendStringToString(PCWSTR Source, PCWSTR a2, PUNICODE_STRING UnicodeString)
{
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r11d
  __int64 v10; // rbx
  NTSTATUS v11; // eax
  unsigned __int16 v12; // bx
  wchar_t *PoolWithTag; // rax
  __int64 v14; // rcx
  NTSTATUS appended; // eax
  NTSTATUS v16; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  size_t pcbLength[5]; // [rsp+20h] [rbp-28h] BYREF
  size_t v21; // [rsp+68h] [rbp+20h] BYREF

  v6 = RtlStringCbLengthW(Source, 0x208uLL, &v21);
  v10 = v6;
  if ( v6 < 0 )
    goto LABEL_8;
  v11 = RtlStringCbLengthW(a2, v9, pcbLength);
  v10 = v11;
  if ( v11 < 0 )
    goto LABEL_8;
  v12 = LOWORD(pcbLength[0]) + v21 + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x74727044u);
  UnicodeString->Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v10) = -1073741801;
    v18 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v18 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v18);
LABEL_9:
    RtlFreeUnicodeString(UnicodeString);
    return (unsigned int)v10;
  }
  UnicodeString->Length = 0;
  UnicodeString->MaximumLength = v12;
  memset(PoolWithTag, 0, v12);
  appended = RtlAppendUnicodeToString(UnicodeString, Source);
  v10 = appended;
  if ( appended < 0 || (v16 = RtlAppendUnicodeToString(UnicodeString, a2), v10 = v16, v16 < 0) )
  {
LABEL_8:
    v19 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v19 + 24) = v10;
    WdLogEvent5_WdError(v19);
    goto LABEL_9;
  }
  return (unsigned int)v10;
}
