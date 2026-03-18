/*
 * XREFs of MiReplaceNumaStandbyPage @ 0x14000391C
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400031F8 (MiReplaceTransitionPage.c)
 * Callees:
 *     MiSetPfnNodeBlinkHigh @ 0x140003AF8 (MiSetPfnNodeBlinkHigh.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401500F4 (MiUnlinkNumaStandbyPage.c)
 *     MiInsertNumaStandbyPage @ 0x140265A28 (MiInsertNumaStandbyPage.c)
 */

__int64 __fastcall MiReplaceNumaStandbyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned int PfnPriority; // eax
  unsigned __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // rbp
  unsigned __int16 v12; // r10
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax

  v3 = *(_QWORD *)(a2 + 40);
  v4 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
  if ( *(_QWORD *)(a1 + 40) >> 58 == v3 >> 58 && (v3 = (v3 >> 36) & 3, (_DWORD)v4 == (_DWORD)v3) )
  {
    v6 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
    PfnPriority = MiGetPfnPriority(a1);
    v11 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8 * ((v9 >> 40) & 0x3FF)) + 16LL) + 24 * (PfnPriority + 8 * v10);
    v13 = 1984LL * v12;
    v14 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
    *(_BYTE *)(a2 + 39) = *(_BYTE *)(a1 + 39);
    *(_QWORD *)a2 = (v14 << 28) ^ (*(_QWORD *)a2 ^ (v14 << 28)) & 0xFFFFFFFFFLL;
    if ( v14 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v13 + v11 + 872) = v7;
    }
    else
    {
      v15 = 48 * v14 - 0x58000000000LL;
      *(_WORD *)(v15 + 36) = v7;
      MiSetPfnNodeBlinkHigh(v15, v7 >> 16, 0LL);
    }
    v16 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
    *(_WORD *)(a2 + 36) = *(_WORD *)(a1 + 36);
    result = (*(_QWORD *)(a2 + 24) ^ (v16 << 20)) & 0xFFFFF000000000LL;
    *(_QWORD *)(a2 + 24) ^= result;
    if ( v16 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v13 + v11 + 864) = v7;
    }
    else
    {
      v18 = 48 * v16 - 0x58000000000LL;
      v19 = *(_QWORD *)v18 ^ (v7 << 28);
      *(_BYTE *)(v18 + 39) = v7;
      result = (v7 << 28) ^ v19 & 0xFFFFFFFFFLL;
      *(_QWORD *)v18 = result;
    }
  }
  else
  {
    MiUnlinkNumaStandbyPage(a1, a2, v3, v4);
    return MiInsertNumaStandbyPage(a2);
  }
  return result;
}
