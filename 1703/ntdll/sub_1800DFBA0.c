/*
 * XREFs of sub_1800DFBA0 @ 0x1800DFBA0
 * Callers:
 *     sub_1800DFC34 @ 0x1800DFC34 (sub_1800DFC34.c)
 * Callees:
 *     sub_18007098C @ 0x18007098C (sub_18007098C.c)
 *     sub_1800DF9F0 @ 0x1800DF9F0 (sub_1800DF9F0.c)
 *     sub_1800DFB5C @ 0x1800DFB5C (sub_1800DFB5C.c)
 */

__int64 __fastcall sub_1800DFBA0(__int64 a1, __int64 a2)
{
  _WORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v7; // rax

  if ( *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * (unsigned __int16)((*(_WORD *)a2 >> 1) - 1)) == 92
    || (int)sub_1800DF9F0((unsigned __int16 *)a2, a2) >= 0 )
  {
    v4 = sub_1800DFB5C(*(_WORD *)a2 + 2);
    v5 = v4;
    if ( !v4 )
      return 3221225495LL;
    sub_18007098C(v4 + 8, a2);
    v7 = *(_QWORD **)(a1 + 8);
    if ( *v7 != a1 )
      __fastfail(3u);
    *v5 = a1;
    v5[1] = v7;
    *v7 = v5;
    *(_QWORD *)(a1 + 8) = v5;
  }
  return 0LL;
}
