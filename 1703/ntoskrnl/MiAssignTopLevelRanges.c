/*
 * XREFs of MiAssignTopLevelRanges @ 0x1408111C0
 * Callers:
 *     MiInitializeSystemVa @ 0x140810A84 (MiInitializeSystemVa.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     MiGetTopPteAddress @ 0x140063BE8 (MiGetTopPteAddress.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiAssignSystemVa @ 0x14081142C (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x14081150C (MiAddSubRegionEntropy.c)
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
  int v10; // eax
  __int64 result; // rax
  int *v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 TopPteAddress; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD Base[40]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Base, 0, 0x138uLL);
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
  v6 = 7LL;
  LODWORD(Base[21]) = 7;
  Base[23] = 0x10000000000LL;
  v7 = (_DWORD *)&Base[18] + 1;
  LODWORD(Base[24]) = 8;
  Base[26] = 0x8000000000LL;
  Base[29] = 0x8000000000LL;
  Base[32] = 0x8000000000LL;
  Base[35] = 0x8000000000LL;
  Base[38] = 0x8000000000LL;
  LODWORD(Base[27]) = 9;
  LODWORD(Base[30]) = 10;
  LODWORD(Base[33]) = 11;
  LODWORD(Base[36]) = 12;
  do
  {
    *v7 = ExGenRandom(1);
    v7 += 6;
    --v6;
  }
  while ( v6 );
  qsort(&Base[21], 6uLL, 0x18uLL, MiRegionAssignmentSort);
  v8 = &Base[1];
  v9 = 13LL;
  do
  {
    v10 = *((_DWORD *)v8 - 2);
    if ( v10 == 12 )
    {
      TopPteAddress = MiGetTopPteAddress((unsigned __int64)MiAssignTopLevelRanges);
      v17 = 3LL;
      result = (__int64)((TopPteAddress << 25) - v16) >> 16;
      do
      {
        result = ((result << 25) - v16) >> 16;
        --v17;
      }
      while ( v17 );
    }
    else if ( v10 == 8 && (MiFlags & 0x400000) != 0 )
    {
      result = 0xFFFFF68000000000uLL;
    }
    else
    {
      result = MiAssignSystemVa((unsigned int)((unsigned __int64)(v8[1] + 0x7FFFFFFFFFLL) >> 32) >> 7);
      if ( !result )
        return result;
    }
    *v8 = result;
    LODWORD(v6) = v6 + 1;
    v8 += 3;
  }
  while ( (unsigned int)v6 < 0xD );
  v12 = (int *)Base;
  do
  {
    v13 = *((_QWORD *)v12 + 1);
    v14 = *v12;
    v12 += 6;
    v14 *= 2LL;
    MiState[v14 + 864] = v13;
    MiState[v14 + 865] = *((_QWORD *)v12 - 1);
    --v9;
  }
  while ( v9 );
  MiAddSubRegionEntropy();
  return 1LL;
}
