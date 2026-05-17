/*
 * XREFs of sub_1800D7750 @ 0x1800D7750
 * Callers:
 *     sub_1800D781C @ 0x1800D781C (sub_1800D781C.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18003B5B0 (RtlCompareUnicodeStrings.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_1800D7750(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r15
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int16 *i; // rsi

  v2 = 0;
  if ( (dword_180155A10 & 5) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6865,
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
