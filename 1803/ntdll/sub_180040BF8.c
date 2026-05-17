/*
 * XREFs of sub_180040BF8 @ 0x180040BF8
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x18003C290 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     sub_180040364 @ 0x180040364 (sub_180040364.c)
 *     sub_1800403C4 @ 0x1800403C4 (sub_1800403C4.c)
 *     sub_1800403FC @ 0x1800403FC (sub_1800403FC.c)
 */

__int64 __fastcall sub_180040BF8(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // bx
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h] BYREF
  _WORD *v9; // [rsp+48h] [rbp-8h] BYREF
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v11; // [rsp+78h] [rbp+28h] BYREF

  result = sub_1800403FC((__int64)a1, &v7, &v11, &v6);
  if ( (int)result >= 0 )
  {
    result = sub_1800403C4(a2, &v9, &v8);
    if ( (int)result >= 0 )
    {
      v5 = v6;
      v10 = 0LL;
      result = sub_180040364(v7 + 2 * v6, v11 - v6, &v10, v9, v8);
      *a1 = 2 * (v10 + v5);
    }
  }
  return result;
}
