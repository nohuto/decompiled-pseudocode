/*
 * XREFs of sub_1800CFFE8 @ 0x1800CFFE8
 * Callers:
 *     sub_1800D00B4 @ 0x1800D00B4 (sub_1800D00B4.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_1800CFFE8(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r15
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int16 *i; // rsi

  v2 = 0;
  if ( (dword_180156A70 & 5) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6868,
      (unsigned int)"LdrpIsSubstringFound",
      2,
      "Searching for \"%wZ\" in \"%wZ\"\n",
      a2,
      a1);
  if ( *a1 >= *a2 )
  {
    v5 = *((_QWORD *)a2 + 1);
    v6 = (unsigned __int64)(*a1 - *a2) >> 1;
    v7 = (unsigned __int64)*a2 >> 1;
    for ( i = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * v6);
          (unsigned int)RtlCompareUnicodeStrings(i, v7, v5, v7, 1);
          --i )
    {
      if ( !v6 )
        return v2;
      --v6;
    }
    return 1;
  }
  return v2;
}
