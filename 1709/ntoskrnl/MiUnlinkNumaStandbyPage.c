/*
 * XREFs of MiUnlinkNumaStandbyPage @ 0x140136450
 * Callers:
 *     MiReplaceNumaStandbyPage @ 0x1400CB30C (MiReplaceNumaStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiUnlinkNumaStandbyPage(__int64 a1)
{
  char v1; // al
  unsigned int v2; // r8d
  unsigned __int64 v3; // rdx
  __int64 v4; // r11
  __int64 v5; // rdi
  signed __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rsi
  signed __int64 v11; // rdx
  signed __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  signed __int64 v15; // rcx

  v1 = *(_BYTE *)(a1 + 35);
  if ( (v1 & 8) != 0 )
    v2 = 5;
  else
    v2 = v1 & 7;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(unsigned __int8 *)(a1 + 39) | (*(_QWORD *)a1 >> 28) & 0xFFFFFFF00LL;
  v5 = *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
  result = qword_140388AF0;
  v7 = 3 * (v2 + 8 * (((v3 >> 36) & 3) + 43 * (v3 >> 58)) + 297);
  v8 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8 * ((v3 >> 40) & 0x3FF)) + 16LL);
  if ( v4 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v8 + 24 * (v2 + 8 * (((v3 >> 36) & 3) + 43 * (v3 >> 58)) + 297) + 16) = v5;
  }
  else
  {
    v9 = 48 * v4 - 0x58000000000LL;
    v10 = ((*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL) << 20;
    *(_WORD *)(v9 + 36) = *(_WORD *)(a1 + 36);
    v11 = *(_QWORD *)(v9 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), v10 | v11 & 0xFF00000FFFFFFFFFuLL, v11);
    v12 = result;
    if ( v11 != result )
    {
      do
      {
        v15 = v12;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v9 + 24),
                   v10 | v12 & 0xFF00000FFFFFFFFFuLL,
                   v12);
        v12 = result;
      }
      while ( v15 != result );
    }
  }
  if ( v5 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v8 + 8 * v7 + 8) = v4;
  }
  else
  {
    v13 = 48 * v5 - 0x58000000000LL;
    v14 = (*(_QWORD *)v13 ^ (v4 << 28)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(v13 + 39) = v4;
    result = (v4 << 28) ^ v14;
    *(_QWORD *)v13 = result;
  }
  --*(_QWORD *)(v8 + 8 * v7);
  return result;
}
