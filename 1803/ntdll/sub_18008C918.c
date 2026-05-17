/*
 * XREFs of sub_18008C918 @ 0x18008C918
 * Callers:
 *     _vsnprintf @ 0x18008C900 (_vsnprintf.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180091650 @ 0x180091650 (sub_180091650.c)
 *     sub_18009A104 @ 0x18009A104 (sub_18009A104.c)
 */

__int64 __fastcall sub_18008C918(_BYTE *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
    result = sub_180091650(&v8, a3, a4, a5);
    v7 = result;
    if ( a1 )
    {
      if ( --v9 < 0 )
        sub_18009A104(0LL, &v8);
      else
        *v8 = 0;
      return v7;
    }
  }
  else
  {
    sub_18008B020();
    return 0xFFFFFFFFLL;
  }
  return result;
}
