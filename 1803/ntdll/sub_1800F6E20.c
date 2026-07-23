/*
 * XREFs of sub_1800F6E20 @ 0x1800F6E20
 * Callers:
 *     sub_1800244C4 @ 0x1800244C4 (sub_1800244C4.c)
 * Callees:
 *     sub_1800F6D48 @ 0x1800F6D48 (sub_1800F6D48.c)
 *     sub_1800F6F90 @ 0x1800F6F90 (sub_1800F6F90.c)
 *     sub_1800F6FAC @ 0x1800F6FAC (sub_1800F6FAC.c)
 */

__int64 __fastcall sub_1800F6E20(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax
  _DWORD *v6; // rdx
  __int64 v7; // rsi
  void *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rbx

  v2 = a2[7];
  v5 = 0;
  if ( a2[7] )
  {
    v6 = a2 + 8;
    do
    {
      v5 += *v6;
      v6 += 2;
      --v2;
    }
    while ( v2 );
  }
  v7 = a1 + 16 * (v5 % *(_DWORD *)(a1 + 720) + 46LL);
  sub_1800F6F90(v7);
  if ( a2[6] || a2[5] )
  {
    LODWORD(v10) = a2[6] + (a2[5] << 16);
  }
  else
  {
    v9 = (_QWORD *)sub_1800F6D48(a1, v8);
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
  sub_1800F6FAC(v7);
  return (unsigned int)v10;
}
