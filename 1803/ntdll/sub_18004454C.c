/*
 * XREFs of sub_18004454C @ 0x18004454C
 * Callers:
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 * Callees:
 *     sub_1800403FC @ 0x1800403FC (sub_1800403FC.c)
 *     sub_180040D04 @ 0x180040D04 (sub_180040D04.c)
 */

__int64 __fastcall sub_18004454C(_WORD *a1, _WORD *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int16 v8; // bx
  unsigned __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  result = sub_1800403FC((__int64)a1, v11, &v9, &v10);
  if ( (int)result >= 0 )
  {
    v7 = a3 >> 1;
    if ( v7 > 0x7FFF )
    {
      return 3221225485LL;
    }
    else
    {
      v8 = v10;
      v12 = 0LL;
      result = sub_180040D04(v11[0] + 2 * v10, v9 - v10, &v12, a2, v7);
      *a1 = 2 * (v12 + v8);
    }
  }
  return result;
}
