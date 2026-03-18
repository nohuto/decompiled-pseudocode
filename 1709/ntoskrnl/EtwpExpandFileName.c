/*
 * XREFs of EtwpExpandFileName @ 0x1405DFEEC
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x140532AB0 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x140577D70 (EtwpCreateLogFile.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140019294 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x14056CEE0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall EtwpExpandFileName(char a1, UNICODE_STRING *a2, unsigned int a3, unsigned __int16 *a4)
{
  char v7; // r14
  int Length; // r13d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  LONG v12; // edx
  __int64 result; // rax
  int v14; // ecx
  unsigned __int64 v15; // rdx
  SIZE_T v16; // rcx
  SIZE_T v17; // rax
  SIZE_T v18; // rbx
  wchar_t *PoolWithTag; // rdi
  const wchar_t *v20; // rsi
  _QWORD *v21; // rax
  NTSTATUS v22; // eax
  unsigned int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rax
  size_t v26; // rbx
  _QWORD *CurrentServerSiloGlobals; // rax
  const wchar_t *v28; // rsi
  SIZE_T v29; // [rsp+40h] [rbp-48h]
  UNICODE_STRING v30; // [rsp+48h] [rbp-40h] BYREF
  LONG v31; // [rsp+98h] [rbp+10h]

  v7 = 0;
  RtlInitUnicodeString(&v30, L"%SystemRoot%");
  Length = v30.Length;
  v10 = a2->Length;
  v11 = v10;
  if ( (unsigned int)v10 > v30.Length )
    v11 = v30.Length;
  v29 = (unsigned __int64)v30.Length >> 1;
  v12 = RtlCompareUnicodeStrings(a2->Buffer, v11 >> 1, v30.Buffer, v29, 1u);
  v31 = v12;
  result = 0LL;
  if ( v12 )
  {
    if ( !a3 && !a1 )
      return result;
    v16 = v10 + 2;
  }
  else
  {
    v14 = *((unsigned __int16 *)PsGetCurrentServerSiloGlobals() + 524);
    if ( (_WORD)v10 == (_WORD)Length )
    {
      v16 = (unsigned int)*a4 + 56 + v14;
    }
    else
    {
      v15 = a2->Length;
      v16 = (unsigned int)(v15 + v14 - Length + 2);
      if ( a2->Buffer[(v15 >> 1) - 1] == 92 )
      {
        v7 = 1;
        v16 += *a4;
      }
    }
    v12 = 0;
  }
  v17 = v16 + 8;
  if ( !a3 )
    v17 = v16;
  v18 = v17;
  if ( a1 && v12 )
  {
    v7 = 1;
    v18 = v17 + *a4;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v18, 0x50777445u);
  if ( PoolWithTag )
  {
    if ( v31 )
    {
      if ( a1 )
      {
        if ( v7 )
          v28 = (const wchar_t *)*((_QWORD *)a4 + 1);
        else
          v28 = &word_1405F52C0;
        v22 = RtlStringCbPrintfW(PoolWithTag, v18, L"%ws%ws", a2->Buffer, v28);
      }
      else
      {
        v22 = RtlStringCbPrintfW(PoolWithTag, v18, L"%ws", a2->Buffer);
      }
    }
    else if ( a2->Length == (_WORD)Length )
    {
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      v22 = RtlStringCbPrintfW(
              PoolWithTag,
              v18,
              L"%ws%ws%ws%ws",
              CurrentServerSiloGlobals[132],
              L"\\system32\\Logfiles\\WMI\\",
              *((_QWORD *)a4 + 1),
              L".etl");
    }
    else
    {
      if ( v7 )
        v20 = (const wchar_t *)*((_QWORD *)a4 + 1);
      else
        v20 = &word_1405F52C0;
      v21 = PsGetCurrentServerSiloGlobals();
      v22 = RtlStringCbPrintfW(PoolWithTag, v18, L"%ws%ws%ws", v21[132], &a2->Buffer[v29], v20);
    }
    v23 = v22;
    if ( a3 )
    {
      v24 = -1LL;
      v25 = -1LL;
      do
        ++v25;
      while ( PoolWithTag[v25] );
      v26 = v18 - 2 * v25;
      do
        ++v24;
      while ( PoolWithTag[v24] );
      v23 = RtlStringCbPrintfW(&PoolWithTag[v24], v26, L".%03d", a3);
    }
    RtlFreeUnicodeString(a2);
    RtlInitUnicodeString(a2, PoolWithTag);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v23;
}
