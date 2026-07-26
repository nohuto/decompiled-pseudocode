/*
 * XREFs of RtlWideCharArrayCopyWorker @ 0x1C001190C
 * Callers:
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0011870 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C006B784 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlWideCharArrayCopyWorker(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        const wchar_t *pszSrc,
        size_t cchSrcLength)
{
  NTSTATUS v5; // r10d
  const wchar_t *v6; // r11
  size_t v7; // rbx
  signed __int64 v8; // rcx
  size_t v9; // r9

  v5 = 0;
  v6 = pszSrc;
  v7 = 0LL;
  if ( !cchDest )
  {
    v9 = cchSrcLength;
LABEL_8:
    if ( v9 )
      v5 = -2147483643;
    goto LABEL_6;
  }
  v8 = (char *)pszDest - (char *)pszSrc;
  v9 = cchSrcLength;
  do
  {
    if ( !v9 )
      break;
    --v9;
    *(const wchar_t *)((char *)v6 + v8) = *v6;
    ++v7;
    ++v6;
    --cchDest;
  }
  while ( cchDest );
  if ( !cchDest )
    goto LABEL_8;
LABEL_6:
  *pcchNewDestLength = v7;
  return v5;
}
