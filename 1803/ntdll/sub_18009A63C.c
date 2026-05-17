/*
 * XREFs of sub_18009A63C @ 0x18009A63C
 * Callers:
 *     sub_180023AAC @ 0x180023AAC (sub_180023AAC.c)
 *     sub_180060414 @ 0x180060414 (sub_180060414.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18009A63C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  v2 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (result = (_QWORD *)a2[1], (_QWORD *)*result != a2) )
    __fastfail(3u);
  *result = v2;
  *(_QWORD *)(v2 + 8) = result;
  --*(_QWORD *)(a1 + 48);
  return result;
}
