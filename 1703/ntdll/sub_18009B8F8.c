/*
 * XREFs of sub_18009B8F8 @ 0x18009B8F8
 * Callers:
 *     vsprintf @ 0x18009B980 (vsprintf.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_18009C404 @ 0x18009C404 (sub_18009C404.c)
 *     sub_18009C40C @ 0x18009C40C (sub_18009C40C.c)
 */

__int64 __fastcall sub_18009B8F8(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
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
    v5 = sub_18009C40C(&v8, a2, a3, a4);
    v6 = --v9 < 0;
    v7 = v5;
    if ( v6 )
      sub_18009C404(0LL, &v8);
    else
      *v8 = 0;
    return v7;
  }
  else
  {
    sub_180095DE0();
    return 0xFFFFFFFFLL;
  }
}
