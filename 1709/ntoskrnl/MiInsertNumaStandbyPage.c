/*
 * XREFs of MiInsertNumaStandbyPage @ 0x140136F30
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x1400CB30C (MiReplaceNumaStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertNumaStandbyPage(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // r11
  char v4; // al
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 result; // rax

  v2 = (a1 + 0x58000000000LL) / 48;
  v3 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  v4 = *(_BYTE *)(a1 + 35);
  if ( (v4 & 8) != 0 )
    v5 = 5;
  else
    v5 = v4 & 7;
  v6 = v5 + 8 * (((*(_QWORD *)(a1 + 40) >> 36) & 3LL) + 43LL * (*(_QWORD *)(a1 + 40) >> 58)) + 297;
  v7 = *(_QWORD *)(v3 + 16);
  ++*(_QWORD *)(v7 + 24 * v6);
  v8 = v7 + 24 * v6;
  v9 = *(_QWORD *)(v8 + 16);
  if ( v9 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v8 + 8) = v2;
  }
  else
  {
    v10 = 48 * v9 - 0x58000000000LL;
    v11 = (*(_QWORD *)v10 ^ (v2 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v10 + 39) = v2;
    *(_QWORD *)v10 = (v2 << 28) ^ v11;
  }
  *(_QWORD *)a1 |= 0xFFFFFFF000000000uLL;
  *(_WORD *)(a1 + 36) = v9;
  result = (*(_QWORD *)(a1 + 24) ^ (v9 << 20)) & 0xFFFFF000000000LL;
  *(_BYTE *)(a1 + 39) = -1;
  *(_QWORD *)(a1 + 24) ^= result;
  *(_QWORD *)(v8 + 16) = v2;
  return result;
}
