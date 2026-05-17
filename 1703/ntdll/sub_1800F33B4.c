/*
 * XREFs of sub_1800F33B4 @ 0x1800F33B4
 * Callers:
 *     sub_1800F38C8 @ 0x1800F38C8 (sub_1800F38C8.c)
 *     sub_1800F3AF8 @ 0x1800F3AF8 (sub_1800F3AF8.c)
 * Callees:
 *     sub_1800F3370 @ 0x1800F3370 (sub_1800F3370.c)
 */

__int64 __fastcall sub_1800F33B4(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r10
  unsigned __int64 *v4; // r8
  int v5; // r11d
  __int64 i; // rdx

  v1 = qword_18015C748;
LABEL_2:
  v2 = sub_1800F3370((_QWORD *)qword_180159A30, a1);
  if ( v2 && *(_QWORD *)(v2 + 8) != v1 )
  {
    v4 = (unsigned __int64 *)(v2 + 40);
    v5 = 0;
    for ( i = 0LL; i < *(int *)(v2 + 16); ++i )
    {
      if ( *v4 <= v3 && v4[1] + *v4 > v3 )
      {
        a1 = *(_QWORD *)(v2 + 40 * i + 40);
        if ( a1 != v3 )
          goto LABEL_2;
        return v2 + 8 * (5LL * v5 + 3);
      }
      ++v5;
      v4 += 5;
    }
  }
  return 0LL;
}
