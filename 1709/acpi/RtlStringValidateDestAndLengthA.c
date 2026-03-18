/*
 * XREFs of RtlStringValidateDestAndLengthA @ 0x1C0057760
 * Callers:
 *     RtlStringCchCatA @ 0x1C0057654 (RtlStringCchCatA.c)
 *     RtlStringCchCatNA @ 0x1C00576B0 (RtlStringCchCatNA.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringValidateDestAndLengthA(
        NTSTRSAFE_PCSTR pszDest,
        size_t cchDest,
        size_t *pcchDestLength,
        const size_t cchMax)
{
  NTSTATUS v4; // r9d
  size_t i; // rcx

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
    goto LABEL_10;
  for ( i = cchDest; i; --i )
  {
    if ( !*pszDest )
      break;
    ++pszDest;
  }
  v4 = i == 0 ? 0xC000000D : 0;
  if ( pcchDestLength )
  {
    if ( i )
    {
      *pcchDestLength = cchDest - i;
      return v4;
    }
LABEL_10:
    *pcchDestLength = 0LL;
  }
  return v4;
}
