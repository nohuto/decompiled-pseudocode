/*
 * XREFs of _PnpMultiSzAppend @ 0x140449A9C
 * Callers:
 *     _CmGetDeviceChildren @ 0x140449874 (_CmGetDeviceChildren.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x1400FB3CC (RtlStringCbCopyExW.c)
 */

char __fastcall PnpMultiSzAppend(NTSTRSAFE_PWSTR pszDest, unsigned int *a2, const wchar_t *a3)
{
  wchar_t v4; // cx
  size_t v7; // rdx
  NTSTRSAFE_PWSTR v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  wchar_t *v11; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // edi

  v4 = *pszDest;
  if ( v4 )
  {
    v7 = *a2;
    v8 = pszDest;
    if ( v7 )
    {
      do
      {
        if ( v4 )
        {
          do
            ++v8;
          while ( *v8 );
        }
        v4 = *++v8;
      }
      while ( *v8 && 2 * (unsigned __int64)(unsigned int)(v8 - pszDest) < v7 );
    }
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( a3[v10] );
    if ( 2 * (v8 - pszDest + v10) + 4 <= v7 && RtlStringCbCopyExW(v8, v7, a3, 0LL, 0LL, 0x900u) >= 0 )
    {
      do
        ++v9;
      while ( a3[v9] );
      v11 = &v8[v9 + 1];
      *v11 = 0;
      *a2 = 2 * (v11 - pszDest) + 2;
      return 1;
    }
  }
  else
  {
    v13 = -1LL;
    v14 = -1LL;
    do
      ++v14;
    while ( a3[v14] );
    v15 = 2 * v14 + 4;
    if ( v15 <= *a2 && RtlStringCbCopyExW(pszDest, *a2, a3, 0LL, 0LL, 0x900u) >= 0 )
    {
      do
        ++v13;
      while ( pszDest[v13] );
      pszDest[v13 + 1] = 0;
      *a2 = v15;
      return 1;
    }
  }
  return 0;
}
