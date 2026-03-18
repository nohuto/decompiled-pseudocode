/*
 * XREFs of RtlStringCopyWorkerW @ 0x1C003A418
 * Callers:
 *     RtlStringCchCopyNExW @ 0x1C003A388 (RtlStringCchCopyNExW.c)
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
  NTSTATUS v6; // r11d
  size_t v7; // rdx
  signed __int64 v8; // rbx
  __int64 v9; // rax
  wchar_t v10; // r9

  v6 = 0;
  v7 = 0LL;
  v8 = (char *)pszSrc - (char *)pszDest;
  v9 = 260LL;
  do
  {
    if ( !cchToCopy )
      break;
    v10 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v8);
    if ( !v10 )
      break;
    *pszDest = v10;
    --cchToCopy;
    ++pszDest;
    ++v7;
    --v9;
  }
  while ( v9 );
  if ( !v9 )
  {
    --pszDest;
    v6 = -2147483643;
    --v7;
  }
  *pszDest = 0;
  if ( pcchNewDestLength )
    *pcchNewDestLength = v7;
  return v6;
}
