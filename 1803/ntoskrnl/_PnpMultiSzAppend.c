/*
 * XREFs of _PnpMultiSzAppend @ 0x1407F076C
 * Callers:
 *     _CmGetDeviceChildren @ 0x1407EE1B0 (_CmGetDeviceChildren.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x14014AF24 (RtlStringCbCopyExW.c)
 */

char __fastcall PnpMultiSzAppend(NTSTRSAFE_PWSTR pszDest, unsigned int *a2, const wchar_t *a3)
{
  wchar_t v3; // r9
  unsigned __int64 v4; // r10
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // edi
  NTSTRSAFE_PWSTR v12; // rdi
  __int64 v13; // rbx
  size_t v14; // rdx
  __int64 v15; // rcx
  wchar_t *v16; // rax

  v3 = *pszDest;
  v4 = *a2;
  if ( *pszDest )
  {
    v12 = pszDest;
    if ( (_DWORD)v4 )
    {
      do
      {
        if ( v3 )
        {
          do
            ++v12;
          while ( *v12 );
        }
        v3 = *++v12;
      }
      while ( *v12 && 2 * (unsigned __int64)(unsigned int)(v12 - pszDest) < v4 );
    }
    v13 = -1LL;
    v14 = *a2;
    v15 = -1LL;
    do
      ++v15;
    while ( a3[v15] );
    if ( 2 * (v12 - pszDest + v15) + 4 <= v4 && RtlStringCbCopyExW(v12, v14, a3, 0LL, 0LL, 0x900u) >= 0 )
    {
      do
        ++v13;
      while ( a3[v13] );
      v16 = &v12[v13 + 1];
      *v16 = 0;
      *a2 = 2 * (v16 - pszDest) + 2;
      return 1;
    }
    return 0;
  }
  v8 = -1LL;
  v9 = -1LL;
  do
    ++v9;
  while ( a3[v9] );
  v10 = 2 * v9 + 4;
  if ( v10 > (unsigned int)v4 || RtlStringCbCopyExW(pszDest, *a2, a3, 0LL, 0LL, 0x900u) < 0 )
    return 0;
  do
    ++v8;
  while ( pszDest[v8] );
  pszDest[v8 + 1] = 0;
  *a2 = v10;
  return 1;
}
