/*
 * XREFs of StringExHandleOtherFlagsW @ 0x14023BAB0
 * Callers:
 *     RtlStringCchCopyExW @ 0x14006D844 (RtlStringCchCopyExW.c)
 *     RtlStringCchCopyNExW @ 0x14006DA04 (RtlStringCchCopyNExW.c)
 *     RtlStringCchPrintfExW @ 0x14006DED4 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x14006E6CC (RtlStringCbPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x14014AF24 (RtlStringCbCopyExW.c)
 *     StringCchPrintfExW @ 0x1402C5A88 (StringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

HRESULT __stdcall StringExHandleOtherFlagsW(
        STRSAFE_LPWSTR pszDest,
        size_t cbDest,
        size_t cchOriginalDestLength,
        STRSAFE_LPWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        DWORD dwFlags)
{
  size_t v7; // rdi
  wchar_t *v9; // rax

  v7 = cbDest >> 1;
  if ( cbDest >> 1 && (dwFlags & 0x1000) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = v7;
    *pszDest = 0;
  }
  if ( (dwFlags & 0x400) != 0 )
  {
    memset(pszDest, (unsigned __int8)dwFlags, cbDest);
    if ( (_BYTE)dwFlags )
    {
      if ( !v7 )
        return 0;
      *pcchRemaining = 1LL;
      v9 = &pszDest[v7 - 1];
      *ppszDestEnd = v9;
      *v9 = 0;
    }
    else
    {
      *ppszDestEnd = pszDest;
      *pcchRemaining = v7;
    }
  }
  if ( v7 && (dwFlags & 0x800) != 0 )
  {
    *ppszDestEnd = pszDest;
    *pcchRemaining = v7;
    *pszDest = 0;
  }
  return 0;
}
