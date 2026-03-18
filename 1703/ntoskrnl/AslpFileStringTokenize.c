/*
 * XREFs of AslpFileStringTokenize @ 0x140262D80
 * Callers:
 *     AslpFileVerQueryBlock @ 0x1407318B0 (AslpFileVerQueryBlock.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall AslpFileStringTokenize(_WORD *a1, __int64 a2, _WORD **a3)
{
  const wchar_t *v4; // r8
  wchar_t v5; // r9
  _WORD *v6; // r8
  _WORD *v7; // rbx
  const wchar_t *v8; // rdx
  wchar_t v9; // r9

  if ( !a3 )
    return 0LL;
  if ( !a1 )
  {
    a1 = *a3;
    if ( !*a3 )
      return 0LL;
  }
  while ( *a1 )
  {
    v4 = L"\\";
    if ( pszSrc[0] )
    {
      v5 = pszSrc[0];
      do
      {
        if ( v5 == *a1 )
          break;
        v5 = *++v4;
      }
      while ( *v4 );
    }
    if ( !*v4 )
      break;
    ++a1;
  }
  v6 = a1;
  v7 = a1;
  while ( *a1 )
  {
    v8 = L"\\";
    if ( pszSrc[0] )
    {
      v9 = pszSrc[0];
      do
      {
        if ( v9 == *a1 )
          break;
        v9 = *++v8;
      }
      while ( *v8 );
    }
    if ( *v8 )
    {
      *a1++ = 0;
      break;
    }
    ++a1;
  }
  *a3 = a1;
  if ( a1 == v7 )
    return 0LL;
  return v6;
}
