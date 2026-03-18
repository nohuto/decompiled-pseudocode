/*
 * XREFs of RtlStringCchCatA @ 0x1C0003734
 * Callers:
 *     GetObjectPathNoLock @ 0x1C00037FC (GetObjectPathNoLock.c)
 *     CatError @ 0x1C0048590 (CatError.c)
 *     Debugger @ 0x1C0049678 (Debugger.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C0082328 (OSOpenAMLINamespaceOverrideHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v7; // rcx
  NTSTRSAFE_PSTR i; // rax
  size_t v9; // r8
  char *v10; // rdx
  size_t v11; // rcx
  __int64 v12; // r9
  const char *v13; // r11
  char v14; // al
  char *v15; // rax

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
    goto LABEL_19;
  v7 = cchDest;
  for ( i = pszDest; v7; --v7 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v3 = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
    v9 = cchDest - v7;
  else
LABEL_19:
    v9 = 0LL;
  if ( v3 >= 0 )
  {
    v10 = &pszDest[v9];
    v11 = cchDest - v9;
    if ( cchDest != v9 )
    {
      v12 = 2147483646LL;
      v13 = (const char *)(pszSrc - v10);
      do
      {
        if ( !v12 )
          break;
        v14 = v10[(_QWORD)v13];
        if ( !v14 )
          break;
        *v10 = v14;
        --v12;
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    v15 = v10 - 1;
    if ( v11 )
      v15 = v10;
    v3 = v11 == 0 ? 0x80000005 : 0;
    *v15 = 0;
  }
  return v3;
}
