/*
 * XREFs of MiInsertNumaStandbyPage @ 0x140265A28
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x14000391C (MiReplaceNumaStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiSetPfnNodeBlinkHigh @ 0x140003AF8 (MiSetPfnNodeBlinkHigh.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 */

unsigned __int64 __fastcall MiInsertNumaStandbyPage(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int PfnPriority; // eax
  __int64 v3; // r10
  __int64 v4; // r11
  unsigned __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 result; // rax

  v1 = (a1 + 0x58000000000LL) / 48;
  PfnPriority = MiGetPfnPriority(a1);
  v6 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8 * ((v5 >> 40) & 0x3FF)) + 16LL)
     + 24 * (PfnPriority + 8 * ((v5 >> 36) & 3));
  v7 = 1984 * (v5 >> 58);
  ++*(_QWORD *)(v6 + v7 + 856);
  v8 = *(_QWORD *)(v6 + v7 + 872);
  if ( v8 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v6 + v7 + 864) = v1;
  }
  else
  {
    v9 = v4 + 48 * v8;
    v10 = (*(_QWORD *)v9 ^ (v1 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v9 + 39) = v1;
    *(_QWORD *)v9 = (v1 << 28) ^ v10;
  }
  *(_WORD *)(v3 + 36) = v8;
  *(_QWORD *)v3 |= 0xFFFFFFF000000000uLL;
  *(_BYTE *)(v3 + 39) = -1;
  result = MiSetPfnNodeBlinkHigh(v3, v8 >> 16, 1);
  *(_QWORD *)(v6 + v7 + 872) = v1;
  return result;
}
