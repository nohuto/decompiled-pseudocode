/*
 * XREFs of StringCopyWorkerW_0 @ 0x1801A8894
 * Callers:
 *     ?LoadLibraryShellCompositor@CHolographicClient@@AEAAPEAUHINSTANCE__@@XZ @ 0x1801A7C6C (-LoadLibraryShellCompositor@CHolographicClient@@AEAAPEAUHINSTANCE__@@XZ.c)
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
  HRESULT v5; // r11d
  size_t v6; // r10
  __int64 v7; // rax
  signed __int64 v8; // rbx
  wchar_t v9; // r9

  v5 = 0;
  v6 = 0LL;
  if ( !cchDest )
    goto LABEL_7;
  v7 = 2147483646LL;
  v8 = (char *)pszSrc - (char *)pszDest;
  do
  {
    if ( !v7 )
      break;
    v9 = *(STRSAFE_LPWSTR)((char *)pszDest + v8);
    if ( !v9 )
      break;
    *pszDest = v9;
    --v7;
    ++pszDest;
    ++v6;
    --cchDest;
  }
  while ( cchDest );
  if ( !cchDest )
  {
LABEL_7:
    --pszDest;
    v5 = -2147024774;
    --v6;
  }
  *pszDest = 0;
  if ( pcchNewDestLength )
    *pcchNewDestLength = v6;
  return v5;
}
