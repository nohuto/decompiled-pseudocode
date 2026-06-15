/*
 * XREFs of StringCopyWorkerW_2 @ 0x1800DFF30
 * Callers:
 *     ?IsAPOClsidRegistered@@YAHU_GUID@@@Z @ 0x1800DFE44 (-IsAPOClsidRegistered@@YAHU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW_2(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  HRESULT v5; // r11d
  size_t v6; // rdx
  signed __int64 v7; // r9
  __int64 v8; // r10
  wchar_t v9; // ax

  v5 = 0;
  v6 = 0LL;
  v7 = (char *)pszSrc - (char *)pszDest;
  v8 = 75LL;
  do
  {
    if ( v8 == -2147483571 )
      break;
    v9 = *(STRSAFE_LPWSTR)((char *)pszDest + v7);
    if ( !v9 )
      break;
    *pszDest = v9;
    ++v6;
    ++pszDest;
    --v8;
  }
  while ( v8 );
  if ( !v8 )
  {
    --pszDest;
    v5 = -2147024774;
    --v6;
  }
  *pszDest = 0;
  if ( pcchNewDestLength )
    *pcchNewDestLength = v6;
  return v5;
}
