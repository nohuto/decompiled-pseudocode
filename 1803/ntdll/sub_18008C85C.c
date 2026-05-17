/*
 * XREFs of sub_18008C85C @ 0x18008C85C
 * Callers:
 *     _vswprintf @ 0x18008C850 (_vswprintf.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180091FB0 @ 0x180091FB0 (sub_180091FB0.c)
 *     sub_18009A104 @ 0x18009A104 (sub_18009A104.c)
 */

__int64 __fastcall sub_18008C85C(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  bool v6; // sf
  unsigned int v7; // ebx
  _BYTE *v8; // rcx
  _BYTE *v9; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+38h] [rbp-28h]
  _BYTE *v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]

  if ( a2 && a1 )
  {
    v11 = a1;
    v9 = a1;
    v12 = 66;
    v10 = 0x7FFFFFFF;
    v5 = sub_180091FB0(&v9, a2, a3, a4);
    v6 = --v10 < 0;
    v7 = v5;
    if ( v6 )
    {
      sub_18009A104(0LL, &v9);
      v8 = v9;
    }
    else
    {
      *v9 = 0;
      v8 = ++v9;
    }
    if ( --v10 < 0 )
      sub_18009A104(0LL, &v9);
    else
      *v8 = 0;
    return v7;
  }
  else
  {
    sub_18008B020();
    return 0xFFFFFFFFLL;
  }
}
