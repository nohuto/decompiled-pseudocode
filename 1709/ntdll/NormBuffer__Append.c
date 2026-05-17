/*
 * XREFs of NormBuffer__Append @ 0x1800808F8
 * Callers:
 *     NormBuffer__AppendEx @ 0x180080768 (NormBuffer__AppendEx.c)
 *     Normalization__Normalize @ 0x1800807A4 (Normalization__Normalize.c)
 *     Normalization__NormalizeCharacter @ 0x180080920 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

char __fastcall NormBuffer__Append(__int64 a1, int a2)
{
  _WORD *v2; // rax
  _WORD *v4; // r8
  int v5; // kr00_4

  if ( a2 >= 0x10000 )
  {
    v4 = *(_WORD **)(a1 + 40);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 32) )
      return 0;
    v5 = a2 - 0x10000;
    a2 = (a2 - 0x10000) >> 31;
    *v4 = __SPAIR64__(a2, v5) / 1024 - 10240;
    *(_QWORD *)(a1 + 40) = v4 + 1;
    LOWORD(a2) = __SPAIR64__(a2, v5) % 1024 - 9216;
  }
  v2 = *(_WORD **)(a1 + 40);
  if ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 32) )
  {
    *v2 = a2;
    *(_QWORD *)(a1 + 40) = v2 + 1;
    return 1;
  }
  return 0;
}
