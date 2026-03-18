/*
 * XREFs of RtlStringCchCatW @ 0x14006DAE4
 * Callers:
 *     ExpGetGlobalLocaleSection @ 0x14049A020 (ExpGetGlobalLocaleSection.c)
 *     SdbpCreateSearchDBContext @ 0x1404B5D20 (SdbpCreateSearchDBContext.c)
 *     AslpEnvResolveVars @ 0x1405BBB80 (AslpEnvResolveVars.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14072B80C (SdbpCheckMatchingRegistryEntry.c)
 *     AslPathToSystemPath_Ustr @ 0x14072F104 (AslPathToSystemPath_Ustr.c)
 *     AslpFileQueryVersionString @ 0x140731670 (AslpFileQueryVersionString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v4; // r9d
  size_t v7; // rcx
  NTSTRSAFE_PWSTR i; // rax
  size_t v9; // r8
  wchar_t *v10; // rcx
  size_t v11; // rdx
  __int64 v12; // r10
  char *v13; // rbx
  wchar_t v14; // ax

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
    goto LABEL_18;
  v7 = cchDest;
  for ( i = pszDest; v7; --v7 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v4 = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
    v9 = cchDest - v7;
  else
LABEL_18:
    v9 = 0LL;
  if ( v4 >= 0 )
  {
    v10 = &pszDest[v9];
    v4 = 0;
    v11 = cchDest - v9;
    if ( cchDest == v9 )
      goto LABEL_19;
    v12 = 2147483646LL;
    v13 = (char *)((char *)pszSrc - (char *)v10);
    do
    {
      if ( !v12 )
        break;
      v14 = *(wchar_t *)((char *)v10 + (_QWORD)v13);
      if ( !v14 )
        break;
      *v10 = v14;
      --v12;
      ++v10;
      --v11;
    }
    while ( v11 );
    if ( !v11 )
    {
LABEL_19:
      --v10;
      v4 = -2147483643;
    }
    *v10 = 0;
  }
  return v4;
}
