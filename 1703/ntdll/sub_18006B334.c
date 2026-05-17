/*
 * XREFs of sub_18006B334 @ 0x18006B334
 * Callers:
 *     sub_18006B178 @ 0x18006B178 (sub_18006B178.c)
 *     sub_18006B394 @ 0x18006B394 (sub_18006B394.c)
 *     sub_18006BB70 @ 0x18006BB70 (sub_18006BB70.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18006B334(__int64 a1, int a2)
{
  _WORD *v2; // rax
  _WORD *v4; // r8

  if ( a2 >= 0x10000 )
  {
    v4 = *(_WORD **)(a1 + 40);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 32) )
      return 0;
    *v4 = (a2 - 0x10000) / 1024 - 10240;
    *(_QWORD *)(a1 + 40) = v4 + 1;
    LOWORD(a2) = (a2 - 0x10000) % 1024 - 9216;
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
