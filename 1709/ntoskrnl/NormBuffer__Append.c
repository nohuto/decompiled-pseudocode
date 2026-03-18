/*
 * XREFs of NormBuffer__Append @ 0x140255B64
 * Callers:
 *     NormBuffer__AppendEx @ 0x140255C2C (NormBuffer__AppendEx.c)
 *     Normalization__Normalize @ 0x1407265D8 (Normalization__Normalize.c)
 *     Normalization__NormalizeCharacter @ 0x140726788 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

char __fastcall NormBuffer__Append(__int64 a1, int a2)
{
  _WORD *v2; // r8
  int v4; // kr00_4
  _WORD *v5; // rax

  if ( a2 >= 0x10000 )
  {
    v2 = *(_WORD **)(a1 + 40);
    if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 32) )
      return 0;
    v4 = a2 - 0x10000;
    a2 = (a2 - 0x10000) >> 31;
    *v2 = __SPAIR64__(a2, v4) / 1024 - 10240;
    *(_QWORD *)(a1 + 40) = v2 + 1;
    LOWORD(a2) = __SPAIR64__(a2, v4) % 1024 - 9216;
  }
  v5 = *(_WORD **)(a1 + 40);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 32) )
    return 0;
  *v5 = a2;
  *(_QWORD *)(a1 + 40) = v5 + 1;
  return 1;
}
