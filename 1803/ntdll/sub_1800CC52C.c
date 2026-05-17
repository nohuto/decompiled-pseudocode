/*
 * XREFs of sub_1800CC52C @ 0x1800CC52C
 * Callers:
 *     sub_1800CB704 @ 0x1800CB704 (sub_1800CB704.c)
 *     sub_1800CC418 @ 0x1800CC418 (sub_1800CC418.c)
 *     sub_1800E9094 @ 0x1800E9094 (sub_1800E9094.c)
 * Callees:
 *     sub_1800CC5F8 @ 0x1800CC5F8 (sub_1800CC5F8.c)
 */

__int64 __fastcall sub_1800CC52C(_WORD *a1, __int64 a2, _WORD *a3, _QWORD *a4, _QWORD *a5)
{
  _WORD *v5; // rdi
  int v6; // r10d
  __int64 v8; // rbx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = a1;
  v6 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v6 = -1073741811;
  v8 = a2;
  if ( v6 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v6 = 0;
    if ( a2 )
    {
      v10[0] = 0LL;
      v6 = sub_1800CC5F8(a1, a2, v10, a3);
      v8 -= v10[0];
      v5 += v10[0];
      if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147483643 )
        return (unsigned int)v6;
    }
    else if ( *a3 )
    {
      if ( !a1 )
        return (unsigned int)-1073741811;
      v6 = -2147483643;
    }
    if ( a4 )
      *a4 = v5;
    if ( a5 )
      *a5 = v8;
  }
  return (unsigned int)v6;
}
