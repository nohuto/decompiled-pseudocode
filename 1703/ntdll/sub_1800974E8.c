/*
 * XREFs of sub_1800974E8 @ 0x1800974E8
 * Callers:
 *     _vsnprintf @ 0x1800974D0 (_vsnprintf.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_18009C404 @ 0x18009C404 (sub_18009C404.c)
 *     sub_18009C40C @ 0x18009C40C (sub_18009C40C.c)
 */

__int64 __fastcall sub_1800974E8(_BYTE *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  _BYTE *v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  _BYTE *v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]

  if ( a3 && (!a2 || a1) )
  {
    v11 = 66;
    v10 = a1;
    if ( a2 > 0x7FFFFFFF )
      LODWORD(a2) = 0x7FFFFFFF;
    v8 = a1;
    v9 = a2;
    result = sub_18009C40C(&v8, a3, a4, a5);
    v7 = result;
    if ( a1 )
    {
      if ( --v9 < 0 )
        sub_18009C404(0LL, &v8);
      else
        *v8 = 0;
      return v7;
    }
  }
  else
  {
    sub_180095DE0();
    return 0xFFFFFFFFLL;
  }
  return result;
}
