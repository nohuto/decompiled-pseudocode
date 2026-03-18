/*
 * XREFs of RtlStringCchCopyA @ 0x1C011BA9C
 * Callers:
 *     intializeGlobalRecorder @ 0x1C011B9F4 (intializeGlobalRecorder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d
  __int64 v4; // rdx
  signed __int64 v5; // r8
  char v6; // al

  v3 = 0;
  v4 = 16LL;
  v5 = pszSrc - pszDest;
  do
  {
    if ( v4 == -2147483630 )
      break;
    v6 = pszDest[v5];
    if ( !v6 )
      break;
    *pszDest++ = v6;
    --v4;
  }
  while ( v4 );
  if ( !v4 )
  {
    --pszDest;
    v3 = -2147483643;
  }
  *pszDest = 0;
  return v3;
}
