/*
 * XREFs of RtlStringCopyWorkerA @ 0x1C0037F80
 * Callers:
 *     RtlStringCchCatNA @ 0x1C0037F1C (RtlStringCchCatNA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerA(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS v5; // r8d
  signed __int64 v7; // r10
  char v8; // r9

  v5 = 0;
  if ( !cchDest )
    goto LABEL_7;
  v7 = pszSrc - pszDest;
  do
  {
    if ( !cchToCopy )
      break;
    v8 = pszDest[v7];
    if ( !v8 )
      break;
    *pszDest = v8;
    --cchToCopy;
    ++pszDest;
    --cchDest;
  }
  while ( cchDest );
  if ( !cchDest )
  {
LABEL_7:
    --pszDest;
    v5 = -2147483643;
  }
  *pszDest = 0;
  return v5;
}
