/*
 * XREFs of MiReplaceNumaStandbyPage @ 0x140075CB4
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400750E8 (MiReplaceTransitionPage.c)
 * Callees:
 *     MiSetPfnNodeBlinkHigh @ 0x140075E90 (MiSetPfnNodeBlinkHigh.c)
 *     MiInsertNumaStandbyPage @ 0x1400AA4D4 (MiInsertNumaStandbyPage.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401393EC (MiUnlinkNumaStandbyPage.c)
 */

__int64 __fastcall MiReplaceNumaStandbyPage(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r11
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax

  v3 = *(_QWORD *)(a1 + 40) >> 58;
  if ( (_WORD)v3 == *(_QWORD *)(a2 + 40) >> 58
    && ((*(_QWORD *)(a1 + 40) >> 36) & 3) == ((*(_QWORD *)(a2 + 40) >> 36) & 3) )
  {
    v5 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 3);
    v8 = 91LL * (unsigned __int16)v3 + (unsigned int)MiGetPfnPriority(a1);
    v10 = 3 * (v8 + 8 * v9);
    v11 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
    v12 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8 * ((v7 >> 40) & 0x3FF)) + 48LL);
    v13 = (*(_QWORD *)a2 ^ (v11 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(a2 + 39) = *(_BYTE *)(a1 + 39);
    *(_QWORD *)a2 = (v11 << 28) ^ v13;
    if ( v11 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v12 + 24 * (v8 + 8 * v9) + 1256) = v6;
    }
    else
    {
      v14 = 48 * v11 - 0x58000000000LL;
      *(_WORD *)(v14 + 36) = v6;
      MiSetPfnNodeBlinkHigh(v14, v6 >> 16, 0LL);
    }
    v15 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
    *(_WORD *)(a2 + 36) = *(_WORD *)(a1 + 36);
    result = (*(_QWORD *)(a2 + 24) ^ (v15 << 20)) & 0xFFFFF000000000LL;
    *(_QWORD *)(a2 + 24) ^= result;
    if ( v15 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v12 + 8 * v10 + 1248) = v6;
    }
    else
    {
      v17 = 48 * v15 - 0x58000000000LL;
      v18 = *(_QWORD *)v17 ^ (v6 << 28);
      *(_BYTE *)(v17 + 39) = v6;
      result = (v6 << 28) ^ v18 & 0xFFFFFFFFFLL;
      *(_QWORD *)v17 = result;
    }
  }
  else
  {
    MiUnlinkNumaStandbyPage();
    return MiInsertNumaStandbyPage(a2);
  }
  return result;
}
