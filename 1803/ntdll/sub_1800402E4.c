/*
 * XREFs of sub_1800402E4 @ 0x1800402E4
 * Callers:
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 *     sub_1800D9420 @ 0x1800D9420 (sub_1800D9420.c)
 * Callees:
 *     sub_180040364 @ 0x180040364 (sub_180040364.c)
 *     sub_1800403C4 @ 0x1800403C4 (sub_1800403C4.c)
 *     sub_1800403FC @ 0x1800403FC (sub_1800403FC.c)
 */

__int64 __fastcall sub_1800402E4(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // r11
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  result = sub_1800403FC(a1, v8, &v7, 0LL);
  if ( (int)result >= 0 )
  {
    v9 = 0LL;
    result = sub_1800403C4(a2, &v6, &v10);
    if ( (int)result >= 0 )
    {
      result = sub_180040364(v8[0], v7, (unsigned int)&v9, v6, v10);
      v5 = v9;
    }
    *a1 = 2 * v5;
  }
  return result;
}
