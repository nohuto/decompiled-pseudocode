/*
 * XREFs of RtlStringVPrintfWorkerW @ 0x1C0016D80
 * Callers:
 *     RtlStringCbPrintfW @ 0x1C00169A8 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x1C0016C88 (RtlStringCchPrintfExW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringVPrintfWorkerW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszFormat,
        va_list argList)
{
  size_t v5; // rbx
  NTSTATUS v8; // ebp
  int v9; // eax

  v5 = cchDest - 1;
  v8 = 0;
  v9 = _vsnwprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v9 < 0 || v9 > v5 )
  {
    v8 = -2147483643;
  }
  else if ( v9 != v5 )
  {
    v5 = v9;
    goto LABEL_5;
  }
  pszDest[v5] = 0;
LABEL_5:
  if ( pcchNewDestLength )
    *pcchNewDestLength = v5;
  return v8;
}
