/*
 * XREFs of StringExHandleOtherFlagsW @ 0x1401F8FD0
 * Callers:
 *     RtlStringCchCopyNExW @ 0x14004CE10 (RtlStringCchCopyNExW.c)
 *     RtlStringCbPrintfExW @ 0x14007FF78 (RtlStringCbPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x1400819F0 (RtlStringCbCopyExW.c)
 *     StringCchPrintfExW @ 0x140265AD4 (StringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
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
