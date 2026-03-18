/*
 * XREFs of EtwpExpandFileName @ 0x1405588EC
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x14054FF60 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x14055808C (EtwpCreateLogFile.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlCompareUnicodeStrings @ 0x140485820 (RtlCompareUnicodeStrings.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall EtwpExpandFileName(char a1, UNICODE_STRING *a2, unsigned int a3, unsigned __int16 *a4)
{
  char v7; // r14
  int Length; // r13d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  LONG v12; // ecx
  __int64 result; // rax
  unsigned __int16 *CurrentServerSiloGlobals; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  SIZE_T v17; // rax
  SIZE_T v18; // rbx
  wchar_t *PoolWithTag; // rdi
  const size_t *v20; // rsi
  _QWORD *v21; // rax
  NTSTATUS v22; // eax
  unsigned int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rax
  size_t v26; // rbx
  _QWORD *v27; // rax
  const size_t *v28; // rsi
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
    CurrentServerSiloGlobals = (unsigned __int16 *)PsGetCurrentServerSiloGlobals();
    if ( (_WORD)v10 == (_WORD)Length )
    {
      v16 = CurrentServerSiloGlobals[508] + *a4 + 56LL;
    }
    else
    {
      v15 = a2->Length;
      v16 = (unsigned int)CurrentServerSiloGlobals[508] - Length + (_DWORD)v15 + 2;
      if ( a2->Buffer[(v15 >> 1) - 1] == 92 )
      {
        v7 = 1;
        v16 = *a4 + (unsigned __int64)(unsigned int)v16;
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
          v28 = (const size_t *)*((_QWORD *)a4 + 1);
        else
          v28 = &cchOriginalDestLength;
        v22 = RtlStringCbPrintfW(PoolWithTag, v18, L"%ws%ws", a2->Buffer, v28);
      }
      else
      {
        v22 = RtlStringCbPrintfW(PoolWithTag, v18, L"%ws", a2->Buffer);
      }
    }
    else if ( a2->Length == (_WORD)Length )
    {
      v27 = PsGetCurrentServerSiloGlobals();
      v22 = RtlStringCbPrintfW(
              PoolWithTag,
              v18,
              L"%ws%ws%ws%ws",
              v27[128],
              L"\\system32\\Logfiles\\WMI\\",
              *((_QWORD *)a4 + 1),
              L".etl");
    }
    else
    {
      if ( v7 )
        v20 = (const size_t *)*((_QWORD *)a4 + 1);
      else
        v20 = &cchOriginalDestLength;
      v21 = PsGetCurrentServerSiloGlobals();
      v22 = RtlStringCbPrintfW(PoolWithTag, v18, L"%ws%ws%ws", v21[128], &a2->Buffer[v29], v20);
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
