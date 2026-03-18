/*
 * XREFs of RtlStringVPrintfWorkerW @ 0x1C006A7A4
 * Callers:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C006A74C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C009B570 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 * Callees:
 *     _vsnwprintf @ 0x1C009D12C (_vsnwprintf.c)
 */

NTSTATUS __stdcall RtlStringVPrintfWorkerW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszFormat,
        va_list argList)
{
  size_t v5; // rdi
  NTSTATUS v7; // ebx
  int v8; // eax

  v5 = cchDest - 1;
  v7 = 0;
  v8 = vsnwprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v8 < 0 || v8 > v5 )
  {
    pszDest[v5] = 0;
    return -2147483643;
  }
  else if ( v8 == v5 )
  {
    pszDest[v5] = 0;
  }
  return v7;
}
