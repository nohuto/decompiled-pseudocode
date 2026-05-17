/*
 * XREFs of sub_18001A828 @ 0x18001A828
 * Callers:
 *     sub_18001A828 @ 0x18001A828 (sub_18001A828.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     sub_18001A828 @ 0x18001A828 (sub_18001A828.c)
 *     sub_18001A8B4 @ 0x18001A8B4 (sub_18001A8B4.c)
 */

__int64 __fastcall sub_18001A828(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  v3 = (_QWORD *)(*a1 - 160LL);
  result = v3[22];
  if ( result && *(_QWORD *)(result + 32) == a2 )
  {
    while ( 1 )
    {
      sub_18001A8B4(v3[22]);
      v6 = (_QWORD *)v3[20];
      if ( a1 == v6 )
        break;
      v3 = v6 - 20;
    }
    result = v3[19];
    v7 = *(_QWORD **)(result + 40);
    if ( v7 )
    {
      v8 = *(_QWORD **)(result + 40);
      do
      {
        v8 = (_QWORD *)*v8;
        result = sub_18001A828(v8[1], a2);
      }
      while ( v8 != v7 );
    }
  }
  return result;
}
