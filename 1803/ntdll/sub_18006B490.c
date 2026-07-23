/*
 * XREFs of sub_18006B490 @ 0x18006B490
 * Callers:
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_18006B490 @ 0x18006B490 (sub_18006B490.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     sub_18006B490 @ 0x18006B490 (sub_18006B490.c)
 *     sub_18006B51C @ 0x18006B51C (sub_18006B51C.c)
 */

__int64 __fastcall sub_18006B490(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  v3 = *a1 - 160LL;
  result = *(_QWORD *)(v3 + 176);
  if ( result && *(_QWORD *)(result + 40) == a2 )
  {
    while ( 1 )
    {
      sub_18006B51C(*(PVOID *)(v3 + 176));
      v6 = *(_QWORD **)(v3 + 160);
      if ( a1 == v6 )
        break;
      v3 = (__int64)(v6 - 20);
    }
    result = *(_QWORD *)(v3 + 152);
    v7 = *(_QWORD **)(result + 40);
    if ( v7 )
    {
      v8 = *(_QWORD **)(result + 40);
      do
      {
        v8 = (_QWORD *)*v8;
        result = sub_18006B490(v8[1], a2);
      }
      while ( v8 != v7 );
    }
  }
  return result;
}
