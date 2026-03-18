/*
 * XREFs of MiReplaceNumaStandbyPage @ 0x1400CB30C
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400C75F8 (MiReplaceTransitionPage.c)
 * Callees:
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiSetPfnNodeBlinkHigh @ 0x1400CB4EC (MiSetPfnNodeBlinkHigh.c)
 *     MiUnlinkNumaStandbyPage @ 0x140136450 (MiUnlinkNumaStandbyPage.c)
 *     MiInsertNumaStandbyPage @ 0x140136F30 (MiInsertNumaStandbyPage.c)
 */

__int64 __fastcall MiReplaceNumaStandbyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned int PfnPriority; // eax
  unsigned int v9; // r9d
  unsigned __int16 v10; // r10
  unsigned __int64 v11; // r11
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax

  v3 = *(_QWORD *)(a2 + 40);
  v4 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
  if ( *(_QWORD *)(a1 + 40) >> 58 == v3 >> 58 && (v3 = (v3 >> 36) & 3, (_DWORD)v4 == (_DWORD)v3) )
  {
    v6 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
    PfnPriority = MiGetPfnPriority(a1);
    v12 = 3 * (PfnPriority + 8 * (v9 + 43LL * v10) + 297);
    v13 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
    v14 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8 * ((v11 >> 40) & 0x3FF)) + 16LL);
    v15 = (v13 << 28) ^ (*(_QWORD *)a2 ^ (v13 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(a2 + 39) = *(_BYTE *)(a1 + 39);
    *(_QWORD *)a2 = v15;
    if ( v13 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v14 + 24 * (PfnPriority + 8 * (v9 + 43LL * v10) + 297) + 16) = v7;
    }
    else
    {
      v16 = 48 * v13 - 0x58000000000LL;
      *(_WORD *)(v16 + 36) = v7;
      MiSetPfnNodeBlinkHigh(v16, v7 >> 16, 0LL);
    }
    v17 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
    *(_WORD *)(a2 + 36) = *(_WORD *)(a1 + 36);
    result = (*(_QWORD *)(a2 + 24) ^ (v17 << 20)) & 0xFFFFF000000000LL;
    *(_QWORD *)(a2 + 24) ^= result;
    if ( v17 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v14 + 8 * v12 + 8) = v7;
    }
    else
    {
      v19 = 48 * v17 - 0x58000000000LL;
      v20 = *(_QWORD *)v19 ^ (v7 << 28);
      *(_BYTE *)(v19 + 39) = v7;
      result = (v7 << 28) ^ v20 & 0xFFFFFFFFFLL;
      *(_QWORD *)v19 = result;
    }
  }
  else
  {
    MiUnlinkNumaStandbyPage(a1, a2, v3, v4);
    return MiInsertNumaStandbyPage(a2);
  }
  return result;
}
