/*
 * XREFs of DpiAppendStringToString @ 0x1C01FCE1C
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C020CC00 (DpiPdoHandleQueryId.c)
 *     DpiGdoSetupGdiParameters @ 0x1C020E84C (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0028EF8 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall DpiAppendStringToString(PCWSTR Source, unsigned __int16 *a2, PUNICODE_STRING UnicodeString)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  unsigned __int16 v10; // bx
  wchar_t *PoolWithTag; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  NTSTATUS appended; // eax
  NTSTATUS v15; // eax
  __int64 v16; // rax
  unsigned __int64 v18[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v6 = RtlStringCbLengthW(Source, 0x208uLL, &v19);
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_7;
  v9 = RtlStringCbLengthW(a2, 0x208uLL, v18);
  v8 = v9;
  if ( v9 < 0 )
    goto LABEL_7;
  v10 = LOWORD(v18[0]) + v19 + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x74727044u);
  UnicodeString->Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v8) = -1073741801;
    v13 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v13 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v13);
LABEL_8:
    RtlFreeUnicodeString(UnicodeString);
    return (unsigned int)v8;
  }
  UnicodeString->Length = 0;
  UnicodeString->MaximumLength = v10;
  memset(PoolWithTag, 0, v10);
  appended = RtlAppendUnicodeToString(UnicodeString, Source);
  v8 = appended;
  if ( appended < 0 || (v15 = RtlAppendUnicodeToString(UnicodeString, a2), v8 = v15, v15 < 0) )
  {
LABEL_7:
    v16 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v16 + 24) = v8;
    WdLogEvent5_WdError(v16);
    goto LABEL_8;
  }
  return (unsigned int)v8;
}
