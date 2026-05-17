/*
 * XREFs of sub_180070900 @ 0x180070900
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x18003CF70 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     sub_180070A0C @ 0x180070A0C (sub_180070A0C.c)
 *     sub_180070A6C @ 0x180070A6C (sub_180070A6C.c)
 *     sub_180070AA4 @ 0x180070AA4 (sub_180070AA4.c)
 */

__int64 __fastcall sub_180070900(_WORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v5; // bx
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h] BYREF
  __int64 v9; // [rsp+48h] [rbp-8h] BYREF
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF

  result = sub_180070AA4(a1, &v7, &v11, &v6);
  if ( (int)result >= 0 )
  {
    result = sub_180070A6C(a2, &v9, &v8);
    if ( (int)result >= 0 )
    {
      v5 = v6;
      v10 = 0LL;
      result = sub_180070A0C((int)v7 + 2 * (int)v6, (int)v11 - (int)v6, (unsigned int)&v10, v9, v8);
      *a1 = 2 * (v10 + v5);
    }
  }
  return result;
}
