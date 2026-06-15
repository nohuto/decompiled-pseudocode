/*
 * XREFs of StringCopyWorkerW_0 @ 0x180041460
 * Callers:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800413AC (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW_0(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  HRESULT v5; // ebx
  size_t v6; // r11
  signed __int64 v8; // r9
  wchar_t v9; // ax
  HRESULT result; // eax

  v5 = 0;
  v6 = 0LL;
  if ( cchDest )
  {
    v8 = (char *)pszSrc - (char *)pszDest;
    while ( cchToCopy )
    {
      v9 = *(STRSAFE_LPWSTR)((char *)pszDest + v8);
      if ( !v9 )
        break;
      *pszDest = v9;
      --cchToCopy;
      ++pszDest;
      ++v6;
      if ( !--cchDest )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    --pszDest;
    v5 = -2147024774;
    --v6;
  }
  *pszDest = 0;
  result = v5;
  if ( pcchNewDestLength )
    *pcchNewDestLength = v6;
  return result;
}
