/*
 * XREFs of sub_1800975B8 @ 0x1800975B8
 * Callers:
 *     _vsnwprintf @ 0x1800975A0 (_vsnwprintf.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_18009C404 @ 0x18009C404 (sub_18009C404.c)
 *     sub_18009CD80 @ 0x18009CD80 (sub_18009CD80.c)
 */

__int64 __fastcall sub_1800975B8(_BYTE *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  unsigned int v7; // edi
  _BYTE *v8; // rax
  _BYTE *v9; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+38h] [rbp-28h]
  _BYTE *v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]

  if ( a3 && (!a2 || a1) )
  {
    v12 = 66;
    v11 = a1;
    v9 = a1;
    if ( a2 <= 0x3FFFFFFF )
      v10 = 2 * a2;
    else
      v10 = 0x7FFFFFFF;
    result = sub_18009CD80(&v9, a3, a4, a5);
    v7 = result;
    if ( a1 )
    {
      if ( --v10 < 0 )
      {
        sub_18009C404(0LL, &v9);
        v8 = v9;
      }
      else
      {
        *v9 = 0;
        v8 = ++v9;
      }
      if ( --v10 < 0 )
        sub_18009C404(0LL, &v9);
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
