/*
 * XREFs of sub_1800FB5BC @ 0x1800FB5BC
 * Callers:
 *     sub_1800ED164 @ 0x1800ED164 (sub_1800ED164.c)
 *     sub_1800FB1B0 @ 0x1800FB1B0 (sub_1800FB1B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FB5BC(__int64 a1, __int16 a2, _WORD *a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9

  if ( !a1 || !a3 || !a4 )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6
    && (v7 = *(_QWORD *)(v6 + 16)) != 0
    && (v8 = *(_QWORD *)(v6 + 24)) != 0
    && a2 >= 0
    && a2 < (int)*(unsigned __int16 *)(v6 + 6) )
  {
    return sub_1800563A0(a3, a4, v8 + 2LL * *(__int16 *)(v7 + 2LL * a2));
  }
  else
  {
    return 3221226021LL;
  }
}
