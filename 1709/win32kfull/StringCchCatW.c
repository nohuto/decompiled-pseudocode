/*
 * XREFs of StringCchCatW @ 0x1C0258814
 * Callers:
 *     GetNlsTablePath @ 0x1C0258654 (GetNlsTablePath.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchCatW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  __int64 v4; // r9
  STRSAFE_LPWSTR v5; // rax
  HRESULT result; // eax
  __int64 v7; // r8
  wchar_t *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  char *v11; // r10
  wchar_t v12; // r8

  v4 = 260LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
    v7 = 260 - v4;
  else
    v7 = 0LL;
  if ( v4 )
  {
    v8 = &pszDest[v7];
    result = 0;
    v9 = 260 - v7;
    if ( 260 == v7 )
      goto LABEL_14;
    v10 = 2147483646LL;
    v11 = (char *)((char *)pszSrc - (char *)v8);
    do
    {
      if ( !v10 )
        break;
      v12 = *(wchar_t *)((char *)v8 + (_QWORD)v11);
      if ( !v12 )
        break;
      *v8 = v12;
      --v10;
      ++v8;
      --v9;
    }
    while ( v9 );
    if ( !v9 )
    {
LABEL_14:
      --v8;
      result = -2147024774;
    }
    *v8 = 0;
  }
  return result;
}
