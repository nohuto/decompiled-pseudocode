/*
 * XREFs of NormBuffer__AppendEx @ 0x180080768
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x180080920 (Normalization__NormalizeCharacter.c)
 *     NormBuffer__AppendAndSortDecomposed @ 0x1800F8C64 (NormBuffer__AppendAndSortDecomposed.c)
 * Callees:
 *     NormBuffer__Append @ 0x1800808F8 (NormBuffer__Append.c)
 */

char __fastcall NormBuffer__AppendEx(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  int v5; // r10d
  char v6; // r11
  __int64 v7; // rax
  char result; // al

  if ( !(unsigned __int8)NormBuffer__Append() )
    return 0;
  v7 = *(_QWORD *)(v4 + 40) - 2LL;
  *(_DWORD *)(v4 + 56) = v5;
  *(_QWORD *)(v4 + 64) = v7;
  result = 1;
  *(_BYTE *)(v4 + 72) = a3;
  *(_BYTE *)(v4 + 73) = v6;
  return result;
}
