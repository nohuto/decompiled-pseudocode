/*
 * XREFs of MiDemotePfnListChain @ 0x1402689E8
 * Callers:
 *     MiMakeLargePageTable @ 0x14025BAE8 (MiMakeLargePageTable.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 */

__int64 __fastcall MiDemotePfnListChain(__int64 a1, int a2)
{
  int v2; // r13d
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  unsigned __int8 CurrentIrql; // cl
  unsigned int v13; // r13d
  __int64 v14; // r15
  unsigned __int8 v15; // [rsp+30h] [rbp-58h]
  unsigned __int64 v17; // [rsp+A8h] [rbp+20h]

  v2 = a2;
  result = (unsigned int)(a2 - 1);
  do
  {
    v5 = *(_QWORD *)(a1 + 8 * result);
    v6 = (unsigned int)result;
    while ( !v5 )
    {
      if ( !(_DWORD)v6 )
        return result;
      v6 = (unsigned int)(v6 - 1);
      v5 = *(_QWORD *)(a1 + 8LL * (unsigned int)v6);
    }
    v7 = (unsigned int)(v6 + 1);
    v8 = (unsigned int)v6;
    *(_QWORD *)(a1 + 8 * v6) = *(_QWORD *)v5;
    if ( (unsigned int)v7 <= 1 )
    {
      v10 = MiLargePageSizes[v7];
      v9 = 512LL;
      v11 = MiLargePageContainingFrames[v7];
    }
    else
    {
      MiUpdateLargePageBitMap(
        *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v5 + 40) >> 40) & 0x3FFLL)),
        (v5 + 0x58000000000LL) / 48,
        MiLargePageSizes[v6],
        0,
        1);
      v9 = MiLargePageSizes[v8];
      v10 = 1LL;
      v11 = 0LL;
    }
    v17 = v9;
    CurrentIrql = KeGetCurrentIrql();
    v15 = CurrentIrql;
    __writecr8(2uLL);
    if ( v9 )
    {
      v13 = 0;
      v14 = v11 & 0xFFFFFFFFFLL;
      do
      {
        *(_QWORD *)v5 = *(_QWORD *)(a1 + 8LL * (unsigned int)v7);
        *(_QWORD *)(a1 + 8LL * (unsigned int)v7) = v5;
        MiLockPageAtDpcInline(v5);
        if ( v10 == 1 )
          *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
        *(_QWORD *)(v5 + 40) = v14 | *(_QWORD *)(v5 + 40) & 0xFFFFFFF000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        ++v13;
        v5 += 48 * v10;
      }
      while ( v13 < v17 );
      v2 = a2;
      CurrentIrql = v15;
    }
    __writecr8(CurrentIrql);
    result = (unsigned int)(v2 - 1);
  }
  while ( (_DWORD)v7 != v2 );
  return result;
}
