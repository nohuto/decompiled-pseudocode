/*
 * XREFs of RtlStringCchCopyW @ 0x1C003B290
 * Callers:
 *     StorCreateSystemLogEntry @ 0x1C003B36C (StorCreateSystemLogEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  wchar_t v6; // ax

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    v3 = 0;
    if ( !cchDest )
      goto LABEL_10;
    v4 = 2147483646 - cchDest;
    v5 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v4 + cchDest) )
        break;
      v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
      if ( !v6 )
        break;
      *pszDest++ = v6;
      --cchDest;
    }
    while ( cchDest );
    if ( !cchDest )
    {
LABEL_10:
      --pszDest;
      v3 = -2147483643;
    }
    goto LABEL_12;
  }
  if ( cchDest )
LABEL_12:
    *pszDest = 0;
  return v3;
}
