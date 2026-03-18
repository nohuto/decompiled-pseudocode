/*
 * XREFs of RtlStringCchCatNW @ 0x14016283C
 * Callers:
 *     SepRmFetchGlobalSacl @ 0x1405C5920 (SepRmFetchGlobalSacl.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToAppend)
{
  NTSTATUS v5; // r10d
  size_t v8; // rcx
  NTSTRSAFE_PWSTR i; // rax
  size_t v10; // r8
  wchar_t *v11; // rax
  size_t v12; // rcx
  size_t v13; // rdx
  char *v14; // rbx
  wchar_t v15; // r8

  v5 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
    goto LABEL_21;
  v8 = cchDest;
  for ( i = pszDest; v8; --v8 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v5 = v8 == 0 ? 0xC000000D : 0;
  if ( v8 )
    v10 = cchDest - v8;
  else
LABEL_21:
    v10 = 0LL;
  if ( v5 >= 0 )
  {
    if ( cchToAppend > 0x7FFFFFFE )
    {
      return -1073741811;
    }
    else
    {
      v11 = &pszDest[v10];
      v5 = 0;
      v12 = cchDest - v10;
      if ( cchDest == v10 )
        goto LABEL_20;
      v13 = cchToAppend;
      v14 = (char *)((char *)pszSrc - (char *)v11);
      do
      {
        if ( !v13 )
          break;
        v15 = *(wchar_t *)((char *)v11 + (_QWORD)v14);
        if ( !v15 )
          break;
        *v11 = v15;
        --v13;
        ++v11;
        --v12;
      }
      while ( v12 );
      if ( !v12 )
      {
LABEL_20:
        --v11;
        v5 = -2147483643;
      }
      *v11 = 0;
    }
  }
  return v5;
}
