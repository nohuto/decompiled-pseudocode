/*
 * XREFs of sub_180070790 @ 0x180070790
 * Callers:
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 * Callees:
 *     sub_1800708A4 @ 0x1800708A4 (sub_1800708A4.c)
 *     sub_180070AA4 @ 0x180070AA4 (sub_180070AA4.c)
 */

__int64 __fastcall sub_180070790(_WORD *a1, int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int16 v8; // bx
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  result = sub_180070AA4(a1, v11, &v9, &v10);
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
      result = sub_1800708A4(LODWORD(v11[0]) + 2 * (int)v10, (int)v9 - (int)v10, (unsigned int)&v12, a2, v7);
      *a1 = 2 * (v12 + v8);
    }
  }
  return result;
}
