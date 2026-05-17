/*
 * XREFs of sub_1801080E0 @ 0x1801080E0
 * Callers:
 *     PssNtWalkSnapshot @ 0x180106CC0 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1801080E0(__int64 a1, __int64 *a2, _OWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  unsigned int v9; // ecx

  if ( !*(_QWORD *)(a1 + 1008) )
    return 3221226021LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !*a2 )
  {
    result = ZwMapViewOfSection();
    if ( (int)result < 0 )
      return result;
    a2[1] = 0LL;
  }
  v7 = a2[1];
  if ( v7 >= *(_QWORD *)(a1 + 1000) )
    return 2147483674LL;
  if ( !a3 )
    return 261LL;
  v8 = *a2;
  memset(a3, 0, 0x88uLL);
  v9 = 128;
  *a3 = *(_OWORD *)(v7 + v8);
  a3[1] = *(_OWORD *)(v7 + v8 + 16);
  a3[2] = *(_OWORD *)(v7 + v8 + 32);
  a3[3] = *(_OWORD *)(v7 + v8 + 48);
  *((_QWORD *)a3 + 8) = *(_QWORD *)(v7 + v8 + 64);
  *(_OWORD *)((char *)a3 + 72) = *(_OWORD *)(v7 + v8 + 72);
  *(_OWORD *)((char *)a3 + 88) = *(_OWORD *)(v7 + v8 + 88);
  *((_QWORD *)a3 + 13) = *(_QWORD *)(v7 + v8 + 104);
  *((_QWORD *)a3 + 14) = *(_QWORD *)(v7 + v8 + 112);
  *((_WORD *)a3 + 60) = *(_WORD *)(v7 + v8 + 120);
  *((_WORD *)a3 + 61) = *(_WORD *)(v7 + v8 + 122);
  if ( *(_WORD *)(v7 + v8 + 122) >= 2u )
  {
    *((_QWORD *)a3 + 16) = v7 + v8 + 128;
    v9 = (((*(unsigned __int16 *)(v7 + v8 + 122) >> 1) + 15) & 0xFFFFFFF0) + 128;
  }
  a2[1] = v7 + v9;
  return 0LL;
}
