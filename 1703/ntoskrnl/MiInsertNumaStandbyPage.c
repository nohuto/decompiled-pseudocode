/*
 * XREFs of MiInsertNumaStandbyPage @ 0x1400AA4D4
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x140075CB4 (MiReplaceNumaStandbyPage.c)
 *     MiInsertProtectedStandbyPage @ 0x1400AA270 (MiInsertProtectedStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 */

__int64 __fastcall MiInsertNumaStandbyPage(__int64 a1)
{
  unsigned int PfnPriority; // eax
  __int64 v2; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // r8

  PfnPriority = MiGetPfnPriority(a1);
  v5 = 91 * (v4 >> 58) + PfnPriority + 8 * ((v4 >> 36) & 3);
  v6 = 3 * v5;
  v7 = *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8 * ((v4 >> 40) & 0x3FF)) + 48LL);
  ++*(_QWORD *)(v7 + 24 * v5 + 1240);
  v8 = *(_QWORD *)(v7 + 24 * v5 + 1256);
  if ( v8 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v7 + 24 * v5 + 1248) = v3;
  }
  else
  {
    v9 = 48 * v8 - 0x58000000000LL;
    v10 = (*(_QWORD *)v9 ^ (v3 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v9 + 39) = v3;
    *(_QWORD *)v9 = (v3 << 28) ^ v10;
  }
  *(_QWORD *)v2 |= 0xFFFFFFF000000000uLL;
  result = 0xFFFFF000000000LL;
  *(_WORD *)(v2 + 36) = v8;
  v12 = (*(_QWORD *)(v2 + 24) ^ (v8 << 20)) & 0xFFFFF000000000LL;
  *(_BYTE *)(v2 + 39) = -1;
  *(_QWORD *)(v2 + 24) ^= v12;
  *(_QWORD *)(v7 + 8 * v6 + 1256) = v3;
  return result;
}
