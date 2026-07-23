/*
 * XREFs of LdrpIsSubstringFound @ 0x1800D60D4
 * Callers:
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D61A0 (LdrpIsVerifierActivationFilterMatched.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180049F70 (RtlCompareUnicodeStrings.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpIsSubstringFound(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  const WCHAR *v5; // r15
  unsigned __int64 v6; // rdi
  SIZE_T v7; // rbp
  const WCHAR *i; // rsi

  v2 = 0;
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6843,
      "LdrpIsSubstringFound",
      2,
      "Searching for \"%wZ\" in \"%wZ\"\n",
      a2,
      a1);
  if ( *a1 >= *a2 )
  {
    v5 = (const WCHAR *)*((_QWORD *)a2 + 1);
    v6 = (unsigned __int64)(*a1 - *a2) >> 1;
    v7 = (unsigned __int64)*a2 >> 1;
    for ( i = (const WCHAR *)(*((_QWORD *)a1 + 1) + 2 * v6); RtlCompareUnicodeStrings(i, v7, v5, v7, 1u); --i )
    {
      if ( !v6 )
        return v2;
      --v6;
    }
    return 1;
  }
  return v2;
}
