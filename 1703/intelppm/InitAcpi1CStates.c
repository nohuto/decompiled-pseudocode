/*
 * XREFs of InitAcpi1CStates @ 0x1C002A800
 * Callers:
 *     InitAcpiCStates @ 0x1C001BF78 (InitAcpiCStates.c)
 * Callees:
 *     memset @ 0x1C0004EC0 (memset.c)
 *     IsValidAcpiGenericAddress @ 0x1C001C424 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1CStates(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // edi
  char v4; // r15
  char v5; // r14
  unsigned int v6; // r9d
  SIZE_T v7; // rbp
  unsigned int *PoolWithTag; // rax
  unsigned int *v9; // rbx
  __int64 v10; // rax

  v1 = *(_QWORD *)(a1 + 264);
  v2 = 0;
  v4 = 0;
  *(_QWORD *)(a1 + 256) |= v1 & 7;
  v5 = 0;
  v6 = 1;
  if ( (v1 & 2) != 0
    && (unsigned __int16)AcpiInfo <= 0x64u
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C001653C)
    && IsValidAcpiGenericAddress((unsigned __int8 *)(a1 + 184))
    && dword_1C0015D94 == v6 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1072), v6);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1076), v6);
    v6 = 2;
    v4 = 1;
  }
  if ( (*(_BYTE *)(a1 + 264) & 4) != 0
    && (unsigned __int16)word_1C0016522 <= 0x3E8u
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C0016554)
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C0016524)
    && IsValidAcpiGenericAddress((unsigned __int8 *)&dword_1C001653C)
    && IsValidAcpiGenericAddress((unsigned __int8 *)(a1 + 184))
    && dword_1C0015D94 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1072), 2u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 2u);
    ++v6;
    v5 = 1;
  }
  v7 = 20 * v6 + 4;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72637250u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v7);
    *v9 = 0;
    *(_QWORD *)(v9 + 1) = 0LL;
    *(_QWORD *)(v9 + 3) = 0LL;
    *((_BYTE *)v9 + 4) = 127;
    *((_BYTE *)v9 + 16) = 1;
    *((_WORD *)v9 + 9) = 0;
    v9[5] = 0;
    v10 = ++*v9;
    if ( v4 )
    {
      LOBYTE(v9[5 * v10 + 4]) = 2;
      HIWORD(v9[5 * *v9 + 4]) = AcpiInfo;
      v9[5 * *v9 + 5] = 0;
      if ( *(_DWORD *)(a1 + 188) != -4 )
      {
        LOBYTE(v9[5 * *v9 + 1]) = 1;
        BYTE1(v9[5 * *v9 + 1]) = 8;
        BYTE2(v9[5 * *v9 + 1]) = 0;
        HIBYTE(v9[5 * *v9 + 1]) = 8;
        v9[5 * *v9 + 3] = 0;
        v9[5 * *v9 + 2] = *(_DWORD *)(a1 + 188) + 4;
      }
      v10 = ++*v9;
    }
    if ( v5 )
    {
      LOBYTE(v9[5 * v10 + 4]) = 3;
      HIWORD(v9[5 * *v9 + 4]) = word_1C0016522;
      v9[5 * *v9 + 5] = 0;
      if ( *(_DWORD *)(a1 + 188) != -5 )
      {
        LOBYTE(v9[5 * *v9 + 1]) = 1;
        BYTE1(v9[5 * *v9 + 1]) = 8;
        BYTE2(v9[5 * *v9 + 1]) = 0;
        HIBYTE(v9[5 * *v9 + 1]) = 8;
        v9[5 * *v9 + 3] = 0;
        v9[5 * *v9 + 2] = *(_DWORD *)(a1 + 188) + 5;
      }
      ++*v9;
    }
    *(_QWORD *)(a1 + 496) = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
