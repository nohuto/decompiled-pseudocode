/*
 * XREFs of RtlStringCopyWorkerW @ 0x1C010B850
 * Callers:
 *     _RegisterDManipHook @ 0x1C010B6C4 (_RegisterDManipHook.c)
 *     RtlStringCbCatW @ 0x1C010B7E4 (RtlStringCbCatW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS result; // eax
  __int64 v6; // r8
  signed __int64 v7; // r10
  wchar_t v8; // r9

  result = 0;
  if ( !cchDest )
    goto LABEL_8;
  v6 = 2147483646LL;
  v7 = (char *)pszSrc - (char *)pszDest;
  do
  {
    if ( !v6 )
      break;
    v8 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v7);
    if ( !v8 )
      break;
    *pszDest = v8;
    --v6;
    ++pszDest;
    --cchDest;
  }
  while ( cchDest );
  if ( !cchDest )
  {
LABEL_8:
    --pszDest;
    result = -2147483643;
  }
  *pszDest = 0;
  return result;
}
