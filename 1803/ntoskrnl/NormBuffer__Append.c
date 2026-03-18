/*
 * XREFs of NormBuffer__Append @ 0x14028DC34
 * Callers:
 *     NormBuffer__AppendEx @ 0x14028DD00 (NormBuffer__AppendEx.c)
 *     Normalization__Normalize @ 0x140789F5C (Normalization__Normalize.c)
 *     Normalization__NormalizeCharacter @ 0x14078A100 (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

char __fastcall NormBuffer__Append(__int64 a1, int a2)
{
  unsigned __int64 v2; // r8
  _WORD *v3; // r9
  int v5; // kr00_4
  _WORD *v6; // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( a2 < 0x10000 )
  {
    v6 = *(_WORD **)(a1 + 40);
  }
  else
  {
    v3 = *(_WORD **)(a1 + 40);
    if ( (unsigned __int64)v3 >= v2 )
      return 0;
    v5 = a2 - 0x10000;
    a2 = (a2 - 0x10000) >> 31;
    *v3 = __SPAIR64__(a2, v5) / 1024 - 10240;
    v6 = v3 + 1;
    *(_QWORD *)(a1 + 40) = v3 + 1;
    LOWORD(a2) = __SPAIR64__(a2, v5) % 1024 - 9216;
  }
  if ( (unsigned __int64)v6 >= v2 )
    return 0;
  *v6 = a2;
  *(_QWORD *)(a1 + 40) = v6 + 1;
  return 1;
}
