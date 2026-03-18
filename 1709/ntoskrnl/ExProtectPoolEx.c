/*
 * XREFs of ExProtectPoolEx @ 0x140064D70
 * Callers:
 *     CmpProtectPool @ 0x140016570 (CmpProtectPool.c)
 *     ExProtectPool @ 0x140016D30 (ExProtectPool.c)
 *     SmHpBufferProtectEx @ 0x140271E6C (SmHpBufferProtectEx.c)
 *     HvpSetRangeProtection @ 0x14047CF98 (HvpSetRangeProtection.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     MmDeterminePoolType @ 0x1400665E4 (MmDeterminePoolType.c)
 *     MmIsSpecialPoolAddress @ 0x14006660C (MmIsSpecialPoolAddress.c)
 */

__int64 __fastcall ExProtectPoolEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  int v8; // r13d
  unsigned __int64 v9; // r15
  KIRQL v10; // r12
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // r15d

  if ( (unsigned int)MmIsSpecialPoolAddress(a2) )
  {
    if ( a4 != -1 )
      return MiProtectPool(a2, a3, a4);
    return 0LL;
  }
  if ( ((a2 | a1) & 0xFFF) != 0 || (MmDeterminePoolType(a2) & 0x20) != 0 )
    return 0LL;
  v8 = 0;
  v9 = a2 + a3 - 1;
  v10 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  v11 = ((int)PoolBigPageTableSize - 1) & ((40543 * (unsigned int)(a1 >> 12)) ^ ((40543
                                                                                * (unsigned __int64)(unsigned int)(a1 >> 12)) >> 32));
  if ( PoolBigPageTable )
  {
    v12 = 3 * v11;
    v13 = 24 * v11;
    v14 = 8 * v12 + PoolBigPageTable;
    v15 = PoolBigPageTable + 24 * PoolBigPageTableSize;
    while ( 1 )
    {
      v16 = *(_QWORD *)v14;
      if ( (*(_QWORD *)v14 & 1) == 0 && a2 >= v16 )
      {
        v17 = *(_QWORD *)(v14 + 16);
        if ( v9 < v17 + v16
          && ((v17 & 0xFFF) == 0 || ((v9 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v17 + v16 + 4095) & 0xFFFFFFFFFFFFF000uLL)) )
        {
          break;
        }
      }
      v14 += 24LL;
      if ( v14 >= v15 )
      {
        if ( v8 == 1 )
        {
          ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
          __writecr8(v10);
          return 0LL;
        }
        v14 = PoolBigPageTable;
        v8 = 1;
        v15 = v13 + PoolBigPageTable;
      }
    }
    v18 = *(_DWORD *)(v14 + 12);
    ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
    __writecr8(v10);
    if ( a4 == -1 )
    {
      if ( v16 == a2 && v17 == a3 && (v17 & 0xFFF) == 0 )
        return 1LL;
    }
    else if ( (v17 & 0xFFF) == 0 || (v18 & 0x4000) != 0 && ((unsigned __int16)v17 & 0xFFFu) <= 0x10uLL )
    {
      return MiProtectPool(a2, a3, a4);
    }
    return 0LL;
  }
  else
  {
    ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
    __writecr8(v10);
    return 0LL;
  }
}
