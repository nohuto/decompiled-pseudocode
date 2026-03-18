/*
 * XREFs of MiAssignTopLevelRanges @ 0x140839D10
 * Callers:
 *     MiInitializeSystemVa @ 0x14083959C (MiInitializeSystemVa.c)
 * Callees:
 *     MiGetTopPteAddress @ 0x1400B7D00 (MiGetTopPteAddress.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiAssignSystemVa @ 0x140839F54 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x14083A034 (MiAddSubRegionEntropy.c)
 */

__int64 MiAssignTopLevelRanges()
{
  __int64 v0; // r8
  int i; // edx
  __int64 v2; // rcx
  __int64 v3; // rcx
  _DWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  _DWORD *v7; // rbx
  __int64 *v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 TopPteAddress; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 result; // rax
  int *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD Base[42]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Base, 0, sizeof(Base));
  v0 = 0LL;
  for ( i = 0; i < 4; ++i )
  {
    v2 = 3 * v0;
    v0 = (unsigned int)(v0 + 1);
    LODWORD(Base[v2]) = i;
    Base[v2 + 2] = 0x100000000000LL;
  }
  v3 = 3 * v0;
  LODWORD(Base[v3]) = 4;
  v4 = (_DWORD *)Base + 1;
  Base[v3 + 2] = 0x100000000000LL;
  v5 = 5LL;
  do
  {
    *v4 = ExGenRandom(1);
    v4 += 6;
    --v5;
  }
  while ( v5 );
  qsort(Base, 5uLL, 0x18uLL, MiRegionAssignmentSort);
  LODWORD(Base[15]) = 5;
  Base[17] = 0x38000000000LL;
  LODWORD(Base[18]) = 6;
  Base[20] = 0x28000000000LL;
  v6 = 8LL;
  LODWORD(Base[21]) = 7;
  Base[23] = 0x10000000000LL;
  v7 = (_DWORD *)&Base[18] + 1;
  Base[26] = 0x10000000000LL;
  Base[29] = 0x8000000000LL;
  Base[32] = 0x8000000000LL;
  Base[35] = 0x8000000000LL;
  Base[38] = 0x8000000000LL;
  Base[41] = 0x8000000000LL;
  LODWORD(Base[24]) = 8;
  LODWORD(Base[27]) = 9;
  LODWORD(Base[30]) = 10;
  LODWORD(Base[33]) = 11;
  LODWORD(Base[36]) = 12;
  LODWORD(Base[39]) = 13;
  do
  {
    *v7 = ExGenRandom(1);
    v7 += 6;
    --v6;
  }
  while ( v6 );
  qsort(&Base[21], 7uLL, 0x18uLL, MiRegionAssignmentSort);
  v8 = &Base[1];
  v9 = 14LL;
  do
  {
    if ( *((_DWORD *)v8 - 2) == 13 )
    {
      TopPteAddress = MiGetTopPteAddress((unsigned __int64)MiAssignTopLevelRanges);
      v12 = 3LL;
      result = (__int64)((TopPteAddress << 25) - v11) >> 16;
      do
      {
        result = ((result << 25) - v11) >> 16;
        --v12;
      }
      while ( v12 );
    }
    else
    {
      result = MiAssignSystemVa((unsigned __int64)(v8[1] + 0x7FFFFFFFFFLL) >> 39);
      if ( !result )
        return result;
    }
    *v8 = result;
    LODWORD(v6) = v6 + 1;
    v8 += 3;
  }
  while ( (unsigned int)v6 < 0xE );
  v14 = (int *)Base;
  do
  {
    v15 = *((_QWORD *)v14 + 1);
    v16 = *v14;
    v14 += 6;
    v16 *= 2LL;
    MiState[v16 + 858] = v15;
    MiState[v16 + 859] = *((_QWORD *)v14 - 1);
    --v9;
  }
  while ( v9 );
  MiAddSubRegionEntropy();
  return 1LL;
}
