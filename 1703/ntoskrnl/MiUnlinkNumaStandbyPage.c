/*
 * XREFs of MiUnlinkNumaStandbyPage @ 0x1401393EC
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x140075CB4 (MiReplaceNumaStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140138F10 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiSetPfnNodeBlinkHigh @ 0x140075E90 (MiSetPfnNodeBlinkHigh.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 */

signed __int64 __fastcall MiUnlinkNumaStandbyPage(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned int PfnPriority; // eax
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  signed __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax

  v1 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
  v2 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
  PfnPriority = MiGetPfnPriority(a1);
  v5 = PfnPriority + 8 * ((v4 >> 36) & 3);
  result = qword_14036C8F8;
  v7 = 91 * (v4 >> 58) + v5;
  v8 = 3 * v7;
  v9 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8 * ((v4 >> 40) & 0x3FF)) + 48LL);
  if ( v1 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v9 + 24 * v7 + 1256) = v2;
  }
  else
  {
    v10 = 48 * v1 - 0x58000000000LL;
    *(_WORD *)(v10 + 36) = v2;
    result = MiSetPfnNodeBlinkHigh(v10, v2 >> 16, 0);
  }
  if ( v2 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v9 + 8 * v8 + 1248) = v1;
  }
  else
  {
    v11 = 48 * v2 - 0x58000000000LL;
    v12 = *(_QWORD *)v11 ^ (v1 << 28);
    *(_BYTE *)(v11 + 39) = v1;
    result = (v1 << 28) ^ v12 & 0xFFFFFFFFFLL;
    *(_QWORD *)v11 = result;
  }
  --*(_QWORD *)(v9 + 8 * v8 + 1240);
  return result;
}
