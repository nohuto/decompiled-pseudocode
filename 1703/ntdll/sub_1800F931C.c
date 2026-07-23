/*
 * XREFs of sub_1800F931C @ 0x1800F931C
 * Callers:
 *     sub_18000F3C8 @ 0x18000F3C8 (sub_18000F3C8.c)
 * Callees:
 *     sub_1800F9244 @ 0x1800F9244 (sub_1800F9244.c)
 *     sub_1800F948C @ 0x1800F948C (sub_1800F948C.c)
 *     sub_1800F94A8 @ 0x1800F94A8 (sub_1800F94A8.c)
 */

__int64 __fastcall sub_1800F931C(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  _DWORD *v6; // rdx
  __int64 v7; // rsi
  void *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rbx

  v4 = 0;
  if ( a2[7] )
  {
    v5 = a2[7];
    v6 = a2 + 8;
    do
    {
      v4 += *v6;
      v6 += 2;
      --v5;
    }
    while ( v5 );
  }
  v7 = a1 + 16 * (v4 % *(_DWORD *)(a1 + 720) + 46LL);
  sub_1800F948C(v7);
  if ( a2[6] || a2[5] )
  {
    LODWORD(v10) = a2[6] + (a2[5] << 16);
  }
  else
  {
    v9 = (_QWORD *)sub_1800F9244(a1, v8);
    if ( v9 )
    {
      *v9 = a2;
      v10 = (__int64)(*(_QWORD *)(a1 + 184) - (_QWORD)v9) >> 3;
      a2[6] = v10;
      a2[5] = WORD1(v10);
    }
    else
    {
      LODWORD(v10) = 0;
    }
  }
  sub_1800F94A8(v7);
  return (unsigned int)v10;
}
