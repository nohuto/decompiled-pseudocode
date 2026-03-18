/*
 * XREFs of EtwpGenerateFileName @ 0x1405878D8
 * Callers:
 *     EtwpFlushBufferToLogfile @ 0x1405875C0 (EtwpFlushBufferToLogfile.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140061AF0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     wcschr @ 0x14018A5C0 (wcschr.c)
 *     wcsrchr @ 0x14018A7C0 (wcsrchr.c)
 *     wcsstr @ 0x14018A850 (wcsstr.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall EtwpGenerateFileName(unsigned __int16 *a1, volatile signed __int32 *a2, UNICODE_STRING *a3)
{
  const wchar_t *v5; // rcx
  wchar_t *v7; // rdi
  unsigned __int32 v8; // ebp
  unsigned int v9; // r14d
  wchar_t *PoolWithTag; // rax
  WCHAR *v11; // rdi

  v5 = (const wchar_t *)*((_QWORD *)a1 + 1);
  if ( !v5 )
    return 3221225520LL;
  v7 = wcschr(v5, 0x25u);
  if ( v7 && v7 == wcsrchr(*((const wchar_t **)a1 + 1), 0x25u) && wcsstr(*((const wchar_t **)a1 + 1), L"%d") )
  {
    v8 = _InterlockedIncrement(a2);
    v9 = a1[1] + 64;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x50777445u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    if ( !RtlStringCbPrintfW(PoolWithTag, v9, *((NTSTRSAFE_PCWSTR *)a1 + 1), v8)
      && memcmp(*((const void **)a1 + 1), v11, *a1) )
    {
      RtlFreeAnsiString(a3);
      RtlInitUnicodeString(a3, v11);
      return 0LL;
    }
    ExFreePoolWithTag(v11, 0);
    return 3221225520LL;
  }
  return 3221225523LL;
}
