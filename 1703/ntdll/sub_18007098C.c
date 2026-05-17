/*
 * XREFs of sub_18007098C @ 0x18007098C
 * Callers:
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     sub_1800DFBA0 @ 0x1800DFBA0 (sub_1800DFBA0.c)
 * Callees:
 *     sub_180070A0C @ 0x180070A0C (sub_180070A0C.c)
 *     sub_180070A6C @ 0x180070A6C (sub_180070A6C.c)
 *     sub_180070AA4 @ 0x180070AA4 (sub_180070AA4.c)
 */

__int64 __fastcall sub_18007098C(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // r11
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  result = sub_180070AA4(a1, v8, &v7, 0LL);
  if ( (int)result >= 0 )
  {
    v9 = 0LL;
    result = sub_180070A6C(a2, &v6, &v10);
    if ( (int)result >= 0 )
    {
      result = sub_180070A0C(v8[0], v7, (unsigned int)&v9, v6, v10);
      v5 = v9;
    }
    *a1 = 2 * v5;
  }
  return result;
}
