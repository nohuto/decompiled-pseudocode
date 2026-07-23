/*
 * XREFs of sub_1800D9420 @ 0x1800D9420
 * Callers:
 *     sub_1800D94B4 @ 0x1800D94B4 (sub_1800D94B4.c)
 * Callees:
 *     sub_1800402E4 @ 0x1800402E4 (sub_1800402E4.c)
 *     sub_1800D9270 @ 0x1800D9270 (sub_1800D9270.c)
 *     sub_1800D93DC @ 0x1800D93DC (sub_1800D93DC.c)
 */

__int64 __fastcall sub_1800D9420(__int64 a1, __int64 a2)
{
  _WORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v7; // rax

  if ( *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL * (unsigned __int16)((*(_WORD *)a2 >> 1) - 1)) == 92
    || (int)sub_1800D9270((unsigned __int16 *)a2, a2) >= 0 )
  {
    v4 = sub_1800D93DC(*(_WORD *)a2 + 2);
    v5 = v4;
    if ( !v4 )
      return 3221225495LL;
    sub_1800402E4(v4 + 8, a2);
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
