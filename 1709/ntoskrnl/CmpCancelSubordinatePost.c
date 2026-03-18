/*
 * XREFs of CmpCancelSubordinatePost @ 0x140580414
 * Callers:
 *     CmpPostNotify @ 0x14047BFBC (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1404D66B0 (CmNotifyRunDown.c)
 * Callees:
 *     CmpAddToDelayedDeref @ 0x140580460 (CmpAddToDelayedDeref.c)
 */

_QWORD *__fastcall CmpCancelSubordinatePost(__int64 a1, __int64 a2)
{
  _QWORD **v2; // rcx
  _QWORD *result; // rax
  _QWORD *v4; // rcx
  __int64 v5; // r8

  v2 = (_QWORD **)(a1 + 32);
  result = *v2;
  if ( *v2 != v2 )
  {
    v4 = result - 4;
    v5 = *(result - 4);
    if ( *(_QWORD **)(v5 + 8) != result - 4 || (result = (_QWORD *)v4[1], (_QWORD *)*result != v4) )
      __fastfail(3u);
    *result = v5;
    *(_QWORD *)(v5 + 8) = result;
    if ( a2 )
      return (_QWORD *)CmpAddToDelayedDeref(v4, a2);
  }
  return result;
}
