/*
 * XREFs of NormBuffer__AppendEx @ 0x140255C2C
 * Callers:
 *     NormBuffer__AppendAndSortDecomposed @ 0x140255BC8 (NormBuffer__AppendAndSortDecomposed.c)
 *     Normalization__NormalizeCharacter @ 0x140726788 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     NormBuffer__Append @ 0x140255B64 (NormBuffer__Append.c)
 */

char __fastcall NormBuffer__AppendEx(__int64 a1, int a2, char a3)
{
  char result; // al
  __int64 v5; // rcx
  int v6; // r10d
  char v7; // r11
  __int64 v8; // rax

  result = NormBuffer__Append(a1, a2);
  if ( result )
  {
    v8 = *(_QWORD *)(v5 + 40) - 2LL;
    *(_DWORD *)(v5 + 56) = v6;
    *(_QWORD *)(v5 + 64) = v8;
    result = 1;
    *(_BYTE *)(v5 + 72) = a3;
    *(_BYTE *)(v5 + 73) = v7;
  }
  return result;
}
