/*
 * XREFs of RtlStringCchCopyA @ 0x1C000EEC4
 * Callers:
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0018D90 (ParseSuperName.c)
 *     ParseName @ 0x1C001B778 (ParseName.c)
 *     Debugger @ 0x1C005EAFC (Debugger.c)
 *     ACPIDispatchAddDevice @ 0x1C00AFDB0 (ACPIDispatchAddDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  char v6; // al

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( !cchDest )
      return v3;
  }
  else
  {
    v3 = 0;
    if ( !cchDest )
      goto LABEL_12;
    v4 = 2147483646 - cchDest;
    v5 = pszSrc - pszDest;
    do
    {
      if ( !(v4 + cchDest) )
        break;
      v6 = pszDest[v5];
      if ( !v6 )
        break;
      *pszDest++ = v6;
      --cchDest;
    }
    while ( cchDest );
    if ( !cchDest )
    {
LABEL_12:
      --pszDest;
      v3 = -2147483643;
    }
  }
  *pszDest = 0;
  return v3;
}
