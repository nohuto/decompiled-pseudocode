/*
 * XREFs of sub_1800D6AA4 @ 0x1800D6AA4
 * Callers:
 *     sub_1800D5F44 @ 0x1800D5F44 (sub_1800D5F44.c)
 *     sub_1800D6990 @ 0x1800D6990 (sub_1800D6990.c)
 *     sub_1800ED010 @ 0x1800ED010 (sub_1800ED010.c)
 * Callees:
 *     sub_1800D6B70 @ 0x1800D6B70 (sub_1800D6B70.c)
 */

__int64 __fastcall sub_1800D6AA4(_WORD *a1, __int64 a2, _WORD *a3, _QWORD *a4, _QWORD *a5)
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
      v6 = sub_1800D6B70(a1, a2, v10, a3);
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
