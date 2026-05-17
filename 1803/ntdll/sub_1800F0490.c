/*
 * XREFs of sub_1800F0490 @ 0x1800F0490
 * Callers:
 *     sub_1800F09BC @ 0x1800F09BC (sub_1800F09BC.c)
 *     sub_1800F0C00 @ 0x1800F0C00 (sub_1800F0C00.c)
 * Callees:
 *     sub_1800F044C @ 0x1800F044C (sub_1800F044C.c)
 */

__int64 __fastcall sub_1800F0490(unsigned __int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // r10
  _QWORD *v5; // r8
  int v6; // r11d
  __int64 i; // rbx
  unsigned __int64 v8; // rdx

  v1 = qword_18015D778;
LABEL_2:
  v3 = sub_1800F044C((_QWORD *)qword_18015AA78, a1);
  if ( v3 && *(_QWORD *)(v3 + 8) != v1 )
  {
    v5 = (_QWORD *)(v3 + 48);
    v6 = 0;
    for ( i = 0LL; i < *(int *)(v3 + 16); ++i )
    {
      v8 = *(v5 - 1);
      if ( v8 <= v4 && v8 + *v5 > v4 )
      {
        if ( v8 != v4 )
        {
          a1 = *(v5 - 1);
          goto LABEL_2;
        }
        return v3 + 8 * (5LL * v6 + 3);
      }
      ++v6;
      v5 += 5;
    }
  }
  return 0LL;
}
