/*
 * XREFs of MiDemotePfnListChain @ 0x14022E394
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x1400C3F64 (MiMakeZeroedPageTableRange.c)
 *     MiMakeLargePageTable @ 0x1400C46E8 (MiMakeLargePageTable.c)
 *     MiMapUserLargePages @ 0x1406EC0E4 (MiMapUserLargePages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 */

__int64 __fastcall MiDemotePfnListChain(__int64 a1, int a2)
{
  int v2; // r15d
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rbp
  unsigned __int8 CurrentIrql; // al
  unsigned int v13; // r12d
  unsigned __int64 v14; // r15
  __int64 v15; // rbp
  unsigned __int8 v16; // [rsp+30h] [rbp-58h]

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
        *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v5 + 40) >> 40) & 0x3FFLL)),
        (v5 + 0x58000000000LL) / 48,
        MiLargePageSizes[v6],
        0,
        1);
      v9 = MiLargePageSizes[v8];
      v10 = 1LL;
      v11 = 0LL;
    }
    CurrentIrql = KeGetCurrentIrql();
    v16 = CurrentIrql;
    __writecr8(2uLL);
    v13 = 0;
    if ( v9 )
    {
      v14 = v9;
      v15 = v11 & 0xFFFFFFFFFLL;
      do
      {
        *(_QWORD *)v5 = *(_QWORD *)(a1 + 8LL * (unsigned int)v7);
        *(_QWORD *)(a1 + 8LL * (unsigned int)v7) = v5;
        MiLockPageAtDpcInline(v5);
        if ( v10 == 1 )
          *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
        *(_QWORD *)(v5 + 40) = v15 | *(_QWORD *)(v5 + 40) & 0xFFFFFFF000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        ++v13;
        v5 += 48 * v10;
      }
      while ( v13 < v14 );
      v2 = a2;
      CurrentIrql = v16;
    }
    __writecr8(CurrentIrql);
    result = (unsigned int)(v2 - 1);
  }
  while ( (_DWORD)v7 != v2 );
  return result;
}
