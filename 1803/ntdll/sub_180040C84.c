/*
 * XREFs of sub_180040C84 @ 0x180040C84
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x18003C290 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     sub_1800403FC @ 0x1800403FC (sub_1800403FC.c)
 *     sub_180040D04 @ 0x180040D04 (sub_180040D04.c)
 */

__int64 __fastcall sub_180040C84(_WORD *a1, int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  result = sub_1800403FC((__int64)a1, &v10, &v9, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = a3 >> 1;
    v11 = v7;
    if ( v8 > 0x7FFF )
    {
      result = 3221225485LL;
    }
    else
    {
      result = sub_180040D04(v10, v9, (unsigned int)&v11, a2, v8);
      LOWORD(v7) = v11;
    }
    *a1 = 2 * v7;
  }
  return result;
}
