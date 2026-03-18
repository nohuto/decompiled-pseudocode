/*
 * XREFs of RtlWideCharArrayCopyStringWorker_0 @ 0x1401F8150
 * Callers:
 *     RtlUnicodeStringCopyString @ 0x1401F80B8 (RtlUnicodeStringCopyString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlWideCharArrayCopyStringWorker_0(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  NTSTATUS result; // eax
  const size_t *v6; // r9
  __int64 v7; // r10
  size_t v8; // r11

  result = 0;
  v6 = &cchOriginalDestLength;
  v7 = 0x7FFFLL;
  v8 = 0LL;
  if ( cchDest )
  {
    do
    {
      if ( !v7 )
        break;
      if ( !*(_WORD *)v6 )
        break;
      *(_WORD *)((char *)v6 + (char *)pszDest - (char *)&cchOriginalDestLength) = *(_WORD *)v6;
      --v7;
      v6 = (const size_t *)((char *)v6 + 2);
      ++v8;
      --cchDest;
    }
    while ( cchDest );
    if ( !cchDest && v7 && *(_WORD *)v6 )
      result = -2147483643;
  }
  *pcchNewDestLength = v8;
  return result;
}
