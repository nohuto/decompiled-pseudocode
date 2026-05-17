/*
 * XREFs of sub_18008C738 @ 0x18008C738
 * Callers:
 *     vsprintf @ 0x18008C7C0 (vsprintf.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180091650 @ 0x180091650 (sub_180091650.c)
 *     sub_18009A104 @ 0x18009A104 (sub_18009A104.c)
 */

__int64 __fastcall sub_18008C738(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  bool v6; // sf
  unsigned int v7; // ebx
  _BYTE *v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  _BYTE *v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]

  if ( a2 && a1 )
  {
    v10 = a1;
    v8 = a1;
    v9 = 0x7FFFFFFF;
    v11 = 66;
    v5 = sub_180091650(&v8, a2, a3, a4);
    v6 = --v9 < 0;
    v7 = v5;
    if ( v6 )
      sub_18009A104(0LL, &v8);
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
