/*
 * XREFs of sub_180108260 @ 0x180108260
 * Callers:
 *     PssNtWalkSnapshot @ 0x180106CC0 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180108260(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int16 v10; // ax

  if ( !*(_QWORD *)(a1 + 920) )
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
  v7 = *((unsigned int *)a2 + 2);
  if ( v7 >= *(unsigned int *)(a1 + 916) )
    return 2147483674LL;
  if ( !a3 )
    return 261LL;
  v8 = *a2;
  memset(a3, 0, 0x50uLL);
  *a3 = *(_QWORD *)(v7 + v8);
  v9 = 72LL;
  a3[1] = *(_QWORD *)(v7 + v8 + 8);
  *((_DWORD *)a3 + 4) = *(_DWORD *)(v7 + v8 + 16);
  a3[3] = *(_QWORD *)(v7 + v8 + 24);
  *((_DWORD *)a3 + 8) = *(_DWORD *)(v7 + v8 + 32);
  *((_DWORD *)a3 + 9) = *(_DWORD *)(v7 + v8 + 36);
  *((_DWORD *)a3 + 10) = *(_DWORD *)(v7 + v8 + 40);
  *((_DWORD *)a3 + 11) = *(_DWORD *)(v7 + v8 + 48);
  *((_DWORD *)a3 + 12) = *(_DWORD *)(v7 + v8 + 52);
  a3[7] = *(_QWORD *)(v7 + v8 + 56);
  *((_DWORD *)a3 + 16) = *(_DWORD *)(v7 + v8 + 64);
  if ( (*(_DWORD *)(a1 + 8) & 0x1000) != 0
    && v7 + 76 <= *(unsigned int *)(a1 + 916)
    && (*(_DWORD *)(v7 + v8 + 40) == 0x1000000 || *(_DWORD *)(v7 + v8 + 40) == 0x40000) )
  {
    v10 = *(_WORD *)(v7 + v8 + 72);
    *((_WORD *)a3 + 34) = v10;
    if ( v10 )
      a3[9] = v7 + v8 + 74;
    v9 = *((unsigned __int16 *)a3 + 34) + 74LL;
  }
  a2[1] = v7 + ((v9 + 7) & 0xFFFFFFF8LL);
  return 0LL;
}
