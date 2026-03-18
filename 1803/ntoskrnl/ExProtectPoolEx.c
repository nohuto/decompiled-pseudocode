/*
 * XREFs of ExProtectPoolEx @ 0x14004C6F8
 * Callers:
 *     SmHpBufferProtectEx @ 0x140093C88 (SmHpBufferProtectEx.c)
 *     ExProtectPool @ 0x1400BD510 (ExProtectPool.c)
 *     CmpProtectPool @ 0x1400D24AC (CmpProtectPool.c)
 *     HvpSetRangeProtection @ 0x140513D48 (HvpSetRangeProtection.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14000A140 (MiDeterminePoolType.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MmIsSpecialPoolAddress @ 0x14004C860 (MmIsSpecialPoolAddress.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall ExProtectPoolEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  int v8; // eax
  unsigned __int64 v9; // r13
  int v10; // r12d
  KIRQL v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 v16; // r14
  int v17; // r12d

  if ( (unsigned int)MmIsSpecialPoolAddress(a2) )
  {
    if ( a4 != -1 )
      return MmProtectPool(a2, a3, a4);
    return 0LL;
  }
  if ( ((a2 | a1) & 0xFFF) != 0 )
    return 0LL;
  v8 = MiDeterminePoolType(a2);
  if ( v8 == 32 )
    LOBYTE(v8) = 0;
  if ( (v8 & 0x20) != 0 )
    return 0LL;
  v9 = a2 + a3 - 1;
  v10 = 0;
  v11 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  v12 = ((int)PoolBigPageTableSize - 1) & ((40543 * (unsigned int)(a1 >> 12)) ^ ((40543
                                                                                * (unsigned __int64)(unsigned int)(a1 >> 12)) >> 32));
  if ( !PoolBigPageTable )
  {
LABEL_31:
    ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
    __writecr8(v11);
    return 0LL;
  }
  v13 = PoolBigPageTable + 24 * PoolBigPageTableSize;
  v14 = PoolBigPageTable + 24 * v12;
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    if ( (*(_QWORD *)v14 & 1) == 0 && a2 >= v15 )
    {
      v16 = *(_QWORD *)(v14 + 16);
      if ( v9 < v16 + v15
        && ((v16 & 0xFFF) == 0 || ((v9 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v16 + v15 + 4095) & 0xFFFFFFFFFFFFF000uLL)) )
      {
        break;
      }
    }
    v14 += 24LL;
    if ( v14 >= v13 )
    {
      if ( v10 == 1 )
        goto LABEL_31;
      v14 = PoolBigPageTable;
      v10 = 1;
      v13 = PoolBigPageTable + 24 * v12;
    }
  }
  v17 = *(_DWORD *)(v14 + 12);
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  __writecr8(v11);
  if ( a4 != -1 )
  {
    if ( (v16 & 0xFFF) == 0 || (v17 & 0x4000) != 0 && ((unsigned __int16)v16 & 0xFFFu) <= 0x10uLL )
      return MmProtectPool(a2, a3, a4);
    return 0LL;
  }
  return v15 == a2 && v16 == a3 && (v16 & 0xFFF) == 0;
}
