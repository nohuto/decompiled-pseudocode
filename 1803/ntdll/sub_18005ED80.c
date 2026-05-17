/*
 * XREFs of sub_18005ED80 @ 0x18005ED80
 * Callers:
 *     sub_18005EC0C @ 0x18005EC0C (sub_18005EC0C.c)
 * Callees:
 *     sub_18005EE34 @ 0x18005EE34 (sub_18005EE34.c)
 *     sub_18005EE4C @ 0x18005EE4C (sub_18005EE4C.c)
 *     sub_180062AA4 @ 0x180062AA4 (sub_180062AA4.c)
 */

__int64 __fastcall sub_18005ED80(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 v8; // r10
  unsigned __int64 v9; // r9
  char v10; // di
  __int64 v11; // rsi
  __int64 v12; // r11
  signed __int64 v13; // rdx
  signed __int64 v14; // rax
  bool i; // zf
  signed __int64 v17; // rcx
  _BYTE v18[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h] BYREF

  if ( a4 )
  {
    v7 = sub_18005EE4C(a1, (__int64)a2 / 0x8000, v18, &v19);
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      v9 = a2 >> 6;
      v10 = a2 & 0x3F;
      v11 = a4 << v10;
      v12 = ~(3LL << v10);
      v13 = *(_QWORD *)(v8 + 8 * v9);
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8 * v9), v11 | v12 & v13, v13);
      for ( i = v13 == v14; !i; i = v17 == v14 )
      {
        v17 = v14;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8 * v9), v11 | v12 & v14, v14);
      }
      v7 = 0;
      sub_18005EE34(v18);
    }
    return (unsigned int)v7;
  }
  else
  {
    sub_180062AA4(a1, a2, 2LL);
    return 0LL;
  }
}
