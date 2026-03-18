/*
 * XREFs of MiUnlinkNumaStandbyPage @ 0x1401500F4
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x14000391C (MiReplaceNumaStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiSetPfnNodeBlinkHigh @ 0x140003AF8 (MiSetPfnNodeBlinkHigh.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 */

unsigned __int64 __fastcall MiUnlinkNumaStandbyPage(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned int PfnPriority; // eax
  unsigned __int64 v4; // r8
  __int64 v5; // rsi
  unsigned __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax

  v1 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
  v2 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
  PfnPriority = MiGetPfnPriority(a1);
  v5 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8 * ((v4 >> 40) & 0x3FF)) + 16LL)
     + 24 * (PfnPriority + 8 * ((v4 >> 36) & 3));
  result = v4 >> 58;
  v7 = 1984 * result;
  if ( v1 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v5 + v7 + 872) = v2;
  }
  else
  {
    v8 = 48 * v1 - 0x58000000000LL;
    *(_WORD *)(v8 + 36) = v2;
    result = MiSetPfnNodeBlinkHigh(v8, v2 >> 16, 0);
  }
  if ( v2 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v5 + v7 + 864) = v1;
  }
  else
  {
    v9 = 48 * v2 - 0x58000000000LL;
    v10 = *(_QWORD *)v9 ^ (v1 << 28);
    *(_BYTE *)(v9 + 39) = v1;
    result = (v1 << 28) ^ v10 & 0xFFFFFFFFFLL;
    *(_QWORD *)v9 = result;
  }
  --*(_QWORD *)(v5 + v7 + 856);
  return result;
}
